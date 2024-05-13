#include<stdio.h>
#include<dirent.h>

void main(int argc, char *argv[]) {
	DIR *dname;
	struct dirent *dptr;
	if(argc!=2){
		printf("thambi enter file spaah\n");
		return;
	}
	if((dname=opendir(argv[1]))==NULL){
		perror(argv[1]);
	}
	while(dptr=readdir(dname)){
		printf("%s\n",dptr->d_name);
	}
}
