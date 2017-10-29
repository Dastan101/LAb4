#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(void){
	int* x = malloc(10 * sizeof(int));
	x[10]=0;
	int flag = 0;
	
}

int main(void){
	func();
	return 0;
}
