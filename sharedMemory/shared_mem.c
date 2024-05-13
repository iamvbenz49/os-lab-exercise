#include<stdio.h>
#include<sys/shm.h>

void main(){
	int shmid;
	key_t key = 0 * 10;
	shmid = shmget(key, 100, IPC_CREAT | 0666);
	if(shmid < 0)
		printf("First SHMID failed");
	else 
		printf("First SHMID succeeded %d",shmid);
	shmid = shmget(key, 101, IPC_CREAT | 0666);
	if(shmid < 0)
		printf("Second SHMID failed");
	else 
		printf("\nSecond SHMID succeeded %d",shmid);
	shmid = shmget(key, 90, IPC_CREAT | 0666);
	if(shmid < 0)
		printf("Third SHMID failed");
	else 
		printf("\nThird SHMID succeeded %d",shmid);
}
