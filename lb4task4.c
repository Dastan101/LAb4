#include <stdio.h>
#include <stdlib.h>

int main () {
	int *p = NULL;
	int *x = (int *) malloc(sizeof(int));
	//int *x1 = (int *) free();
	printf("Size of *x %d\n",*x);
	
}
//Answer: No error even without free() function call
/*(gdb) run
Starting program: /home/dastan/Desktop/Lab_Sys/lb4task4 
Size of *x 0
[Inferior 1 (process 12465) exited with code 015]*/

/*valgrind --leak-check=yes lb4task4 -g
valgrind: lb4task4: command not found*/
