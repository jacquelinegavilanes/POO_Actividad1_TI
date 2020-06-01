#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void presentarMensaje();

void presentarMensaje() {
    char mensaje[50];
	cout << "" << endl;
	cout << "Hola Mundo" << endl;
	cout<<"Escribe un mensaje: ";
	gets(mensaje);
	cout<<mensaje<<endl;
}

int main() {
	presentarMensaje();
	system ("Pause");
    return 0;
}
