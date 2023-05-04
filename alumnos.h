#include "materia.h"
#include <iostream>
using namespace std;
#ifndef HERENCIA_ALUMNOS_H
#define HERENCIA_ALUMNOS_H
#include "persona.h"
class alumnos: public persona{
    string carrera;
    int edad;
public:
    materia materias_agregacion[5];
    materia materia_alumno;
    alumnos(){};
    alumnos(string _carrera, int _edad, string _nombre, string _apellido, string _mail, int _DNI, string _materia_alumno, int _nota_alumno, int _codigo_alumno);
    void set_carrera(string _carrera);
    string get_carrera();
    void set_edad(int _edad);
    int get_edad();
    void inscripcion_materia();
    void carga_de_nota();
};

#endif //HERENCIA_ALUMNOS_H
