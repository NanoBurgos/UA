/*9-Gestión de hospital : crear un Vector con nombres de 5 pacientes y otro
vector con días de internación. Mostrar el paciente con mayor tiempo
internado.*/
#include<iostream>
using namespace std;
int main(){
	int mayor = 0, pos_mayor;
	
	string pacientes[5]={"Carlos", "Pedro", "Maria", "Isabel", "Ignacio"};
	int dias_int[5]={5, 4, 6, 8, 3};
	
	for(int i=0; i<5; i++){
		if(dias_int[i]>mayor){
		mayor=dias_int[i];
		pos_mayor=i;
		}
	}
	
	cout<<"\nEl Paciente con mayor tiempo internado es: "<<pacientes[pos_mayor]<<endl;
	
	return 0;
}