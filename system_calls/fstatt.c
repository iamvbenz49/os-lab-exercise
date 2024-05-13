#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>

void main() {
	int filedesc1, filedesc2, n;
	char source[30], buffer[5];
	struct stat sourcestat, deststat;
	filedesc1 = creat("file.txt",0644);
	printf("enter file to be copied ");
	scanf("%s",source);
	filedesc2 = open(source, 0);
	if(filedesc2== -1){
		perror("file doesn.t exist");
		return;
	}
	while((n=read(filedesc2,buffer,1))>0){
		write(filedesc1,buffer,n);
	}
	fstat(filedesc2,&sourcestat);
	printf("source file size : %d\n", sourcestat.st_size);
	fstat(filedesc1,&deststat);
	printf("Destination file size : %d\n", deststat.st_size);
	close(filedesc2);
	close(filedesc1);
}
