#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Basudev Rout";
    printf("%d \n", strlen(name)); //Strlen returns the length of the string
    printf("%s\n", name);
    char name2[] = "Afrid";
    strcpy(name, name2); //Strcpy copies the string from name2 to name
    printf("%s\n\n", name);
}