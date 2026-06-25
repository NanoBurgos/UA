#include <iostream>
#include <cstring>

using namespace std;

struct Usuario{
    char usuario[30];
    char contrasenia[30];
    char tipo[20];
};

struct Turno{
    char usuarioPaciente[30];
    char nombre[30];
    char apellido[30];
    int edad;
    char medico[30];
    char horario[20];
    char estado[20];
};

int validarLogin(Usuario usuarios[], int cantidadUsuarios, char usuario[], char contrasenia[]);
void registrarTurno(Turno t[], int &cargados, int capacidad, char usuario[]);
void mostrarTurnos(Turno t[], int cargados);
void mostrarMisTurnos(Turno t[], int cargados, char usuario[]);
void cancelarTurno(Turno t[], int &cargados);
void buscarPaciente(Turno t[], int cargados);
void cancelarMisTurnos(Turno t[], int &cargados, char usuario[]);
void eliminarTurnosCancelados(Turno t[], int &cargados);

int main(){

    const int CAPACIDAD = 100;

    Usuario usuarios[5] = {
        {"medico1","med123","medico"},
        {"juan","123","paciente"},
        {"maria","456","paciente"},
        {"pedro","789","paciente"},
        {"ana","321","paciente"}
    };

    Turno t[CAPACIDAD];
    int cargados = 0;

    int opcionSistema;

    do{

        cout << "\n===== SISTEMA DE TURNOS MEDICOS =====\n";
        cout << "1. Iniciar sesion\n";
        cout << "2. Salir del sistema\n";
        cout << "Opcion: ";
        cin >> opcionSistema;
        cin.ignore();

        if(opcionSistema == 1){

            char usuarioIngresado[30];
            char contraseniaIngresada[30];

            cout << "\nUsuario: ";
            cin >> usuarioIngresado;

            cout << "Contrasenia: ";
            cin >> contraseniaIngresada;
            cin.ignore();

            int posicionUsuario = validarLogin(
                usuarios, 5, usuarioIngresado, contraseniaIngresada
            );

            if(posicionUsuario == -1){
                cout << "\n=== ACCESO DENEGADO ===\n";
                continue;
            }

            cout << "\n=== BIENVENIDO ===\n";

            if(strcmp(usuarios[posicionUsuario].tipo,"medico")==0){

                int opcion;

                do{

                    cout << "\n===== MENU MEDICO =====\n";
                    cout << "1. Ver todos los turnos\n";
                    cout << "2. Buscar paciente\n";
                    cout << "3. Cancelar turno\n";
                    cout << "4. Cantidad de consultas\n";
                    cout << "5. Ver pacientes registrados\n";
                    cout << "6. Cerrar sesion\n";
                    cout << "Opcion: ";
                    cin >> opcion;
                    cin.ignore();

                    switch(opcion){

                        case 1:
                            mostrarTurnos(t,cargados);
                            break;

                        case 2:
                            buscarPaciente(t,cargados);
                            break;

                        case 3:
                            cancelarTurno(t,cargados);
                            break;

                        case 4:{
                            int activos = 0;
                            for(int i=0;i<cargados;i++){
                                if(strcmp(t[i].estado,"Activo")==0) activos++;
                            }
                            cout << "\nCantidad total de consultas activas: "
                                 << activos << endl;
                            break;
                        }

                        case 5:

                            if(cargados==0){
                                cout << "\nNo existen pacientes registrados.\n";
                            }else{
                                for(int i=0;i<cargados;i++){
                                    cout << t[i].nombre << " "
                                         << t[i].apellido << endl;
                                }
                            }
                            break;

                        case 6:
                            cout << "\nCerrando sesion...\n";
                            break;

                        default:
                            cout << "\nOpcion invalida\n";
                    }

                }while(opcion!=6);
            }
            else{

                int opcion;

                do{

                    cout << "\n===== MENU PACIENTE =====\n";
                    cout << "1. Registrar turno\n";
                    cout << "2. Ver mis turnos\n";
                    cout << "3. Cancelar mis turnos\n";
                    cout << "4. Cerrar sesion\n";
                    cout << "Opcion: ";
                    cin >> opcion;
                    cin.ignore();

                    switch(opcion){

                        case 1:
                            registrarTurno(
                                t,
                                cargados,
                                CAPACIDAD,
                                usuarios[posicionUsuario].usuario
                            );
                            break;

                        case 2:
                            mostrarMisTurnos(
                                t,
                                cargados,
                                usuarios[posicionUsuario].usuario
                            );
                            break;

                        case 3:
                            cancelarMisTurnos(
                                t,
                                cargados,
                                usuarios[posicionUsuario].usuario
                            );
                            break;

                        case 4:
                            cout << "\nCerrando sesion...\n";
                            break;

                        default:
                            cout << "\nOpcion invalida\n";
                    }

                }while(opcion!=4);
            }
        }

    }while(opcionSistema!=2);

    cout << "\nSistema finalizado.\n";

    return 0;
}

