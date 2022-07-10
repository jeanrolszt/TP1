#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string.h>
#include <stdexcept>

using namespace std;

//--------------------------------------------
/// Padrão para a construção de Cidade.
///
/// As cidades válidas são:
/// - Antalya
/// - Bangkok
/// - Delhi
/// - Dubai
/// - Hong Kong
/// - Londres
/// - Macau
/// - Mumbai
/// - Paris
/// - Rio de Janeiro
/// - Sao Paulo
/// - Seul
/// - Istambul
/// - Kuala Lumpur
/// - Nova Iorque
/// - Osaka
/// - Phuket
/// - Shenzhen
/// - Toquio

class Cidade {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:

        ///Armazena a Cidade caso a mesma for válida.
        ///Lança uma exeção caso a cidade não seja válida.
        ///@param valor Cidade
        ///@throw invalid_argument
        void setValor(string);             // Método para atribuir valor.

        ///Retorna o nome da Cidade.
        ///
        ///@return Cidade
        string getValor() const;           // Método para recuperar valor.
};

inline string Cidade::getValor() const{
    return valor;
}

//--------------------------------------------
//DDDDDDDDDDX


class Codigo{
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Codigo::getValor() const{
    return valor;
}

#endif