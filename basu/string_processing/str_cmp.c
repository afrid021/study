#include <stdio.h>
#include <string.h>

int main() {
    char st1[] = "Khan";
    char st2[] = "Khan";
    int val = strcmp(st1, st2);
    printf("Value of val: %d\n", val);
}