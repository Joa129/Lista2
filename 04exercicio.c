#include <stdio.h>
#include <math.h>
void main()
{
   int qtn, vet[qtn];
   float x, soma, media, desvio, y;
   printf("\nDigite os valores a inserir\n:");
   scanf("%d", &qtn);
   for(int i = 1; i <= qtn; i++){
       printf("Informe o %dº valor:", i);
       scanf("%f", &x);
       soma = soma + x;
   }
   media = soma/qtn;
   for(int i = 0; i <= qtn; i++){
       y = pow(vet[i] - media,2);
   }
   desvio = sqrt(y / qtn);
   printf("media = %.2f\n", media);
   printf("desvio padrão = %.2f", desvio);
}
