#include<stdio.h>

int main()
{
	int num, sum = 0, rev, save;
	
	printf("enter the number which you want to search : ");
	scanf("%d", &num);
	
	save = num;
	
	while(num>0)
	{
		rev = num%10;
		sum = sum+rev*rev*rev;
		num = num/10;
	}
	
	printf("\n the number = %d", sum);
	
	if(save == sum)
	printf("\n the number is a armstrong number....");
	else
	printf("\n the number is not a armstrong number....");
}
