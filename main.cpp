#include <iostream>

#include "domain.h"
#include "test.h"

using namespace std;

int main(){

    TUCidade teste1;
    switch(teste1.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUCodigo teste2;
    switch(teste2.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA" << endl;
                                break;
    }
}