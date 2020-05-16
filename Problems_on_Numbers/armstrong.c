/*
   Author-Kalpana Baigar
   program to check wether number is armstrong or not

*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>


bool armstrongd(int inum)            //function defination
{
	int temp=inum;
	int digit=0,res=0,sum=0;
	while(inum!=0)
	{
		digit=inum%10;
		res = pow(digit, 3);
		sum=sum+res;
		inum=inum/10;
	}
	
	if(temp==sum)
	{
		return true;                //returning true
	}
	
	else
	{
		return false;              //returning false
	}
	
	
	
}
	
	
	
int main()            //entry point function
{ 
     bool iret;
     int num=0;
     printf("enter number:\n");
     scanf("%d",&num);
     
     iret=armstrongd(num);         //funciton call
    
     if(iret==true)
     {
     	printf("number is armstrong");
	 }
     else
     {
     	printf("number is not  armstrong");
	 }
     
  
}


