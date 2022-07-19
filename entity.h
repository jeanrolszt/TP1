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



//-------------------------------------------

class Hospedagem {
    private:
            Codigo codigo;                   // Declarar cada atributo da classe.
            Cidade cidade;
            Pais pais;
            Nota nota;
            Descricao descricao;
    public:
            void setCodigo(const Codigo&);   // Declarar método set para cada atributo.
            Codigo getCodigo() const;        // Declarar método get para cada atributo.
            void setCidade(const Cidade&);   // Declarar método set para cada atributo.
            Cidade getCidade() const;        // Declarar método get para cada atributo.
            void setPais(const Pais&);   // Declarar método set para cada atributo.
            Pais getPais() const;        // Declarar método get para cada atributo.
            void setNota(const Nota&);   // Declarar método set para cada atributo.
            Nota getNota() const;        // Declarar método get para cada atributo.
            void setDescricao(const Descricao&);   // Declarar método set para cada atributo.
            Descricao getDescricao() const;        // Declarar método get para cada atributo.
};

inline void Hospedagem::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Hospedagem::getCodigo() const{
    return codigo;
}

inline void Hospedagem::setCidade(const Cidade &cidade){
    this->cidade = cidade;
}

inline Cidade Hospedagem::getCidade() const{
    return cidade;
}

inline void Hospedagem::setPais(const Pais &pais){
    this->pais = pais;
}

inline Pais Hospedagem::getPais() const{
    return pais;
}

inline void Hospedagem::setNota(const Nota &nota){
    this->nota = nota;
}

inline Nota Hospedagem::getNota() const{
    return nota;
}

inline void Hospedagem::setDescricao(const Descricao &descricao){
    this->descricao = descricao;
}

inline Descricao Hospedagem::getDescricao() const{
    return descricao;
}


//-------------------------------------------

class Usuario {
    private:
            Nome nome;                   // Declarar cada atributo da classe.
            Email email;                   // Declarar cada atributo da classe.
            Senha senha;
            Idioma idioma;
            Data aniversario;
    public:
            void setNome(const Nome&);   // Declarar método set para cada atributo.
            Nome getNome() const;        // Declarar método get para cada atributo.

            void setEmail(const Email&);   // Declarar método set para cada atributo.
            Email getEmail() const;        // Declarar método get para cada atributo.

            void setSenha(const Senha&);   // Declarar método set para cada atributo.
            Senha getSenha() const;        // Declarar método get para cada atributo.

            void setIdioma(const Idioma&);   // Declarar método set para cada atributo.
            Idioma getIdioma() const;        // Declarar método get para cada atributo.
            
            void setAniversario(const Data&);   // Declarar método set para cada atributo.
            Data getAniversario() const;        // Declarar método get para cada atributo.
};

inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

inline Nome Usuario::getNome() const{
    return nome;
}

inline void Usuario::setEmail(const Email &email){
    this->email = email;
}

inline Email Usuario::getEmail() const{
    return email;
}

inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Usuario::getSenha() const{
    return senha;
}

inline void Usuario::setIdioma(const Idioma &idioma){
    this->idioma = idioma;
}

inline Idioma Usuario::getIdioma() const{
    return idioma;
}

inline void Usuario::setAniversario(const Data &aniversario){
    this->aniversario = aniversario;
}

inline Data Usuario::getAniversario() const{
    return aniversario;
}

#endif