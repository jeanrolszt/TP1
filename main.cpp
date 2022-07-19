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
    TUIdioma teste5;
    cout<<"\nTeste Idioma\n";
    switch(teste5.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUIdioma::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUPais teste6;
    cout<<"\nTeste Pais\n";
    switch(teste6.run()){
        case TUPais::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUPais::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUNota teste7;
    cout<<"\nTeste Nota\n";
    switch(teste7.run()){
        case TUNota::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUEmail teste8;
    cout<<"\nTeste Email\n";
    switch(teste8.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUSenha teste9;
    cout<<"\nTeste Senha\n";
    switch(teste9.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA" << endl;
                                break;
    }
}