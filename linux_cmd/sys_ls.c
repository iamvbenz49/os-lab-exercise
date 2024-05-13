#include<stdio.h>
#include<dirent.h>

void main(){
	struct dirent **files;
	char dir[100];
	int n;
	printf("enter directory name : ");
	scanf("%s",&dir);
	n = scandir(dir,&files,0,alphasort);
	if(n<0){
		printf("No files found");
	} else {
		for(int i=0;i<n;i++){
			printf("%s\n",files[i]->d_name);
		}
	}
}
