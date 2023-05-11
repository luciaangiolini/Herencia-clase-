#include "alumnos.h"
#include <iostream>
using namespace std;
#include "persona.h"

alumnos::alumnos(string _carrera, int _edad, string _nombre, string _apellido, string _mail, int _DNI, string _materia_alumno[4], int _nota_alumno[4], int _codigo_alumno[4]): persona(_nombre, _apellido, _DNI, _mail) {
    carrera = _carrera;
    edad = _edad;
    for (int i = 0; i < 4; ++i) {
        materia_alumno[i].set_nombre_materia(_materia_alumno[i]);
        materia_alumno[i].set_nota(_nota_alumno[i]);
        materia_alumno[i].set_codigo(_codigo_alumno[i]);
    } // HMMMM
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

void alumnos::inscripcion_materia(int asignatura) {
        for (int i = 0; i < 4; ++i) {
        switch (asignatura) {
            case 1: materia_alumno[i].set_nombre_materia("ANALISIS MATEMATICO II");
                break;
            case 2: materia_alumno[i].set_nombre_materia("LABORATORIO DE COMPUTACION II");
                break;
            case 3: materia_alumno[i].set_nombre_materia("FISICA I");
                break;
            case 4: materia_alumno[i].set_nombre_materia("PROGRAMACION II");
                break;
            case 5: materia_alumno[i].set_nombre_materia("BIOLOGIA");
                break;
            default: cout << "El numero ingresado no es valido. Ingrese alguno de estos numeros: {1, 2, 3, 4, 5} segun la materia a inscribirse." << endl;
        }
    }
}

void alumnos::carga_de_nota() {
    int nota_1, nota_2, nota_3, nota_4;
    string _nombre, _apellido, _mail, _carrera;
    int _dni;
    cout << "Ingrese los datos de su alumno: " << endl;
    cout << "Nombre: " << endl;
    cin >> _nombre;
    set_nombre(_nombre);
    cout << "Apellido: " << endl;
    cin >> _apellido;
    set_apellido(_apellido);
    cout << "DNI: " << endl;
    cin >> _dni;
    set_DNI(_dni);
    cout << "Mail: " << endl;
    cin >> _mail;
    set_mail(_mail);
    cout << "Carrera: " << endl;
    cin >> _carrera;
    set_carrera(_carrera);
    //No especifique las materias en las que el alumno está inscripto, entonces no se le asignan a cada asignatura sino que se le cargan
    // 4 notas cargadas por el docente (sin ser asociadas a una materia)
    cout << "Cargue las notas correspondientea a las materias del alumno: " << endl;
    cout << "1- " << materia_alumno[0].get_nombre_materia() << endl;
    cin >> nota_1;
    cout << "2- " << materia_alumno[1].get_nombre_materia() << endl;
    cin >> nota_2;
    cout << "3- " << materia_alumno[2].get_nombre_materia() << endl;
    cin >> nota_3;
    cout << "4- " << materia_alumno[3].get_nombre_materia() << endl;
    cin >> nota_4;
    materia_alumno[0].set_nota(nota_1);
    materia_alumno[1].set_nota(nota_2);
    materia_alumno[2].set_nota(nota_3);
    materia_alumno[3].set_nota(nota_4);
    cout << "Las notas cargadas fueron: " <<endl;
    for (int i = 0; i < 4; ++i) {
        cout << "1- " << materia_alumno[i].get_nombre_materia() << " Nota --> " << materia_alumno[i].get_nota() << endl;
    }
}

void alumnos::modif_datos_alumnos(){
    int dato_a_cambiar;
    string nuevo_nombre;
    string nuevo_apellido;
    int nuevo_DNI;
    string nuevo_mail;
    int nueva_edad;
    string nueva_carrera;
    cout << "Datos:" << endl;
    cout << "1- Nombre" << endl;
    cout << "2- Apellido" << endl;
    cout << "3- DNI" << endl;
    cout << "4- Mail" << endl;
    cout << "5- Edad" << endl;
    cout << "6- Carrera" << endl;

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
                cout << "Nueva edad: " << endl;
                cin >> nueva_edad;
                edad = nueva_edad;
                break;
            case 6:
                cout << "Nueva carrera: " << endl;
                cin >> nueva_carrera;
                carrera = nueva_carrera;
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

void alumnos::mostrar_datos_alumno(){
    cout << "Datos:" << endl;
    cout << "Nombre--> " << alumnos::get_nombre() << endl;
    cout << "Apellido--> " << alumnos::get_apellido() << endl;
    cout << "DNI--> " << alumnos::get_DNI() << endl;
    cout << "Mail--> " << alumnos::get_mail() << endl;
    cout << "Edad--> " << alumnos::get_edad() << endl;
    cout << "Carrera--> " << alumnos::get_carrera() << endl;
}