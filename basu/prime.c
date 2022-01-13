#include <stdio.h>

int main() {
    int input;
    printf("Enter a number : ");
    scanf("%d", &input);

    for(int i = 2; i<input; i++) {

        if(input%i == 0) {
            printf("It's not a prime number \n");
            return 0;
        }

    }
    printf("It's a prime number \n");
}
