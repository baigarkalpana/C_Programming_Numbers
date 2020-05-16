/*
  Author: Kalpana Baigar
  program to break integer into digits
 */

#include<stdio.h>

void chknumber(int inum)  //function defination for printing digits
{
	int digit=0,cnt=1;    //variable initialization
	while(inum!=0)        //while loop condition
	{
		digit=inum%10;
		printf("digit at place %d is %d\n",cnt,digit);  //printing digits
        cnt++;            //incremented by 1
        inum=inum/10;
	}
}

int main()                      //Entry point function
{

	int num=0;                  //variable initialization
	printf("Enter number\n");   //Accepting number from user
	scanf("%d",&num);
	printf("Entered number is %d:\n",num);
	chknumber(num);             //function call

	return 0;
}
