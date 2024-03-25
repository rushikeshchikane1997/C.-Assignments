#include<stdio.h>

int isLeapYear(int year);
int year;
int main()
{



	printf(" enter the year");
	scanf("%d",&year);

	isLeapYear(year);


	return 0;
}



int isLeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

		printf("year is leap");


	} else { 

		printf("not leap year");
	}
}




















































