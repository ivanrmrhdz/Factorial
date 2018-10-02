#include <iostream>
#include <windows.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int numero; 
	int fact=1;
	
	cout<<"Ingrese un numero: ";
	cin>>numero; 
	
	//Ciclo para multiplicar todos los numeros y sacar el factorial
	for(int i=1; i<=numero; i++){
		
		fact= fact*i; 
	}
	
	cout<<"El factorial de "<<numero<<" es igual a: "<<fact<<endl;
	
	system("pause"); 
	
	
}
