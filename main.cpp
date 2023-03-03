#include "propietario.cpp"
#include <iostream>
using namespace std; 
main(){	
	string nit,nombres,apellidos,direccion,cui;
	int telefono,fecha;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Fecha de Nacimiento: ";
	cin>>fecha;
	cout<<"Ingrese Su Cui: ";
	cin>>cui;
	// instanciar un objeto
	propietario obj = propietario(nombres,apellidos,direccion,telefono,fecha,nit,cui);
	obj.mostrar();
	cout<<"Atributos agregados exitosamente"<<endl;
	//cout<<"Ingrese Nit: ";
	//cin>>nit;
//	obj.setNit(nit);
//	obj.mostrar();
	
}


