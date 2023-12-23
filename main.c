#include <stdio.h>


int soma(int num1, int num2)
{
    return num1 + num2;
}

int subtração(int num1, int num2)
{
    return num1 - num2;
}

int divisão(int num1, int num2) 
{
    return num1 / num2;
}

int multiplicação(int num1, int num2)
{
    return num1 * num2;
}

int main()
{   
    int num1,num2,operação;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe a operação 1 [soma] 2 [subtração] 3 [divisão] 4 [multiplicação]: ");
    scanf("%d", &operação);
    switch (operação) {
        case 1:
            printf("Resultado da operação: %d\n", soma(num1, num2));
            break;
        case 2:
            printf("Resultado da operação: %d\n", subtração(num1, num2));
            break;
        case 3:
            printf("Resultado da operação: %d\n", divisão(num1, num2));
            break;
        case 4:
            printf("Resultado da operação: %d\n", divisão(num1, num2));
            break;
        default:
            printf("Opção invalida\n");
            break;
    }
    return 0;
}