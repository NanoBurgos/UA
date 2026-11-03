/*ATENCION AL CLIENTE USANDO PRINCIPIO FIFO*/
#include<iostream>
#include<queue>
#include<string>
using namespace std; 

int main(){
	queue<string> colaATC;
	queue<string> colaCaja;
	queue<string> colaComercial;
	
	int opcion, contadorATC=1, contadorCaja=1, contadorComercial=1;
	
	do{
		cout<<"\n---MENU ATENCION---"<<endl;
		cout<<"1. Generar turno ATC"<<endl;
		cout<<"2. Generar turno Caja"<<endl;
		cout<<"3. Generar turno Comercial"<<endl;
		cout<<"4. Atender turno ATC"<<endl;
		cout<<"5. Atender turno Caja"<<endl;
		cout<<"6. Atender turno Comercial"<<endl;
		cout<<"7. Mostrar cajas"<<endl;
		cout<<"8. Salir"<<endl;
		
		cout<<"Seleccione una opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				colaATC.push("ATC-"+ to_string(contadorATC++));
				cout<<"Turno generado en ATC"<<endl;
				break;
			case 2:
				colaATC.push("ATC-"+ to_string(contadorCaja++));
				cout<<"Turno generado en Caja"<<endl;
				break;
			case 3:
				colaATC.push("ATC-"+ to_string(contadorComercial++));
				cout<<"Turno generado en Comercial"<<endl;
				break;
			case 4:
				if(!colaATC.empty()){
					cout<<"Atendiendo: "<<colaATC.front()<<endl;
					colaATC.pop();
				}else{
					cout<<"No hay clientes en ATC"<<endl;
				}
				break;
			case 5:
				if(!colaCaja.empty()){
					cout<<"Atendiendo: "<<colaCaja.front()<<endl;
					colaCaja.pop();
				}else{
					cout<<"No hay clientes en Caja"<<endl;
				}
				break;
			case 6:
				if(!colaComercial.empty()){
					cout<<"Atendiendo: "<<colaComercial.front()<<endl;
					colaComercial.pop();
				}else{
					cout<<"No hay clientes en Comercial"<<endl;
				}
				break;
			case 7:
				cout<<"\n---Estado de las colas---"<<endl;
				cout<<"ATC pendientes: "<<colaATC.size()<<endl;
				cout<<"Caja pendientes: "<<colaCaja.size()<<endl;
				cout<<"Comercial pendientes: "<<colaComercial.size()<<endl;
				break;
			case8:
				cout<<"Saliendo del sistema..."<<endl;
				break;
			default:
				cout<<"opcion invalida"<<endl;
		}
				
	}while(opcion!=8);
	
	return 0;
}