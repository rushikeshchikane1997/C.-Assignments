





























#include<stdio.h>

fibonacci_series(void);
int n;
int main()
{


 printf("enter the number limit");
 scanf("%d",&n);

fibonacci_series();

 return 0;
}


fibonacci_series(void)
{
  int i,a=0,b=1,c;
for(i=1;i<=n;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}

}





