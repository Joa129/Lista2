#include <string.h>
#include <math.h>
int converte_binario(int n[5]){
	int dec=0,cont=4,potencia=0,temp[5];
	while(cont>=0){
	     temp[cont]=n[cont]*pow(16,potencia);
	     potencia++;
	     dec=dec+temp[cont];
	     cont--;
	}

	
	     printf("%i",dec);
return 0;
