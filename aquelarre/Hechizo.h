#ifndef HECHIZO_H_INCLUDED
#define HECHIZO_H_INCLUDED
#include "String.h"

class Hechizo
{
private:
    String nombre;
    int numero;
// m�todo auxiliar, incrementa 1 d�a la fecha
public:
    Hechizo(String,int);
    String getNombre();
    int getNumero();
    void setNumero(int);
    void setNombre(String);
    virtual bool esEspecial();
    };

//Constructor por defecto


#endif // HECHIZO_H_INCLUDED
