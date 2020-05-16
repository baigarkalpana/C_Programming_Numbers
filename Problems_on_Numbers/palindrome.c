/*
   Author-Kalpana Baigar
   program to check number is palindrome or not

*/

#include<stdio.h>


int reverse(int);     //function defination
int main()            //entry point function
{ 
  
     int num=0,iret=0;
     printf("enter number:\n");
     scanf("%d",&num);
     
     iret=reverse(num);         //funciton call
     if(iret==num)        //if reverted number and main number is same,den it is palindrome number
	 {
	    printf("palindrome number");	
	 }     
	 else
	 {
	 	printf("not a palindrome number");
	 }
     
  
}

int reverse(int inum)            //function defination
{
	int digit=0,rev=0;
	
	while(inum!=0)
	{
		digit=inum%10;
		rev=rev*10+digit;
		inum=inum/10;
	}
	
	
	return rev;                 //returning value 
	
}
	
	
	
