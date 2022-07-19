#ifndef ENIDADES_HPP_INCLUDED
#define ENIDADES_HPP_INCLUDED

#include "domain.h"

using namespace std;



class Avaliacao {
    private:
            Codigo codigo;                   // Declarar cada atributo da classe.
            Nota nota;
            Descricao descricao;
    public:
            void setCodigo(const Codigo&);   // Declarar método set para cada atributo.
            Codigo getCodigo() const;        // Declarar método get para cada atributo.
            void setNota(const Nota&);   // Declarar método set para cada atributo.
            Nota getNota() const;        // Declarar método get para cada atributo.
            void setDescricao(const Descricao&);   // Declarar método set para cada atributo.
            Descricao getDescricao() const;        // Declarar método get para cada atributo.
};

inline void Avaliacao::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Avaliacao::getCodigo() const{
    return codigo;
}

inline void Avaliacao::setNota(const Nota &nota){
    this->nota = nota;
}

inline Nota Avaliacao::getNota() const{
    return nota;
}

inline void Avaliacao::setDescricao(const Descricao &descricao){
    this->descricao = descricao;
}

inline Descricao Avaliacao::getDescricao() const{
    return descricao;
}




#endif