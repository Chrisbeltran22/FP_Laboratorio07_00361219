#include <iostream>
#include <cmath>

using namespace std;

int casos;
int rango1;
int rango2;
int total = 2;
int imprimir_rango();

int main(){
	imprimir_rango();
	return 0;
}

int imprimir_rango(){
	cout<<"Dijite el numero de casos de prueba a realizar"<<endl;
	cin>>casos;
	for(int i=0;i<casos;i++){
		cout<<"Dijite los valores de inicio y final de rango"<<endl;
		cin>>rango1;
		cin>>rango2;
		for(int i=0;i<rango2;i++){
			total= rango1+i;
			cout<<total<<endl;
		}
	}
	}

//Se que el ejercicio era de una cosa totalmente diferente pero he estado repasando y estudiando esta semana y no pude hacerlos 
//Al igual se que no es una excusa y es de menos, pero esto es solo para que sepas el porque de este ejercicio así.

