

#include <stdio.h>

int main() {
    int res, num, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Table of %d:\n", num);
    while (i <= 10) {
        res = num * i;
		printf("%d \n", res);
        i++;
    }
    
    return 0;
}



































