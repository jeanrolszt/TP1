#ifndef TESTS_HPP_INCLUDE
#define TESTS_HPP_INCLUDE

#include "domain.h"
#include "entity.h"

using namespace std;

class TUCidade {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Cidade *cidade;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};



class TUCodigo {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Codigo *codigo;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


class TUData {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Data *data;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


class TUDescricao {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Descricao *descricao;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


class TUPais {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Pais *pais;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

class TUIdioma {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Idioma *idioma;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


class TUNota {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Nota *nota;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

class TUEmail {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Email *email;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

class TUSenha {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Senha *senha;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

class TUNome {
private:
    const static string VALOR_VALIDO;   // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO;   // Definição de constante para evitar número mágico.
    Nome *nome;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


//-------Teste de Unidade entidades


class TUAvaliacao {
private:
    const static string VALOR_VALIDO_CODIGO;   // Definição de constante para evitar número mágico.
    const static string VALOR_VALIDO_NOTA;   // Definição de constante para evitar número mágico.
    const static string VALOR_VALIDO_DESCRICAO;   // Definição de constante para evitar número mágico.
    Avaliacao *avaliacao;                       // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


class TUHospedagem {
private:
    const static string VALOR_VALIDO_CODIGO;   // Definição de constante para evitar número mágico.
    const static string VALOR_VALIDO_CIDADE;   // Definição de constante para evitar número mágico.
    const static string VALOR_VALIDO_PAIS;   // Definição de constante para evitar número mágico.
    const static string VALOR_VALIDO_NOTA;   // Definição de constante para evitar número mágico.
    const static string VALOR_VALIDO_DESCRICAO;   // Definição de constante para evitar número mágico.
    Hospedagem *hospedaem;                       // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};



#endif