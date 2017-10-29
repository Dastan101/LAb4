#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(){ 
	//int * p = NULL;
	//int *x = (int *) malloc(sizeof(int));
	/**int *y = (int *) malloc(10 * sizeof(int));
	double *d = (double *) malloc(10 * sizeof(double));
	printf("Size of p: %d\n",*p);
	printf("Size of *x %d\n",*x);
	printf("Size of *y %d\n",*y);
	printf("%d\n",p[0]);**/
	int flag = 0;
	char *src = "hello";
	char *dst = (char *) malloc(strlen(src)+1);
	strcpy(src,dst);

}
int main(){
	func();
	return 0;
}
//Answer:
//Program received signal SIGSEGV, Segmentation fault.
//__strcpy_sse2_unaligned ()
//    at ../sysdeps/x86_64/multiarch/strcpy-sse2-unaligned.S:532
//532	../sysdeps/x86_64/multiarch/strcpy-sse2-unaligned.S: No such file or directory.

