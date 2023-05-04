#ifndef HERENCIA_PERSONA_H
#define HERENCIA_PERSONA_H
using namespace std;
#include <iostream>

class persona {
    string nombre;
    string apellido;
    string mail;
    int DNI;
public:
    persona(){};
    persona(string _nombre, string _apellido, int _DNI, string _mail);
    string get_nombre();
    string get_apellido();
    int get_DNI();
    string get_mail();
    void modif_datos();
    void consulta();
    void set_nombre(string _nombre);
    void set_apellido(string _apellido);
    void set_mail(string _mail);
    void set_DNI(int _DNI);
};


#endif //HERENCIA_PERSONA_H
