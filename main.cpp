#include <iostream>

#include "domain.h"
#include "test.h"

using namespace std;

int main(){

    TUCidade teste1;
    cout<<"\nTESTE DOMINIO Cidade\n";
    switch(teste1.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUCodigo teste2;
    cout<<"\nTESTE DOMINIO Codigo\n";
    switch(teste2.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUData teste3;
    cout<<"\nTESTE DOMINIO Data\n";
    switch(teste3.run()){
        case TUData::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUDescricao teste4;
    cout<<"\nTESTE DOMINIO Descricao\n";
    switch(teste4.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUIdioma teste5;
    cout<<"\nTESTE DOMINIO Idioma\n";
    switch(teste5.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUIdioma::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUPais teste6;
    cout<<"\nTESTE DOMINIO Pais\n";
    switch(teste6.run()){
        case TUPais::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUPais::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUNota teste7;
    cout<<"\nTESTE DOMINIO Nota\n";
    switch(teste7.run()){
        case TUNota::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUEmail teste8;
    cout<<"\nTESTE DOMINIO Email\n";
    switch(teste8.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    TUSenha teste9;
    cout<<"\nTESTE DOMINIO Senha\n";
    switch(teste9.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUNome teste10;
    cout<<"\nTESTE DOMINIO Nome\n";
    switch(teste10.run()){
        case TUNome::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA" << endl;
                                break;
    }



    //Testes de unidade de entidades

    TUAvaliacao testeA;
    cout<<"\nTESTE ENTIDADE Avaliacao\n";
    switch(testeA.run()){
        case TUAvaliacao::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUAvaliacao::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUHospedagem testeB;
    cout<<"\nTESTE ENTIDADE Hospedagem\n";
    switch(testeB.run()){
        case TUHospedagem::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUHospedagem::FALHA  : cout << "FALHA" << endl;
                                break;
    }

}
