#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    if (num1 == num2 && num2 == num3) {
        printf("Números iguais\n");
    } else {
        float maior, menor;
        if (num1 > num2) {
            if (num1 > num3) {
                maior = num1;
            } else {
                maior = num3;
            }
        } else {
            if (num2 > num3) {
                maior = num2;
            } else {
                maior = num3;
            }
        }
        if (num1 < num2) {
            if (num1 < num3) {
                menor = num1;
            } else {
                menor = num3;
            }
        } else {
            if (num2 < num3) {
                menor = num2;
            } else {
                menor = num3;
            }
        }
        printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);
    }
    return 0;
}

