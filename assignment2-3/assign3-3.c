//Write a program to print table of given number.


#include<stdio.h>

int main()

{
 int res,num,i = 1 ;

 printf("enter the no.");
 scanf("%d", &num);
 
 printf("table for the given no. %d", num);

	while(num<=10)
{
	
	res = num*i;

printf("%d",res);
		i++;
}
	return 0;

}	
























































