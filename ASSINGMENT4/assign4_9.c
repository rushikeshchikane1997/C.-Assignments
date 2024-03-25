/*Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5*/

void printPrimeFactors(int num) {
	for (int i = 2; i <= num; i++) {
		while (num % i == 0) {
			printf("%d", i);
			num = num / i;
			if (num != 1) {
				printf(" * ");
			}
		}
	}
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("%d = ", num);
	printPrimeFactors(num);

	return 0;
}


