int validarLogin(Usuario usuarios[], int cantidadUsuarios, char usuario[], char contrasenia[]){

    for(int i=0;i<cantidadUsuarios;i++){

        if(strcmp(usuario,usuarios[i].usuario)==0 &&
           strcmp(contrasenia,usuarios[i].contrasenia)==0){

            return i;
        }
    }

    return -1;
}

void registrarTurno(Turno t[], int &cargados, int capacidad, char usuario[]){

    if(cargados>=capacidad){
        cout << "\nCapacidad completa\n";
        return;
    }

    strcpy(t[cargados].usuarioPaciente,usuario);

    cout << "\nNombre: ";
    cin >> t[cargados].nombre;

    cout << "Apellido: ";
    cin >> t[cargados].apellido;

    cout << "Edad: ";
    cin >> t[cargados].edad;
    cin.ignore();

    cout << "Medico: ";
    cin >> t[cargados].medico;

    cout << "Horario (ej: 10:00): ";
    cin >> t[cargados].horario;
    cin.ignore();

    strcpy(t[cargados].estado,"Activo");

    cargados++;

    cout << "\nTurno registrado correctamente\n";
}

void mostrarTurnos(Turno t[], int cargados){

    if(cargados==0){
        cout << "\nNo existen turnos registrados.\n";
        return;
    }

    for(int i=0;i<cargados;i++){

        cout << "\nPaciente: " << t[i].nombre << " " << t[i].apellido << endl;
        cout << "Edad: " << t[i].edad << endl;
        cout << "Medico: " << t[i].medico << endl;
        cout << "Horario: " << t[i].horario << endl;
        cout << "Estado: " << t[i].estado << endl;
    }
}

void mostrarMisTurnos(Turno t[], int cargados, char usuario[]){

    int encontrado=0;

    for(int i=0;i<cargados;i++){

        if(strcmp(t[i].usuarioPaciente,usuario)==0){

            encontrado=1;

            cout << "\nPaciente: " << t[i].nombre << " " << t[i].apellido << endl;
            cout << "Medico: " << t[i].medico << endl;
            cout << "Horario: " << t[i].horario << endl;
            cout << "Estado: " << t[i].estado << endl;
        }
    }

    if(!encontrado){
        cout << "\nNo posee turnos registrados.\n";
    }
}

/* Elimina todos los turnos con estado "Cancelado" del arreglo y actualiza cargados. */
void eliminarTurnosCancelados(Turno t[], int &cargados){

    int i = 0;
    while(i < cargados){
        if(strcmp(t[i].estado,"Cancelado")==0){
            for(int j=i; j<cargados-1; j++){
                t[j] = t[j+1];
            }
            cargados--;
        } else {
            i++;
        }
    }
}

void cancelarMisTurnos(Turno t[], int &cargados, char usuario[]){

    int encontrado=0;

    for(int i=0;i<cargados;i++){

        if(strcmp(t[i].usuarioPaciente,usuario)==0 &&
           strcmp(t[i].estado,"Activo")==0){

            strcpy(t[i].estado,"Cancelado");
            encontrado=1;
        }
    }

    if(encontrado){
        cout << "\nTurnos cancelados.\n";
        eliminarTurnosCancelados(t, cargados);
    } else {
        cout << "\nNo posee turnos activos.\n";
    }
}

/* Cancela por nombre Y apellido */
void cancelarTurno(Turno t[], int &cargados){

    char nombre[30];
    char apellido[30];
    int encontrado=0;

    cout << "\nNombre del paciente: ";
    cin >> nombre;

    cout << "Apellido del paciente: ";
    cin >> apellido;
    cin.ignore();

    for(int i=0;i<cargados;i++){

        if(strcmp(nombre,t[i].nombre)==0 &&
           strcmp(apellido,t[i].apellido)==0 &&
           strcmp(t[i].estado,"Activo")==0){

            strcpy(t[i].estado,"Cancelado");
            encontrado=1;
        }
    }

    if(encontrado){
        cout << "\nTurno cancelado\n";
        eliminarTurnosCancelados(t, cargados);
    } else {
        cout << "\nPaciente no encontrado o sin turnos activos\n";
    }
}

/* Busca por nombre Y apellido*/
void buscarPaciente(Turno t[], int cargados){

    char nombre[30];
    char apellido[30];
    int encontrado=0;

    cout << "\nNombre del paciente: ";
    cin >> nombre;

    cout << "Apellido del paciente: ";
    cin >> apellido;
    cin.ignore();

    for(int i=0;i<cargados;i++){

        if(strcmp(nombre,t[i].nombre)==0 &&
           strcmp(apellido,t[i].apellido)==0){

            encontrado=1;

            cout << "\nPaciente encontrado\n";
            cout << "Nombre: " << t[i].nombre << endl;
            cout << "Apellido: " << t[i].apellido << endl;
            cout << "Medico: " << t[i].medico << endl;
            cout << "Horario: " << t[i].horario << endl;
            cout << "Estado: " << t[i].estado << endl;
        }
    }

    if(!encontrado)
        cout << "\nPaciente no encontrado\n";
}