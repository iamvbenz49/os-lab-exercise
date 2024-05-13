#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main(int argc, char *argv[]) {
	int fd1, fd2;
	char *file1, *file2, buff[2];
	file1 = argv[1];
	file2 = argv[2];
	fd1 = open(file1, O_RDONLY, 0777);
	if(fd1==-1){
		printf("file not found");
		return;
	}
	fd2 = creat(file2,0777);
	while(read(fd1, buff, 1))
		write(fd2, buff, 1);
	printf("\nCopied");
	close(fd1);
	close(fd2);
}
