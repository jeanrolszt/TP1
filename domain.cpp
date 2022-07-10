#include "domain.h"
#include <iostream>

using namespace std;

//-----------------------------------------
void Cidade::validar(string input){
    std::string cidades[]= {"Antalya","Bangkok","Delhi","Dubai","Hong Kong","Londres","Macau","Mumbai","Paris","Rio de Janeiro","Sao Paulo","Seul","Istambul","Kuala Lumpur","Nova Iorque","Osaka","Phuket","Shenzhen","Toquio"};
    bool valido = false;
    int tamanhoCidades = sizeof(cidades)/sizeof(cidades[0]);
    for(int i=0;i<tamanhoCidades;i++){
        if(cidades[i]==input){
            valido=true;
            break;
        }
    }
    if(!valido) throw invalid_argument("O argumento eh invalido");
}

void Cidade::setValor(string valor){
    validar(valor);
    this->valor=valor;
}
//-----------------------------------------

void Codigo::validar(string input){
    if(input.size() == 11){
        int sum = 0;
        for(int i=10;i>=0;i--){
            if(i%2 == 0)sum+=input[i];
            else if(input[i]>9)sum+=(input[i]-9);
            else sum+=input[i];
        }
        if(sum%10!=0)throw invalid_argument("O argumento eh invalido");
    }
    else throw invalid_argument("O argumento eh invalido");
}

void Codigo::setValor(string valor){
    validar(valor);
    this->valor=valor;
}

