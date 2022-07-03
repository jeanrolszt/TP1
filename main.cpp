#include <iostream>

#include "domain.h"
#include "test.h"

using namespace std;

int main(){
    TUCidade teste;


    switch(teste.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }
}