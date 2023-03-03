#include "Persona.cpp"
#include <iostream>
using namespace std;

class propietario : Persona { 
	private : string nit;
	private : string cui; 
	
	public : 
	propietario (){
	}
	
	propietario (string nom, string ape, string dir, int tel,int fech, string n,string dpi) : Persona(nom,ape,dir,tel,fech){
		nit=n;
		cui=dpi;
		
	}
	void setNit(string n){nit=n; } 
	void setNombres(string nom){nombres=nom; } 
	void setApellidos(string ape){apellidos=ape; } 
	void setDireccion(string dir){direccion=dir; } 
	void setTelefono(int tel){telefono=tel; } 
	void setFecha(int fech){fecha = fech; }
	void setCui(string dpi){cui = dpi; }


	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	int getFecha(int fech){fecha = fech; }
	string getCui(){return cui;}

	void mostrar(){
		cout<<"____________________"<<endl; 
		cout<<cui<<";"<<nit<<";"<< nombres<<";"<<apellidos<<";"<<direccion<<";"<<telefono<<";"<<fecha<<endl;
	}
	
	};

