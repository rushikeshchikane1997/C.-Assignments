/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50 */

#include <stdio.h>

int main() {
    int quantity;
    float unit_price = 5.0;
    float total_price;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    total_price = quantity * unit_price;

    if (quantity > 50) {
        total_price -= total_price * 0.15;
    } else if (quantity > 30) {
        total_price -= total_price * 0.10;
    }

    printf("Total price: Rs %.2f\n", total_price);

    return 0;
	}
