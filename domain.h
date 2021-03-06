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

//--------------------------------------------
//DD/MES


class Data{
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Data::getValor() const{
    return valor;
}

//--------------------------------------------
//


class Descricao{
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Descricao::getValor() const{
    return valor;
}

//--------------------------------------------
//


class Email{
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Email::getValor() const{
    return valor;
}

//--------------------------------------------
//


class Idioma {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:

        ///Armazena a Idioma caso a mesma for válida.
        ///Lança uma exeção caso a idioma não seja válida.
        ///@param valor Idioma
        ///@throw invalid_argument
        void setValor(string);             // Método para atribuir valor.

        ///Retorna o nome da Idioma.
        ///
        ///@return Idioma
        string getValor() const;           // Método para recuperar valor.
};

inline string Idioma::getValor() const{
    return valor;
}


//--------------------------------------------

class Pais {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:

        ///Armazena a Pais caso a mesma for válida.
        ///Lança uma exeção caso a pais não seja válida.
        ///@param valor Pais
        ///@throw invalid_argument
        void setValor(string);             // Método para atribuir valor.

        ///Retorna o nome da Pais.
        ///
        ///@return Pais
        string getValor() const;           // Método para recuperar valor.
};

inline string Pais::getValor() const{
    return valor;
}



//--------------------------------------------
class Nota {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:

        ///Armazena a Nota caso a mesma for válida.
        ///Lança uma exeção caso a Nota não seja válida.
        ///@param valor Nota
        ///@throw invalid_argument
        void setValor(string);             // Método para atribuir valor.

        ///Retorna o nome da Nota.
        ///
        ///@return Nota
        string getValor() const;           // Método para recuperar valor.
};

inline string Nota::getValor() const{
    return valor;
}


//--------------------------------------------
class Senha {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:

        ///Armazena a Senha caso a mesma for válida.
        ///Lança uma exeção caso a Senha não seja válida.
        ///@param valor Senha
        ///@throw invalid_argument
        void setValor(string);             // Método para atribuir valor.

        ///Retorna o nome da Senha.
        ///
        ///@return Senha
        string getValor() const;           // Método para recuperar valor.
};

inline string Senha::getValor() const{
    return valor;
}


//--------------------------------------------
class Nome {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:

        ///Armazena a Nome caso a mesma for válida.
        ///Lança uma exeção caso a Nome não seja válida.
        ///@param valor Nome
        ///@throw invalid_argument
        void setValor(string);             // Método para atribuir valor.

        ///Retorna o nome da Nome.
        ///
        ///@return Nome
        string getValor() const;           // Método para recuperar valor.
};

inline string Nome::getValor() const{
    return valor;
}


#endif