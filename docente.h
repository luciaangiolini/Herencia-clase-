#ifndef HERENCIA_DOCENTE_H
#define HERENCIA_DOCENTE_H
#include "persona.h"
#include "materia.h"
#include <iostream>
using namespace std;

class docente: public persona {
    string titulo;
public:
    materia materia_docente;
    materia materias_para_anotar[5];
    docente(){};
    docente(string _titulo, string _nombre, string _apellido, string _mail, int _DNI, string _materia_docente, int _codigo_materia);
    void set_titulo(string _titulo);
    string get_titulo();
    void anotar_materia();
    void consultar_materias_que_ensena();
};


#endif //HERENCIA_DOCENTE_H
