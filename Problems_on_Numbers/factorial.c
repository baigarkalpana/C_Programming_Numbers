/*
   Author-Kalpana Baigar
   program to find factorial

*/

#include<stdio.h>


void factdisplay(int);     //function defination
int main()            //entry point function
{ 
     int num=0;
     printf("enter number:\n");
     scanf("%d",&num);
     
     factdisplay(num);         //funciton call
     
     
  
}
void factdisplay(int inum)            //function defination
{
	int i=0,mult=1;
	for(i=inum;i>=1;i--)
	{
		mult=mult*i;
	}
	printf("factorial og given num is: %d",mult);
}
	
	
	
