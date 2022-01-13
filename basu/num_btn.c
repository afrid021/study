// input : 5
// output : 2 3 4

// input : 8
// output : 2 3 4 5 6 7

// input : 11
// output : 2 3 4 5 6 7 8 9 10

#include <stdio.h>

int main() {
    int input;
    printf("Enter a number : ");
    scanf("%d", &input);

    for(int i = 2; i<input; i++) {
        printf("%d ", i); //value of i is printed

        printf("%d \n", input%i); //reminder of input/i is printed
    }
}