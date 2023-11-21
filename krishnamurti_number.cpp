#include<stdio.h>

int main()
{
	int num, sum=0, rev, save, i, f;
	
	printf("enter the number which ypu want to search : ");
	scanf("%d", &num);
	
	save = num;
	
	while(num>0)
	{
		rev = num%10;
		f = 1;
		for(i=1; i<=rev; i++)
		{
			f= f*i;
		}
		sum = sum+f;
		num = num/10;
	}
	
	printf("\n the number = %d", sum);
	
	if(save == sum)
	printf("\n the number is a krishnamurti number.......");
	else
	printf("\n the number is not a krishnamurti number.........");
	
}
