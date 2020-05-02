/*En la Pizzeria "Gran sabor" se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta(Q100.00), recibe un descuento de 20%

Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.

Grabar los datos a un archivo y mostrar el total global de la venta del dia y
determinar el total de lo vendido por producto, mostrando tambien el porcentaje
con relacion al total.*/

#include <iostream>
#include <fstream>

using namespace std;

struct pizza{
	string grande, familiar, fiesta, opcion;
	double a=0.10, b=0.15, c=0.20; 

};

void opciones();
void garnde();
void familiar();
void fiesta();

void opciones(){
	string grande, familiar, fiesta, opcion;
	float a=0.10, b=0.15, c=0.20; 

	
do{


	cout<<"==========OFERTAS DE PIZZA=========="<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"----------1. PIZZA GRANDE-----------"<<endl;
	cout<<"----------2. PIZZA FAMILIAR --------"<<endl;
	cout<<"----------3. PIZZA FIESTA-----------"<<endl;
	cout<<"----------4. NO DESEA ORDENAR-------"<<endl;
	cout<<"===================================="<<endl;
	cout<<" 	 INDIQUE  LA ORDEN 		 "<<endl;
	cin>>opcion;
	
	
	if (opcion==1){		
			system("CLS");
			grande();			
		}
		else if (opcion==2){		
			system("CLS");
			familiar();
		}			
		else if (opcion==3)
			system("cls");
		else if (opcion==4)
			break;
		else 
			break;
		
	} while(opcion!=4);
}



void grande(){
	int cantidad; 
	float a=0.10, precio=80; 
	cout<<"CUANTAS PIZZA DESEA ORDENAR"<<endl;
	cin>>cantidad;
	totalapagar=precio*cantidad*a;
	cout<<"el Total a Pagar"<<totalapagar;
}


void familiar(){
		int precio=115;
	float b=0.15, cantidad; 
	cout<<"CUANTAS PIZZA DESEA ORDENAR"<<endl;
	cin>>cantidad;
	totalapagar=precio*cantidad*b;
	cout<<"el Total a Pagar"<<totalapagar;
}	

void fiesta(){
		int precio=100;
	float  c=0.20, cantidad; 
	cout<<"CUANTAS PIZZA DESEA ORDENAR"<<endl;
	cin>>cantidad;
	totalapagar=precio*cantidad*c;
	cout<<"el Total a Pagar"<<totalapagar;
}

int main(){
	opciones();
	void opciones();
void garnde();
void familiar();
void fiesta();
	return 0;
}

