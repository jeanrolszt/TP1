#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string.h>
#include <stdexcept>

using namespace std;



class Cidade {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:
        void setValor(string);             // Método para atribuir valor.
        string getValor() const;           // Método para recuperar valor.
};

inline string Cidade::getValor() const{
    return valor;
}

#endif