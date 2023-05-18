#include<stdio.h>
maim()
{
	int n,rem=0,rev,temp;
	
	printf("enter number:");
	scanf("%d",&n);
	temp=(n>0);
	while(n>0)
	{
		rev=n%10;
		rem=(rem*10)+rev;
		n=n/10;
	}
	if(temp==rem)
	{
		printf("this no is palindrome");
	}
	else
	{
		printf("this no is not palindrome");
	}
}
