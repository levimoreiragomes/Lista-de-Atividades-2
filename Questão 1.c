#include <stdio.h>

int main() {
    int ddd;
    printf("Digite o n�mero do DDD: ");
    scanf("%d", &ddd);
    switch (ddd) {
        case 61:
            printf("Bras�lia\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 11:
            printf("S�o Paulo\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 27:
            printf("Vit�ria\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        default:
            printf("DDD n�o encontrado\n");
            break;
    }
    return 0;
}

