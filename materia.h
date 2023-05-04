#ifndef HERENCIA_MATERIA_H
#define HERENCIA_MATERIA_H
#include <iostream>
using namespace std;

class materia {
    int nota;
    int codigo;
    string nombre_materia;

public:
    materia(){};
    materia(int _nota, int _codigo, string _nombre_materia);
    void set_nota(int _nota);
    void set_codigo(int _codigo);
    void set_nombre_materia(string _nombre_materia);
    int get_nota();
    int get_codigo();
    string get_nombre_materia();
};


#endif //HERENCIA_MATERIA_H
