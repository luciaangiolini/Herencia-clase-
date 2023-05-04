#include "materia.h"
#include <iostream>
using namespace std;

materia::materia(int _nota, int _codigo, string _nombre_materia) {
    nota = _nota;
    codigo = _codigo;
    nombre_materia = _nombre_materia;
}
void materia::set_nota(int _nota) {
    nota = _nota;
}
void materia::set_codigo(int _codigo) {
    codigo = _codigo;
}
void materia::set_nombre_materia(string _nombre_materia) {
    nombre_materia = _nombre_materia;
}
int materia::get_nota() {
    return nota;
}
int materia::get_codigo() {
    return codigo;
}
string materia::get_nombre_materia() {
    return nombre_materia;
}
