#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(){ 
	int *p = NULL;//here we didn't allocate room using malloc() in heap 
	int *x = (int *) malloc(sizeof(int));//Here we used 
	printf("Size of *x %d\n",*x);
	printf("Sixe of *p %d\n",*p);
}
int main(){
	func();
	return 0;
}

//Answer:
/* X: Size of *x 0
P:Segmentation fault (core dumped)*/
