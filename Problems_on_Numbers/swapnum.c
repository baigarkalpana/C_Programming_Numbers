/*
   Author:Kalpana Baigar
    program to swap two numbers
 */

#include<stdio.h>         //including the header files to read input nad output

void swap(int *,int *);  //function defination of swapping two numbers


void main()
{
	int num1=0,num2=0;   //Initialization
	
	printf("enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	printf("\nyour entered number is:%d and %d",num1,num2);
	
	swap(&num1,&num2);   //function call by address
	printf("\nafter swapping number is:");
	printf("\nnum1=%d and num2=%d",num1,num2);
	
	
}


void swap(int* ptr1,int* ptr2)
{
	int temp=0;
	temp= *ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
}










