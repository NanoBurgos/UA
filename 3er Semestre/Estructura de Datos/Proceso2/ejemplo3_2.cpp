/*Version mejorada del ejercicio 3*/
#include<iostream>
using namespace std;
int main(){
	int total[10]; //Vector con capacidad de 10 elementos
	int usados = 4; //Cantidad inicial de elementos guardados
	int opcion, pos, valor;
	
	//valores iniciales
	total[0]= 5;
	total[1]= 6;
	total[2]= 8;
	total[3]= 4;
	
	do{
		cout<<"\n ---MENU DE OPERACIONES---"<<endl;
		cout<<"1. Mostrar Vector"<<endl;
		cout<<"2. Añadir Elemento"<<endl;
		cout<<"3. Actualizar Elemento"<<endl;
		cout<<"4. Eliminar Elemento"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"----------------------------"<<endl;
		cout<<"Seleccione una opcion: "<<endl;	
		cin>>opcion;
		
		switch(opcion){
			case 1: //Mostrar
			cout<<"\nVector Total: "<<endl;
			for(int i=0; i<usados; i++){
				cout<<"TOTAL["<<i<<"]= "<<total[i]<<endl;
			}
			break;
			
			case 2: //Añadir
				if(usados<10){
					cout<<"Ingrese el nuevo valor: ";
					cin>>valor;
					
					total[usados]=valor;
					
					usados ++;
					
					cout<<"Elemento añadido correctamente: "<<endl; 
				}
				else{
					cout<<"No hay espacio disponible en el vector"<<endl;
				}
				break;
				
			case 3: //Actualizar
				cout<<"Ingrese la posicion a actualizar (0- "<<usados-1<<"): ";
				cin>>pos;
				
				if(pos>=0 && pos<usados){
					cout<<"Ingrese el nuevo valor: ";
					cin>>valor;
					total[pos]=valor;
					cout<<"Elemento actualizado correctamente "<<endl;
				}
				else{
					cout<<"Posicion invalida"<<endl;
				}
				break;
			
			case 4: //Eliminar
				cout<<"Ingrese la posicion a eliminar (0- "<<usados-1<<"): ";
				cin>>pos;
				
				if(pos>=0 && pos<usados){
					for(int i=pos; i<usados-1; i++){
						total[i]= total[i+1]; //Desplazar elementos 
					}
					usados--;
					
					cout<<"Elemento eliminado correctamente"<<endl;
				}
				else{
					cout<<"Posicion Invalida"<<endl;
				}
				break;
				
			case 5: //Salir
				cout<<"Saliendo del Programa..."<<endl;
				break;
				
			default :
				cout<<"Opcion Invalida"<<endl;
		}
		
	}while(opcion!= 5);
		
	return 0;
}