#include "alumnos.h"
#include "materia.h"
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
    materia materias_agregacion[5];
    materia materias_para_anotar[5];

    cout << "Es usted alumno o docente? " << endl;
    cout << "a --> alumno/a" << endl;
    cout << "d --> docente" << endl;
    cin >> s;

    cout << "Cargue sus datos para seguir con el Sistema de Gestion: " << endl;
    if (s=='a'){
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
    }else if (s == 'd') {
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

    while (1==1) {
        cout << "SISTEMA DE GESTION" << endl << endl;
        cout << "1 - Inscribir a una materia (solo alumnos)" << endl;
        cout << "2 - Anotarse como titular (solo docentes)" << endl;
        cout << "3 - Cargar nota (solo alumnos)" << endl;
        cout << "4 - Modificar datos" << endl;
        cout << "5 - Mostrar datos" << endl;
        cout << "6 - Salir" << endl << endl;

        cout << "Que desea hacer hoy? (Indique con el numero de cada opcion)" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                int materia_a_inscribir;
                materias_agregacion[0].set_nombre_materia("ANALISIS MATEMATICO II");
                materias_agregacion[1].set_nombre_materia("LABORATORIO DE COMPUTACION II");
                materias_agregacion[2].set_nombre_materia("FISICA I");
                materias_agregacion[3].set_nombre_materia("PROGRAMACION II");
                materias_agregacion[4].set_nombre_materia("BIOLOGIA");
                cout << "Materias a inscribirse: " << endl;
                cout << "1- " << materias_agregacion[0].get_nombre_materia() << endl;
                cout << "2- " << materias_agregacion[1].get_nombre_materia() << endl;
                cout << "3- " << materias_agregacion[2].get_nombre_materia() << endl;
                cout << "4- " << materias_agregacion[3].get_nombre_materia() << endl;
                cout << "5- " << materias_agregacion[4].get_nombre_materia() << endl;
                for (int i = 0; i < 4; ++i) {
                    cout << "Ingrese a que materia desea inscrbirse con su correspondiente numero:" << endl;
                    cin >> materia_a_inscribir;
                    alumno.inscripcion_materia(materia_a_inscribir);
                }
                break;
            case 2:
                int materia_a_inscribir_docente;
                materias_para_anotar[0].set_codigo(256);
                materias_para_anotar[1].set_codigo(789);
                materias_para_anotar[2].set_codigo(201);
                materias_para_anotar[3].set_codigo(321);
                materias_para_anotar[4].set_codigo(456);
                materias_para_anotar[0].set_nombre_materia("ANALISIS MATEMATICO II");
                materias_para_anotar[1].set_nombre_materia("LABORATORIO DE COMPUTACION II");
                materias_para_anotar[2].set_nombre_materia("FISICA I");
                materias_para_anotar[3].set_nombre_materia("PROGRAMACION II");
                materias_para_anotar[4].set_nombre_materia("BIOLOGIA");
                cout << "Materias para anotarse a ensenar: " << endl;
                cout << "1- " << materias_para_anotar[0].get_nombre_materia() << "  Codigo: " << materias_para_anotar[0].get_codigo() << endl;
                cout << "2- " << materias_para_anotar[1].get_nombre_materia() << "  Codigo: " << materias_para_anotar[1].get_codigo() << endl;
                cout << "3- " << materias_para_anotar[2].get_nombre_materia() << "  Codigo: " << materias_para_anotar[2].get_codigo() << endl;
                cout << "4- " << materias_para_anotar[3].get_nombre_materia() << "  Codigo: " << materias_para_anotar[3].get_codigo() << endl;
                cout << "5- " << materias_para_anotar[4].get_nombre_materia() << "  Codigo: " << materias_para_anotar[4].get_codigo() << endl;
                for (int i = 0; i < 2; ++i) {
                    cout << "Ingrese a que materia desea anotarse a ensenar con su correspondiente numero:" << endl;
                    cin >> materia_a_inscribir_docente;
                    docent.anotar_materia(materia_a_inscribir_docente);
                }
                break;
            case 3:
                alumno.carga_de_nota();
                break;
            case 4:
                if (s == 'a') {
                    alumno.modif_datos_alumnos();
                } else if (s == 'd') {
                    docent.modif_datos_docente();
                }
                break;
            case 5:
                if (s=='a'){
                    alumno.mostrar_datos_alumno();
                }else if (s=='d'){
                    docent.mostrar_datos_docente();
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