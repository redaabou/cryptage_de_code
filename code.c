#include <stdio.h>

void encryptString(char* str, int shift) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A') + shift) % 26 + 'A';
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a') + shift) % 26 + 'a';
        }
        i++;
    }
}

int main() {
    char str[100];
    int shift;

    printf("Enter un string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter la valeur du décalage: ");
    scanf("%d", &shift);

    encryptString(str, shift);

    printf("Chaîne chiffréete: %s\n", str);

    return 0;
}