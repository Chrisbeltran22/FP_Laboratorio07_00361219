#include <iostream>
#include <cmath>
using namespace std;

int primos();

int contador = 0;
int rango;
int num1;
int num2;

int main(){
	primos();
}

int primos(){
	cout<<"Ingrese el rango de casos a operar"<<endl;
	cin>>num1;
	cin>>num2;
	while(num1 < num2){
		if (num1 % 2 ==1){
			cout<<num1<<endl;
			contador++;	
		}
	num1++;
	}
	
}
