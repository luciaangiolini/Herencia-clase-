#include "materia.h"
#include <iostream>
using namespace std;
#ifndef HERENCIA_ALUMNOS_H
#define HERENCIA_ALUMNOS_H
#include "persona.h"
class alumnos: public persona{
public:
    string carrera;
    int edad;
    materia materia_alumno[4];
    alumnos(){};
    alumnos(string _carrera, int _edad, string _nombre, string _apellido, string _mail, int _DNI, string _materia_alumno[4], int _nota_alumno[4], int _codigo_alumno[4]);
    void set_carrera(string _carrera);
    string get_carrera();
    void set_edad(int _edad);
    int get_edad();
    void inscripcion_materia(int asignatura);
    void carga_de_nota();
    void modif_datos_alumnos();
    void mostrar_datos_alumno();
};

#endif //HERENCIA_ALUMNOS_H
