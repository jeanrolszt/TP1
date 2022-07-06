#include "domain.h"

using namespace std;


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
    if(!valido) throw invalid_argument("O nome da cidade eh invalido");
}

void Cidade::setValor(string valor){
    validar(valor);
    this->valor=valor;
}

