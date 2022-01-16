#include <stdio.h>
#include <string.h>

int main() {
    char st1[] = "Afrid";
    char st2[] = "Khan";
    printf("Value of st1: %s\n", st1);
    printf("Value of st2: %s\n", st2);
    strcat(st1, st2);
    printf("Value of st1: %s\n", st1);
}