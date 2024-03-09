//Input a number and display whether number is Even or Odd.

#include<stdio.h>
int main ()
{
int a;

printf("enter the no.:");
scanf("%d", &a);

if(a%2==0)
{
printf(" the no is even %d ",a);
}
else{
printf("the no is odd %d",a);
}


return 0;
}
