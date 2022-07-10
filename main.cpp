#include <iostream>

#include "domain.h"
#include "test.h"

using namespace std;

int main(){

    TUCidade teste1;
    cout<<"\nTeste Cidade\n";
    switch(teste1.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUCodigo teste2;
    cout<<"\nTeste Codigo\n";
    switch(teste2.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUData teste3;
    cout<<"\nTeste Data\n";
    switch(teste3.run()){
        case TUData::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUDescricao teste4;
    cout<<"\nTeste Descricao\n";
    switch(teste4.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA" << endl;
                                break;
    }
}