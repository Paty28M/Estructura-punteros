#include<iostream>
using namespace std;

struct Dato{
	int dato1;
	char dato2[20];
};

int main (int argc, char** argv){
	struct Dato var1;
	struct Dato*ptr;
	ptr=&var1;
	cout<<"Punteros: "<<&ptr<<endl;
	//no imprime el valor del puntero
	cout<<"Direccion de puntero: "<<ptr<<endl;
	//imprime la direccion del puntero
	cin>>(ptr->dato1);
	cin.getline(ptr->dato2,20,'\n');
	cin.getline(ptr->dato2,20,'\n');
	cout<<endl;
	cout<<"Punteros: "<<&ptr<<endl;
	//no imprime el valor del puntero
	cout<<"Direccion de puntero: "<<ptr<<endl<<endl;
	//imprime la direccion del puntero
	cout<<"Creado por: Sandra Patricia Martinez Legorreta"<<endl;
	cout<<"ICO-22"<<endl;
	cout<<"ESTRUCUTURAS DE DATOS"<<endl;
	return 0;
}

