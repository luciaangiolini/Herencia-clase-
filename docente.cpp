#include "docente.h"
#include <iostream>
using namespace std;
#include "persona.h"

docente::docente(string _titulo, string _nombre, string _apellido, string _mail, int _DNI, string _materia_docente, int _codigo_materia): persona(_nombre, _apellido, _DNI, _mail) {
    titulo = _titulo;
    materia_docente.set_nombre_materia(_materia_docente);
    materia_docente.set_codigo(_codigo_materia);
}

void docente::set_titulo(string _titulo) {
    titulo = _titulo;
}
string docente::get_titulo() {
    return titulo;
}

void docente::anotar_materia() {
    int materia_a_anotar;
    string materia_1 = "ANALISIS MATEMATICO II";
    string materia_2 = "LABORATORIO DE COMPUTACION II";
    string materia_3 = "FISICA I";
    string materia_4 = "PROGRAMACION II";
    string materia_5 = "BIOLOGIA";
    int cod_materia_1 = 674;
    int cod_materia_2 = 126;
    int cod_materia_3 = 341;
    int cod_materia_4 = 208;
    int cod_materia_5 = 509;
    materias_para_anotar[0].set_codigo(cod_materia_1);
    materias_para_anotar[1].set_codigo(cod_materia_2);
    materias_para_anotar[2].set_codigo(cod_materia_3);
    materias_para_anotar[3].set_codigo(cod_materia_4);
    materias_para_anotar[4].set_codigo(cod_materia_5);
    materias_para_anotar[0].set_nombre_materia(materia_1);
    materias_para_anotar[1].set_nombre_materia(materia_2);
    materias_para_anotar[2].set_nombre_materia(materia_3);
    materias_para_anotar[3].set_nombre_materia(materia_4);
    materias_para_anotar[4].set_nombre_materia(materia_5);
    cout << "Materias para anotarse a enseñar: " << endl;
    cout << "1- " << materias_para_anotar[0].get_nombre_materia() << "  Codigo: " << materias_para_anotar[0].get_codigo() << endl;
    cout << "2- " << materias_para_anotar[1].get_nombre_materia() << "  Codigo: " << materias_para_anotar[1].get_codigo() << endl;
    cout << "3- " << materias_para_anotar[2].get_nombre_materia() << "  Codigo: " << materias_para_anotar[2].get_codigo() << endl;
    cout << "4- " << materias_para_anotar[3].get_nombre_materia() << "  Codigo: " << materias_para_anotar[3].get_codigo() << endl;
    cout << "5- " << materias_para_anotar[4].get_nombre_materia() << "  Codigo: " << materias_para_anotar[4].get_codigo() << endl;
    cout << "Ingrese a que materia desea anotarse con su correspondiente numero:" << endl;
    cin >> materia_a_anotar;
    switch (materia_a_anotar) {
        case 1: materia_docente.set_nombre_materia(materia_1);
            materia_docente.set_codigo(cod_materia_1);
            break;
        case 2: materia_docente.set_nombre_materia(materia_2);
            materia_docente.set_codigo(cod_materia_2);
            break;
        case 3: materia_docente.set_nombre_materia(materia_3);
            materia_docente.set_codigo(cod_materia_3);
            break;
        case 4: materia_docente.set_nombre_materia(materia_4);
            materia_docente.set_codigo(cod_materia_4);
            break;
        case 5: materia_docente.set_nombre_materia(materia_5);
            materia_docente.set_codigo(cod_materia_5);
            break;
        default: cout << "El numero ingresado no es valido. Ingrese alguno de estos numeros: {1, 2, 3, 4, 5} segun la materia a inscribirse." << endl;
    }
    cout << "Usted se ha anotado a la materia: " << materia_docente.get_nombre_materia() << "  Código: " << materia_docente.get_codigo() << endl;
}

void docente::consultar_materias_que_ensena() {
    cout << "Materia que el/la profesor/a " << docente::get_nombre() << " " << docente::get_apellido() << " da: " << endl;
    cout << "- " << materia_docente.get_nombre_materia() << "  Codigo: " << materia_docente.get_codigo() << endl;
}