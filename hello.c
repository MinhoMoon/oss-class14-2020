#include <stdio.h>

int sub(int a, int b)
{
	return a + b;
}

// 
// comment: subtract function
int subtract(int a, int b)
{
	return (a - b);
}
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
	
	int a = 30, int b = 20;
	printf("a+b = %d\n", add(a, b));
	return 0;
}
