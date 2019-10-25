#include <iostream>
using namespace std;

int casos();

int caso;
int num1;
int num2;

int main(){
	casos();
}

int casos(){
	cout<<"Ingrese numero de casos a operar"<<endl;
	cin>>caso;
	for (int i=0; i<caso; i++){
		cout<<"Ingrese dos numeros para realizar la operacion"<<endl;
		cin>>num1;
		cin>>num2;
		if (num1 > num2){
			cout<<num1<<" es mayor que "<<num2<<endl;
		}
		else{
			cout<<num2<<" es mayor que "<<num1<<endl;	
		}
	}
}

