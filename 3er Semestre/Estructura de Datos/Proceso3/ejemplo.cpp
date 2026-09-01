#include<iostream>
#include<string>
using namespace std;
int main(){
    const int N=5;
    string pacientes[N];
    int dias[N];

    for(int i=0; i<N; i++){
        cout<<"Paciente "<<i+1<<" : ";
        getline(cin, pacientes[i]);
        cout<<"Dias de internacion: ";
        cin>>dias[i];
        cin.ignore();
    }

    int maxPos=0;

    for(int i=0; i<N; i++) if(dias[i]>dias[maxPos]) maxPos=i;

    cout<<"El paciente con mayor internacion es: "<<pacientes[maxPos]<<"("<<dias[maxPos]<<" dias)\n";

    return 0;
}