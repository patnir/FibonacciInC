#include<stdio.h>
#include<stdlib.h>

long int fib(int n) 
{
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

long int linear_fib (int n) {
	int result;
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	long int n1 = 0;
	long int n2 = 1;
	int i;
	for (i = 0; i < n; i++) {
		result = n1 + n2;
		n1 = n2;
		n2 = result;
	}
	return n1;
}
int main (int argc, char ** argv)
{
	int i = atoi(argv[1]);
	fprintf(stdout, "The fib is %ld\n", fib(i));
	fprintf(stdout, "The linear fib is %ld\n", linear_fib(i)); 
	return EXIT_SUCCESS;
}
