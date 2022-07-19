#include "test.h"

using namespace std;


// Testes de unidade domains
const string TUCidade::VALOR_VALIDO = "Hong Kong";
const string TUCidade::VALOR_INVALIDO = "Brasilia";

void TUCidade::setUp(){
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown(){
    delete cidade;
}

void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setValor(VALOR_VALIDO);
        if (cidade->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha(){
    try{
        cidade->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cidade->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//------------------------------------------------------------------
const string TUCodigo::VALOR_VALIDO = "12345678911";
const string TUCodigo::VALOR_INVALIDO = "12345678912";

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//------------------------------------------------------------------
const string TUData::VALOR_VALIDO = "21/Dez";
const string TUData::VALOR_INVALIDO = "21//Sa";

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//------------------------------------------------------------------
const string TUDescricao::VALOR_VALIDO = "Essa é uma pequena descricao valida";
const string TUDescricao::VALOR_INVALIDO = "Essa descricao é invalida   ..-------";

void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete descricao;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setValor(VALOR_VALIDO);
        if (descricao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (descricao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



const string TUIdioma::VALOR_VALIDO = "Chines Mandarim";
const string TUIdioma::VALOR_INVALIDO = "Brasilia";

void TUIdioma::setUp(){
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown(){
    delete idioma;
}

void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setValor(VALOR_VALIDO);
        if (idioma->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (idioma->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}









const string TUPais::VALOR_VALIDO = "Coreia do Sul";
const string TUPais::VALOR_INVALIDO = "Brasilia";

void TUPais::setUp(){
    pais = new Pais();
    estado = SUCESSO;
}

void TUPais::tearDown(){
    delete pais;
}

void TUPais::testarCenarioSucesso(){
    try{
        pais->setValor(VALOR_VALIDO);
        if (pais->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUPais::testarCenarioFalha(){
    try{
        pais->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (pais->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUPais::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}




const string TUNota::VALOR_VALIDO = "5";
const string TUNota::VALOR_INVALIDO = "11";

void TUNota::setUp(){
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown(){
    delete nota;
}

void TUNota::testarCenarioSucesso(){
    try{
        nota->setValor(VALOR_VALIDO);
        if (nota->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha(){
    try{
        nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nota->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUEmail::VALOR_VALIDO = "jeanrolszt@gmail.com";
const string TUEmail::VALOR_INVALIDO = "jean.rolszr@.dasdasdasd.comomom.masmd..";

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUSenha::VALOR_VALIDO = "XCa!1";
const string TUSenha::VALOR_INVALIDO = "@as!1";

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUNome::VALOR_VALIDO = "Jean Rolszt";
const string TUNome::VALOR_INVALIDO = "Assdd Asdda AS";

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



// Implementação das unidades de testes de entidades

const string TUAvaliacao::VALOR_VALIDO_CODIGO = "12345678911";
const string TUAvaliacao::VALOR_VALIDO_NOTA = "5";
const string TUAvaliacao::VALOR_VALIDO_DESCRICAO = "Isso e uma descricao valida.";

void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    avaliacao->setCodigo(codigo);
    if(avaliacao->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Nota nota;
    nota.setValor(VALOR_VALIDO_NOTA);
    avaliacao->setNota(nota);
    if(avaliacao->getNota().getValor() != VALOR_VALIDO_NOTA)
        estado = FALHA;

    Descricao descricao;
    descricao.setValor(VALOR_VALIDO_DESCRICAO);
    avaliacao->setDescricao(descricao);
    if(avaliacao->getDescricao().getValor() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
}

int TUAvaliacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}



const string TUHospedagem::VALOR_VALIDO_CODIGO = "12345678911";
const string TUHospedagem::VALOR_VALIDO_CIDADE = "Londres";
const string TUHospedagem::VALOR_VALIDO_PAIS = "Coreia do Sul";
const string TUHospedagem::VALOR_VALIDO_NOTA = "5";
const string TUHospedagem::VALOR_VALIDO_DESCRICAO = "Isso e uma descricao valida.";

void TUHospedagem::setUp(){
    hospedaem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown(){
    delete hospedaem;
}

void TUHospedagem::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    hospedaem->setCodigo(codigo);
    if(hospedaem->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Cidade cidade;
    cidade.setValor(VALOR_VALIDO_CIDADE);
    hospedaem->setCidade(cidade);
    if(hospedaem->getCidade().getValor() != VALOR_VALIDO_CIDADE)
        estado = FALHA;

    Pais pais;
    pais.setValor(VALOR_VALIDO_PAIS);
    hospedaem->setPais(pais);
    if(hospedaem->getPais().getValor() != VALOR_VALIDO_PAIS)
        estado = FALHA;

    Nota nota;
    nota.setValor(VALOR_VALIDO_NOTA);
    hospedaem->setNota(nota);
    if(hospedaem->getNota().getValor() != VALOR_VALIDO_NOTA)
        estado = FALHA;

    Descricao descricao;
    descricao.setValor(VALOR_VALIDO_DESCRICAO);
    hospedaem->setDescricao(descricao);
    if(hospedaem->getDescricao().getValor() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
}

int TUHospedagem::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}



const string TUUsuario::VALOR_VALIDO_NOME = "Jean Rolszt";
const string TUUsuario::VALOR_VALIDO_EMAIL = "jeanrolszr@gmail.com";
const string TUUsuario::VALOR_VALIDO_SENHA = "XCa!1";
const string TUUsuario::VALOR_VALIDO_IDIOMA = "Ingles";
const string TUUsuario::VALOR_VALIDO_DATA = "24/Dez";
const string TUUsuario::VALOR_VALIDO_DESCRICAO = "Isso e uma descricao valida.";

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    usuario->setNome(nome);
    if(usuario->getNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Email email;
    email.setValor(VALOR_VALIDO_EMAIL);
    usuario->setEmail(email);
    if(usuario->getEmail().getValor() != VALOR_VALIDO_EMAIL)
        estado = FALHA;

    Senha senha;
    senha.setValor(VALOR_VALIDO_SENHA);
    usuario->setSenha(senha);
    if(usuario->getSenha().getValor() != VALOR_VALIDO_SENHA)
        estado = FALHA;

    Idioma idioma;
    idioma.setValor(VALOR_VALIDO_IDIOMA);
    usuario->setIdioma(idioma);
    if(usuario->getIdioma().getValor() != VALOR_VALIDO_IDIOMA)
        estado = FALHA;

    Data aniversario;
    aniversario.setValor(VALOR_VALIDO_DATA);
    usuario->setAniversario(aniversario);
    if(usuario->getAniversario().getValor() != VALOR_VALIDO_DATA)
        estado = FALHA;
    
    Descricao descricao;
    descricao.setValor(VALOR_VALIDO_DESCRICAO);
    usuario->setDescricao(descricao);
    if(usuario->getDescricao().getValor() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
