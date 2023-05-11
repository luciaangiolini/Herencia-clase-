#ifndef HERENCIA_DOCENTE_H
#define HERENCIA_DOCENTE_H
#include "persona.h"
#include "materia.h"
#include <iostream>
using namespace std;

class docente: public persona {
    string titulo;
public:
    materia materia_docente[2];
    docente(){};
    docente(string _titulo, string _nombre, string _apellido, string _mail, int _DNI, string _materia_docente[2], int _codigo_materia[2]);
    void set_titulo(string _titulo);
    string get_titulo();
    void anotar_materia(int materia_a_anotar);
    void consultar_materias_que_ensena();
    void mostrar_datos_docente();
    void modif_datos_docente();

};


#endif //HERENCIA_DOCENTE_H
