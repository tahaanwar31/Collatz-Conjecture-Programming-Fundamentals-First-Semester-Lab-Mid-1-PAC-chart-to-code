#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main()
{
	int number,steps=0;
	printf("Enter starting number: \n");
	scanf("%d",&number);
	while (number!=1)
	{
		if ((number%2)==0)
		{
			number=number/2;
		}
		else
		{
			number=number*3;
			number=number+1;
		}
		steps=steps+1;
	}
	printf("Number of steps to reach 1:%d\n",steps);
}