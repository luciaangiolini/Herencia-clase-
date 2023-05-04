#include "alumnos.h"
#include <iostream>
using namespace std;
#include "persona.h"

alumnos::alumnos(string _carrera, int _edad, string _nombre, string _apellido, string _mail, int _DNI, string _materia_alumno, int _nota_alumno, int _codigo_alumno): persona(_nombre, _apellido, _DNI, _mail) {
    carrera = _carrera;
    edad = _edad;
    materia_alumno.set_nombre_materia(_materia_alumno);
    materia_alumno.set_nota(_nota_alumno);
    materia_alumno.set_codigo(_codigo_alumno);
}

void alumnos::set_carrera(string _carrera){
    carrera = _carrera;
}
string alumnos::get_carrera() {
    return carrera;
}
void alumnos::set_edad(int _edad){
    edad = _edad;
}
int alumnos::get_edad() {
    return edad;
}

void alumnos::inscripcion_materia() {
    int materia_a_inscribir;
    string materia_1 = "ANALISIS MATEMATICO II";
    string materia_2 = "LABORATORIO DE COMPUTACION II";
    string materia_3 = "FISICA I";
    string materia_4 = "PROGRAMACION II";
    string materia_5 = "BIOLOGIA";
    materias_agregacion[0].set_nombre_materia(materia_1);
    materias_agregacion[1].set_nombre_materia(materia_2);
    materias_agregacion[2].set_nombre_materia(materia_3);
    materias_agregacion[3].set_nombre_materia(materia_4);
    materias_agregacion[4].set_nombre_materia(materia_5);
    cout << "Materias a inscribirse: " << endl;
    cout << "1- " << materias_agregacion[0].get_nombre_materia() << endl;
    cout << "2- " << materias_agregacion[1].get_nombre_materia() << endl;
    cout << "3- " << materias_agregacion[2].get_nombre_materia() << endl;
    cout << "4- " << materias_agregacion[3].get_nombre_materia() << endl;
    cout << "5- " << materias_agregacion[4].get_nombre_materia() << endl;
    cout << "Ingrese a que materia desea inscrbirse con su correspondiente numero:" << endl;
    cin >> materia_a_inscribir;
    switch (materia_a_inscribir) {
        case 1: materia_alumno.set_nombre_materia(materia_1);
            break;
        case 2: materia_alumno.set_nombre_materia(materia_2);
            break;
        case 3: materia_alumno.set_nombre_materia(materia_3);
            break;
        case 4: materia_alumno.set_nombre_materia(materia_4);
            break;
        case 5: materia_alumno.set_nombre_materia(materia_5);
            break;
        default: cout << "El numero ingresado no es valido. Ingrese alguno de estos numeros: {1, 2, 3, 4, 5} segun la materia a inscribirse." << endl;
    }
    cout << "Usted se ha inscripto a: " << materia_alumno.get_nombre_materia() << endl << endl << endl;
}

void alumnos::carga_de_nota() {
    int nota;
    cout << "Cargue la nota correspondiente: " << endl;
    cin >> nota;
    materia_alumno.set_nota(nota);
    cout << "La nota cargada es: " << materia_alumno.get_nota() << endl;
}