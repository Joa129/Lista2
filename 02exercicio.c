#include <cstdlib> 
#include <iostream> 

using namespace std; 

int main() 
{ 
int anos, meses, dias, idadeEmDias; 
cout << "Entre com os anos: "; 
cin >> anos; 

while(meses >= 12){ 
cout << "Entre com os meses : "; 
cin >> meses; 
if(meses >=12) 
cout << "*********Meses tem que ser menor que 12" << endl; 
} 

while(dias > 30){ 
cout << "Entre com os dias : "; 
cin >> dias; 
if(dias > 30) 
cout << "**********************Dias no maximo 30" << endl; 

} 
anos *= 365; 
meses *= 30; 
idadeEmDias = anos + meses + dias; 
cout << endl << "Vc ja viveu " << idadeEmDias << " dias."; 

getchar(); 
getchar(); 
return 0; 
}
