#include "persona.h"
persona::persona(string _nombre, string _apellido, int _DNI, string _mail) {
    nombre = _nombre;
    apellido = _apellido;
    DNI = _DNI;
    mail = _mail;
}

void persona::set_nombre(string _nombre) {
    nombre = _nombre;
}
void persona::set_apellido(string _apellido) {
    apellido = _apellido;
}
void persona::set_mail(string _mail) {
    mail = _mail;
}
void persona::set_DNI(int _DNI) {
    DNI = _DNI;
}
string persona::get_nombre() {
    return nombre;
}
string persona::get_apellido() {
    return apellido;
}
int persona::get_DNI() {
    return DNI;
}
string persona::get_mail() {
    return mail;
}
void persona::modif_datos() {
    string nuevo_nombre;
    string nuevo_apellido;
    int nuevo_DNI;
    string nuevo_mail;
    cout << "Usted está por modificar sus datos."<<endl;
    cout << "Ingrese nuevo nombre: " << endl;
    cin>>nuevo_nombre;
    nombre = nuevo_nombre;
    cout << "Ingrese nuevo apellido: " << endl;
    cin>>nuevo_apellido;
    apellido = nuevo_apellido;
    cout << "Ingrese nuevo DNI: " << endl;
    cin>>nuevo_DNI;
    DNI = nuevo_DNI;
    cout << "Ingrese nuevo mail: " << endl;
    cin>>nuevo_mail;
    mail = nuevo_mail;
    cout << "Nuevo nombre: " << persona::get_nombre() << endl;
    cout << "Nuevo apellido: " << persona::get_apellido() << endl;
    cout << "Nuevo DNI: " << persona::get_DNI() << endl;
    cout << "Nuevo mail: " << persona::get_mail() << endl;
}

void persona::consulta() {
    cout << "Usted ha consultado sus datos: " << endl;
    cout << "Nombre: " << persona::get_nombre() << endl;
    cout << "Apellido: " << persona::get_apellido() << endl;
    cout << "DNI: " << persona::get_DNI() << endl;
    cout << "Mail: " << persona::get_mail() << endl;
}