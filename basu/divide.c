#include <stdio.h>

int main() {
    int input_number, divisor, remainder ,result;
    printf("Enter a number: ");
    scanf("%d", &input_number);
    printf("Enter a divisor: ");
    scanf("%d", &divisor);
    result = input_number / divisor;
    remainder = input_number % divisor;
    printf("\n\n\nResult = %d\n\n", result);
    printf("Remainder = %d\n", remainder);
}