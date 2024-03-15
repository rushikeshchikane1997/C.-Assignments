
#include<stdio.h>
int main(void)
{
	int num;
	int base, index;


	printf("Enter base and index : ");
	scanf("%d %d", &base, &index);
	
	printf( "%d\n", mpower(base, index));
	
	return 0;

}

int mpower(int base, int index)
{
	int p = 1;
	for(int i = 1 ; i <= index ; i++)
		p *= base;
	return p;
}





































