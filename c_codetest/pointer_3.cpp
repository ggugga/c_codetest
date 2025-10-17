#include <stdio.h>

int arithmetic(int a, int b, int * pr , int *sr, int *xr){

	*pr = a - b;
	*sr = a * b;
	*xr = a / b;

	return a+b;
}

int main(void) {

	int a = 8, b = 2; 
	int ar, br, cr = 0;

	arithmetic(a, b, &ar, &br, &cr);

	printf("»¬¼À: %d °ö¼Á: %d ³ª´°¼À: %d\n", ar, br, cr);
		return 0;
}