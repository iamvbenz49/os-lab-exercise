#include<stdio.h>
#include<string.h>

void main(){
	char filename[30], pattern[30], temp[200];
	FILE *fp;
	printf("enter file name : ");
	scanf("%s",&filename);
	printf("\nentee the pattern : " );
	scanf("%s",&pattern);
	fp = fopen(filename,"r");
	if(fp==NULL){
		printf("file not found");
	} else {
		while(!feof(fp)){
			fgets(temp,200,fp);
			if(strstr(temp,pattern)!=NULL)
				printf("%s",temp);
				
		}
		fclose(fp);
	}
}
