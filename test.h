#ifndef TESTS_HPP_INCLUDE
#define TESTS_HPP_INCLUDE

#include "domain.h"

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

#endif