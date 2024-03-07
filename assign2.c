//Write a program to accept three integer numbers and find its average.

#include<stdio.h>
int main ()
{
int n1, n2, n3, avg;

    printf("enter the no: ");
	scanf("%d=n1", &n1);

    printf("enter the no: ");
	scanf("%d=n2", &n2);

    printf("enter the no: ");
	scanf("%d=n3", &n3);

	avg = (n1+n2+n3)/3;
    printf("averrage of the no:%d",avg);
	return 0;
	}

