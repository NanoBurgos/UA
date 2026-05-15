#include <iostream>
#include <cstring>

using namespace std;

struct Estudiante {
    char nombre[50];
    char apellido[50];
    int edad;
};

int main() {

    // LOGIN
    char usuario[30];
    char clave[30];

    char usuarioCorrecto[] = "adminexam"; //datos guardados de usuario
    char claveCorrecta[] = "clave2026"; //datos guardados de clave de usuario correcta

    cout << " LOGIN DE ADMINISTRADOR " << endl;

    cout << " Ingrese usuario: ";
    cin.getline(usuario, 30);

    cout << " Ingrese clave: ";
    cin.getline(clave, 30);

    // Validamos longitud de clave
    if (strlen(clave) < 6) {
        cout << " La clave debe tener al menos 6 caracteres." << endl;
        return 0;
    }

    // Validamos usuario y clave
    if (strcmp(usuario, usuarioCorrecto) != 0 ||
        strcmp(clave, claveCorrecta) != 0) {

        cout << " Usuario o clave incorrectos." << endl;
        return 0;
    }

    cout << "\nLogin correcto." << endl;

    // Registro ed estudiantes
    int n;

    cout << "\nCuantos estudiantes se van a inscribir?: ";
    cin >> n;

    cin.ignore();

    Estudiante alumnos[50];

    for (int i = 0; i < n; i++) {

        cout << "\n--- Estudiante " << i + 1 << " ---" << endl;

        cout << "Nombre: ";
        cin.getline(alumnos[i].nombre, 50);

        cout << "Apellido: ";
        cin.getline(alumnos[i].apellido, 50);

        cout << "Edad: ";
        cin >> alumnos[i].edad;

        cin.ignore();
    }

    // Buscamos el estudiante mas joven
    int posMenor = 0;

    for (int i = 1; i < n; i++) {

        if (alumnos[i].edad < alumnos[posMenor].edad) {
            posMenor = i;
        }
    }

    // Copiamos el nombre del estudiante mas joven
    char nombreJoven[50];

    strcpy(nombreJoven, alumnos[posMenor].nombre);

    // Formamos el nombre completo con strcat
    char nombreCompleto[100];

    strcpy(nombreCompleto, alumnos[posMenor].nombre);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, alumnos[posMenor].apellido);

    // Mostramos el estudiante mas joven
    cout << "\n ESTUDIANTE MAS JOVEN " << endl;

    cout << "Nombre copiado con strcpy: "
         << nombreJoven << endl;

    cout << "Nombre completo con strcat: "
         << nombreCompleto << endl;

    cout << "Edad: "
         << alumnos[posMenor].edad << endl;

    // Verificamos letra 'e' en apellido con strchr
    cout << "\n--- VERIFICACION DE APELLIDOS ---" << endl;

    for (int i = 0; i < n; i++) {

        if (strchr(alumnos[i].apellido, 'e') != NULL) {

            cout << "El apellido "
                 << alumnos[i].apellido
                 << " contiene la letra 'e'" << endl;
        }
    }

    // Buscar subcadena "ana" con strstr
    cout << "\n=== BUSQUEDA DE SUBCADENA ===" << endl;

    for (int i = 0; i < n; i++) {

        char nombreCompletoAux[100];

        strcpy(nombreCompletoAux, alumnos[i].nombre);
        strcat(nombreCompletoAux, " ");
        strcat(nombreCompletoAux, alumnos[i].apellido);

        if (strstr(nombreCompletoAux, "ana") != NULL) {

            cout << "El nombre completo "
                 << nombreCompletoAux
                 << " SI contiene la subcadena \"ana\"" << endl;
        }
        else{
             cout << "El nombre completo "
                 << nombreCompletoAux
                 << " NO contiene la subcadena \"ana\"" << endl;
        }
    }

    return 0;
}