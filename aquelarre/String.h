#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
const int MAX = 80;
class String
{
private:
    char * cadena;
public:
    String();
// constructor por defecto.
    String(char* s);
// constructor com�n
    String(const String &);
// constructor de copia
    ~String();
// destructor
    String operator=(const String &);
// sobrecarga de asignaci�n
    bool operator==(String);
// compara dos strings por igualdad.
    bool operator< (String);
// compara dos strings alfab�ticamente
    String operator+ (String);
// concatenaci�n de strings.
    bool operator!=(String otro);

    void scan();
// lee un string desde la entrada est�ndar.
    void print();
// muestra un string en la salida est�ndar
};
#endif
