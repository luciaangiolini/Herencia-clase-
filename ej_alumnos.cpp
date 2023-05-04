#include "alumnos.h"
#include "docente.h"
#include <iostream>
using namespace std;

int main(){
    alumnos alumno;
    docente docent;
    int opcion;
    //General
    string _nombre, _apellido, _mail;
    int _dni;
    //Alumno
    string _carrera, _materia_alumno;
    int _edad, _nota, _codigo_alumno;
    //Docente
    string _titulo, _materia_docente;
    int _codigo_materia;
    char s;

    cout << "Es usted alumno o docente? " << endl;
    cout << "a --> alumno/a" << endl;
    cout << "d --> docente" << endl;
    cin >> s;

    while (1==1) {
        cout << "SISTEMA DE GESTION" << endl << endl;
        cout << "1 - Ingresar sus datos" << endl;
        cout << "2 - Inscribir a una materia (solo alumnos)" << endl;
        cout << "3 - Anotarse como titular (solo docentes)" << endl;
        cout << "4 - Cargar nota (solo alumnos)" << endl;
        cout << "5 - Modificar datos" << endl;
        cout << "6 - Salir" << endl << endl;

        cout << "Que desea hacer hoy? (Indique con el numero de cada opcion)" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                if (s == 'a') {
                    cout << "Ingrese su nombre: " << endl;
                    cin >> _nombre;
                    alumno.set_nombre(_nombre);
                    cout << "Ingrese su apellido: " << endl;
                    cin >> _apellido;
                    alumno.set_apellido(_apellido);
                    cout << "Ingrese su DNI: " << endl;
                    cin >> _dni;
                    alumno.set_DNI(_dni);
                    cout << "Ingrese su mail: " << endl;
                    cin >> _mail;
                    alumno.set_mail(_mail);
                    cout << "Ingrese su carrera: " << endl;
                    cin >> _carrera;
                    alumno.set_carrera(_carrera);
                    cout << "Ingrese su edad: " << endl;
                    cin >> _edad;
                    alumno.set_edad(_edad);
                } else if (s == 'd') {
                    cout << "Ingrese su nombre: " << endl;
                    cin >> _nombre;
                    docent.set_nombre(_nombre);
                    cout << "Ingrese su apellido: " << endl;
                    cin >> _apellido;
                    docent.set_apellido(_apellido);
                    cout << "Ingrese su DNI: " << endl;
                    cin >> _dni;
                    docent.set_DNI(_dni);
                    cout << "Ingrese su mail: " << endl;
                    cin >> _mail;
                    docent.set_mail(_mail);
                    cout << "Ingrese su título: " << endl;
                    cin >> _titulo;
                    docent.set_titulo(_titulo);
                }
                break;
            case 2:
                alumno.inscripcion_materia();
                break;
            case 3:
                docent.anotar_materia();
                break;
            case 4:
                alumno.carga_de_nota();
                break;
            case 5:
                if (s == 'a') {
                    alumno.modif_datos();
                } else if (s == 'd') {
                    docent.modif_datos();
                }
                break;
            case 6:
                exit(EXIT_SUCCESS);
                break;
            default:
                cout << "Entrada de opcion no valida" << endl;
                break;
        }
    }
}





/* Código para probar si funcionaba el método carga de nota
 *  alumnos a;
    a.carga_de_nota();
    */

/*Codigo para probar si funcionaba el metodo inscribir en materia
 * alumnos P;
string nombre_;
string apellido_;
int DNI_;
string mail_;
cout << "Ingrese nombre:";
cin >> nombre_;
P.set_nombre(nombre_);
cout << "Ingrese apellido:";
cin >> apellido_;
P.set_apellido(apellido_);
cout << "Ingrese DNI:";
cin >> DNI_;
P.set_DNI(DNI_);
cout << "Ingrese mail:";
cin >> mail_;
P.set_mail(mail_);
cout<<endl<<endl;
P.inscripcion_materia();*/

/*  Código para probar si funcionaba modificar los datos
 *  persona P[3];
    string nombre_;
    string apellido_;
    int DNI_;
    string mail_;
    for (int i = 0; i < 3; ++i) {
        cout << "Persona " << i+1 << endl;
        cout << "Ingrese nombre:";
        cin >> nombre_;
        P[i].set_nombre(nombre_);
        cout << "Ingrese apellido:";
        cin >> apellido_;
        P[i].set_apellido(apellido_);
        cout << "Ingrese DNI:";
        cin >> DNI_;
        P[i].set_DNI(DNI_);
        cout << "Ingrese mail:";
        cin >> mail_;
        P[i].set_mail(mail_);
        cout<<endl<<endl;
    }
    P[0].modif_datos();*/