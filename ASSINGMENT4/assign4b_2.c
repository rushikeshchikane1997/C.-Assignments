//Write a function to calculate power using recursion.
#include<stdio.h>

power(int base, int exp);
int base,exp;

int main()

{
   printf("enter the base");
   scanf("%d", &base);

   printf("enter the exp");
   scanf("%d", &exp);
   
  printf("power is %d", power(base, exp));
  

   return 0;
}

power(int base, int exp)
{

if(exp==0)
   {
       return 1;
   } 
else 
{ 
   return base * power(base, exp - 1);
}

}




























































































