/*
   Author-Kalpana Baigar
   program to check number is perfect number or not

*/

#include<stdio.h>


int perfectnum(int);     //function defination
int main()            //entry point function
{ 
  
     int num=0,iret=0;
     printf("enter number:\n");
     scanf("%d",&num);
     
     iret=perfectnum(num);         //funciton call
     if(iret==num)        //if reverted numberis equal to sum of its divisors den it is a perfect number
	 {
	    printf("perfect number");	
	 }     
	 else
	 {
	 	printf("not a perfect number");
	 }
     
  
}

int perfectnum(int inum)            //function defination
{
	int i=0,sum=0;
	
	for(i=1;i<inum;i++)
	{
		if(inum%i==0)
		{
			sum=sum+i;
			
		}
	}
	
	return sum;                 //returning value 
	
}
	
	
	
