#include <stdio.h>

int main() {
    float salario, prestacao;
    printf("Digite o valor do sal�rio: ");
    scanf("%f", &salario);
    printf("Digite o valor da presta��o: ");
    scanf("%f", &prestacao);
    if (prestacao > 0.2 * salario) {
        printf("Empr�stimo n�o concedido\n");
    } else {
        printf("Empr�stimo concedido\n");
    }
    return 0;
}

