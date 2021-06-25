#include<stdio.h>
int main ()
{
	int a=5;
	int b=20;
	int c;
	if(a&&b)
	{
		printf("Line 1-condition is true\n");
	}
	if(a||b)
	{
		printf("Line 2 -condition is true\n");
	}
	/*Let change the values of a and b*/
	a=0;
	b=1;
	if(a&&b)
	{
		printf("Line 3-condition is true\n");
	}
	else
	{
		rintf("Line 3-condition is false\n");
	}
	if(!(a&&b))
	{
		printf("Line 4-condition is true\n");
	}
}