#include <stdio.h>
void increase_by_one(int x)
{
	x++;
}

int main()
{
	int num = 5;

	printf("Value before function");
	printf(" call %d\n", num);

	increase_by_one(num);

	printf("Value after function");
	printf(" call %d\n", num);
}
