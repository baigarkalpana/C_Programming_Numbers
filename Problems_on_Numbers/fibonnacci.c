/*
   Author:Kalpana Baigar
   Program to printing Fibonacci series
*/


#include<stdio.h>

void fibonacci(int range)          //function defination
{
	int first=0,second=1,i,sum=0;
	 printf("%d %d",first,second);
	for(i=2;i<range;i++)
	{
	
	  sum=first+second;
	  printf(" %d",sum);
	  first=second;
	  second=sum;
	  
    }
}


int main(void)                // entry point function
{
	int num=0;
	printf("enter number");  //accepting range from user
	scanf("%d",&num);
	fibonacci(num);
}




