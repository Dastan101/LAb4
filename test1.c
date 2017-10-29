#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
	printf("Hello world (pid:%d)\n",(int) getpid());
	int f = fork();
	int wc = wait();
	if(f==0){
		printf("Fork<0 \n");
	}
	else if(f<0){
		printf("F==0 f:%d, pid:%d \n",f,(int) getpid());
	}
	else if(f>0){
		
		printf("f>0 f:%d,wait:%d ,pid%d\n",f,wc,(int) getpid());	
	}
}
