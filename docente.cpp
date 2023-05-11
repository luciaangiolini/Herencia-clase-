#include "docente.h"
#include <iostream>
using namespace std;
#include "persona.h"

docente::docente(string _titulo, string _nombre, string _apellido, string _mail, int _DNI, string _materia_docente[2], int _codigo_materia[2]): persona(_nombre, _apellido, _DNI, _mail) {
    titulo = _titulo;
    for (int i = 0; i <2 ; ++i) {
        materia_docente[i].set_nombre_materia(_materia_docente[i]);
        materia_docente[i].set_codigo(_codigo_materia[i]); 
    }

}

void docente::set_titulo(string _titulo) {
    titulo = _titulo;
}
string docente::get_titulo() {
    return titulo;
}

void docente::anotar_materia(int materia_a_anotar) {
    for (int i = 0; i < 2; ++i) {
        switch (materia_a_anotar) {
            case 1: materia_docente[i].set_nombre_materia("ANALISIS MATEMATICO II");
                materia_docente[i].set_codigo(256);
                break;
            case 2: materia_docente[i].set_nombre_materia("LABORATORIO DE COMPUTACION II");
                materia_docente[i].set_codigo(789);
                break;
            case 3: materia_docente[i].set_nombre_materia("FISICA I");
                materia_docente[i].set_codigo(201);
                break;
            case 4: materia_docente[i].set_nombre_materia("PROGRAMACION II");
                materia_docente[i].set_codigo(321);
                break;
            case 5: materia_docente[i].set_nombre_materia("BIOLOGIA");
                materia_docente[i].set_codigo(456);
                break;
            default: cout << "El numero ingresado no es valido. Ingrese alguno de estos numeros: {1, 2, 3, 4, 5} segun la materia a inscribirse." << endl;
        }
    }
}

void docente::consultar_materias_que_ensena() {
    cout << "Materia que el/la profesor/a " << docente::get_nombre() << " " << docente::get_apellido() << " da: " << endl;
    for (int i = 0; i < 2; ++i) {
        cout << "- " << materia_docente[i].get_nombre_materia() << "  Codigo: " << materia_docente[i].get_codigo() << endl;

    }
}
void docente::mostrar_datos_docente(){
    cout << "Datos:" << endl;
    cout << "Nombre--> " << docente::get_nombre() << endl;
    cout << "Apellido--> " << docente::get_apellido() << endl;
    cout << "DNI--> " << docente::get_DNI() << endl;
    cout << "Mail--> " << docente::get_mail() << endl;
    cout << "Titulo--> " << docente::get_titulo() << endl;
}

void docente::modif_datos_docente(){
    int dato_a_cambiar;
    string nuevo_nombre;
    string nuevo_apellido;
    int nuevo_DNI;
    string nuevo_mail;
    string nuevo_titulo;
    cout << "Datos:" << endl;
    cout << "1- Nombre" << endl;
    cout << "2- Apellido" << endl;
    cout << "3- DNI" << endl;
    cout << "4- Mail" << endl;
    cout << "5- Titulo" << endl;

    while(1==1) {
        cout << "Que datos desea modificar: (Presione '0' para finalizar la modificacion de datos) " << endl;
        cin >> dato_a_cambiar;
        switch (dato_a_cambiar) {
            case 1:
                cout << "Nuevo nombre: " << endl;
                cin >> nuevo_nombre;
                nombre = nuevo_nombre;
                break;
            case 2:
                cout << "Nuevo apellido: " << endl;
                cin >> nuevo_apellido;
                apellido = nuevo_apellido;
                break;
            case 3:
                cout << "Nuevo DNI: " << endl;
                cin >> nuevo_DNI;
                DNI = nuevo_DNI;
                break;
            case 4:
                cout << "Nuevo mail: " << endl;
                cin >> nuevo_mail;
                mail = nuevo_mail;
                break;
            case 5:
                cout << "Nuevo titulo: " << endl;
                cin >> nuevo_titulo;
                titulo = nuevo_titulo;
                break;
            case 0:
                exit(EXIT_SUCCESS);
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
        }
}