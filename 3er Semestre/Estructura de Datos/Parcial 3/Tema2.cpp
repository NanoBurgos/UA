#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
	
	queue<string> cola; //cola de pacientes
	
	int cantidad = 5; //cantidad maxima de pacientes que admite nuestr sistema
	int opcion, contador=0;
	string nombre;
	
	cout<<"===================================="<<endl;
	cout<<"  SISTEMA DE ATENCION DE PACIENTES "<<endl;
	cout<<"===================================="<<endl;
	
	do{
		cout<<"-----MENU-----"<<endl;
		cout<<"1- Ingresar Pacientes"<<endl;
		cout<<"2- Atender Pacientes"<<endl;
		cout<<"3- Mostrar Sigueinte Paciente en ser atendido"<<endl;
		cout<<"4- Mostrar todos los pacientes en espera"<<endl;
		cout<<"5- Salir del Sistema"<<endl;
		
		cout << "Seleccione una opcion: ";
        cin >> opcion;
		
		switch(opcion){
			case 1:
                if(cola.size()<cantidad){
                	cout << "Ingrese nombre: ";
                	cin >> nombre;

                	cola.push(nombre);
                	cout << "Persona agregada a la cola." << endl;
                	contador=contador + 1;
				}
				else{
					cout<<"Solo se puede ingresar hasta un maximo de 5 pacientes"<<endl;
					
				}
                break;
			
			case 2:
                if (!cola.empty()) {
                    cout << "Atendiendo a: " << cola.front() << endl;
                    cola.pop();
                } else {
                    cout << "La cola esta vacia." << endl;
                }
                contador=contador - 1;
                break;
                
            case 3:
            	cout<<"El siguiente Paciente en ser atendido es: "<<cola.front()<<endl;
            	break;
            	
            case 4: {
                cout << "\n--- Cola de Pacientes es espera ---" << endl;

                queue<string> temp = cola;

                while (!temp.empty()) {
                    cout << temp.front() << endl;
                    temp.pop();
                }
                break;
            }
            
            case 5:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
				
		}
		
	}while(opcion!=5);
		
	return 0;
}
