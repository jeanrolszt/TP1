#include "domain.h"
#include <iostream>
#include <string>


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


//-----------------------------------------
void Data::validar(string input){
    if(input.size() == 6){
        string dd = input.substr(0,2);
        int dia = stoi(dd);
        if(!(dia>0&&dia<=31))throw invalid_argument("O argumento eh invalido");
        std::string meses[] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
        string mes = input.substr(3,3);
        bool valido=false;
        for(int i=0;i<12;i++){
            if(meses[i]==mes){
                valido=true;
                break;
            }
        }
        if(!valido)throw invalid_argument("O argumento eh invalido");

    }
    else throw invalid_argument("O argumento eh invalido");
}

void Data::setValor(string valor){
    validar(valor);
    this->valor=valor;
}

//-----------------------------------------
void Descricao::validar(string input){
        if(input.size() <=40){
        string caracteres_invalidos[] = {".",".",",",";",":","?","!","-"};
        for(int i=0;i<input.size();i++){
            if(input[i]==' '&&input[i+1]==' ')throw invalid_argument("O argumento eh invalido");
            for(int j=0;j<8;j++){
                for(int k=0;k<8;k++){
                    if(input[i] == caracteres_invalidos[j][0]&&input[i+1] == caracteres_invalidos[k][0])throw invalid_argument("O argumento eh invalido");
                }
            }
        }

    }
    else throw invalid_argument("O argumento eh invalido");
}

void Descricao::setValor(string valor){
    validar(valor);
    this->valor=valor;
}

//-----------------------------------------
void Email::validar(string input){
    size_t arroba = input.find("@");
    string parte_local = "";
    string dominio = "";
    if(arroba != string::npos){
        parte_local = input.substr(0,arroba);
        dominio = input.substr(arroba+1);
        if(parte_local.length()>64||parte_local[0]=='.') throw invalid_argument("O argumento eh invalido");
        for(int i=0;i<parte_local.length();i++){
            if((parte_local[i]>=65&&parte_local[i]<=90)||(parte_local[i]>=97&&parte_local[i]<=122)||(parte_local[i]>=48&&parte_local[i]<=57)){
                // ok
            }
            else if((parte_local[i]=='-'||parte_local[i]=='_'||parte_local[i]=='.')&&((parte_local[i+1]>=65&&parte_local[i+1]<=90)||(parte_local[i+1]>=97&&parte_local[i+1]<=122)||(parte_local[i+1]>=48&&parte_local[i+1]<=57))){
                i++;
                // ok
            }else throw invalid_argument("O argumento eh invalido");
        }
        if(dominio[0]=='.')throw invalid_argument("O argumento eh invalido");
        int count = 0;
        for(int i=1;i<dominio.length();i++){
            if(count>63)throw invalid_argument("O argumento eh invalido");
            if((dominio[i]>='a'&&dominio[i]<='z')||(dominio[i]>='A'&&dominio[i]<='Z')||(dominio[i]>='0'&&dominio[i]<='9')){
                // ok
            } else if(!((dominio[i]=='-')&&(dominio[i-1]=='.'||dominio[i+1]=='.'))){
                //ok
            }else throw invalid_argument("O argumento eh invalido");
            count++;
            if(dominio[i]=='.')count=0;
        }
        
    }
    else throw invalid_argument("O argumento eh invalido");

}

void Email::setValor(string valor){
    validar(valor);
    this->valor=valor;
}


//-----------------------------------------
void Idioma::validar(string input){
    std::string idiomas[]= {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};
    bool valido = false;
    int tamanhoIdiomas = sizeof(idiomas)/sizeof(idiomas[0]);
    for(int i=0;i<tamanhoIdiomas;i++){
        if(idiomas[i]==input){
            valido=true;
            break;
        }
    }
    if(!valido) throw invalid_argument("O argumento eh invalido");
}

void Idioma::setValor(string valor){
    validar(valor);
    this->valor=valor;
}




//-----------------------------------------
void Pais::validar(string input){
    std::string pais[]= {"Estados Unidos", "Brasil", "China", "Coreia do Sul", "Emirados", "França", "India", "Japao", "Malasia", "Reino Unido", "Tailandia", "Turquia"};
    bool valido = false;
    int tamanhoPais = sizeof(pais)/sizeof(pais[0]);
    for(int i=0;i<tamanhoPais;i++){
        if(pais[i]==input){
            valido=true;
            break;
        }
    }
    if(!valido) throw invalid_argument("O argumento eh invalido");
}

void Pais::setValor(string valor){
    validar(valor);
    this->valor=valor;
}


//-----------------------------------------
void Nota::validar(string input){
    int nota = stoi(input);
    if(!(nota>=0&&nota<=10))throw invalid_argument("O argumento eh invalido");
}

void Nota::setValor(string valor){
    validar(valor);
    this->valor=valor;
}


//-----------------------------------------
void Senha::validar(string input){
    if(input.length()==5){
        bool letra = false;
        bool numero = false;
        bool especial = false;
        for(int i=0;i<input.length();i++){
            if((input[i]>='a'&&input[i]<='z')||(input[i]>='A'&&input[i]<='Z'))letra = true;
            else if(input[i]>='0'&&input[i]<='9') numero = true;
            else if(input[i]=='!'||input[i]=='#'||input[i]=='$'||input[i]=='%'||input[i]=='&') especial=true;
            else throw invalid_argument("O argumento eh invalido");
        }
        if(!(letra&&numero&&especial))throw invalid_argument("O argumento eh invalido");
    }else throw invalid_argument("O argumento eh invalido");
}

void Senha::setValor(string valor){
    validar(valor);
    this->valor=valor;
}

