#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main()
{
	printf("hello\nWorld!!!");
	return 0;
}
