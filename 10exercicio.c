#include <stdio.h>

int soma(int* N1, int* N2)
{
    *N1 + *N2;
    return;
}

int subtracao(int* N1, int* N2)
{
    *N1 - *N2;
    return;
}

int divisao(int* N1, int* N2)
{
    *N1 / *N2;
    return;
}
int multiplicacao(int* N1, int* N2)
{
    *N1 * *N2;
    return;
}


int main(){
    int v1, v2, resultado, op;
    printf("\t\t*******CALCULADORA*********\n");
    printf("\t\tSoma = 1\n");
    printf("\t\tSubtração = 2\n");
    printf("\t\tDivisão = 3\n");
    printf("\t\tMultiplicação = 4\n");
    printf("\n\nDigite o primeiro valor:");
    scanf("%d", &v1);
    printf("Digite o segundo valor:");
    scanf("%d", &v2);
    printf("Digite a operação desejada:");
    scanf("%d", &op);
    
        switch(op) {
        case 1:
        resultado = soma(&v1,&v2);
        break;
        case 2:
        resultado = subtracao(&v1,&v2);
        break;
        case 3:
        resultado = divisao(&v1,&v2);
        break;
        case 4:
        resultado = multiplicacao(&v1,&v2);
        break;
        default:
        printf("operação inválida");
        }
        printf("Resultado = %d\n", resultado);
    
    return 0;
}
