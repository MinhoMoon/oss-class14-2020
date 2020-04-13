#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main()
{
	printf("hello World!!!\n");
	
	int a = 3, int b = 2;
	printf("a+b = %d\n", add(a, b));
	return 0;
}
