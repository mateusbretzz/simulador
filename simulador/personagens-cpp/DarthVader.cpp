#include "../personagens-hpp/DarthVader.hpp"

DarthVader::DarthVader(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int DarthVader::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int DarthVader::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string DarthVader::pegarDescricao() 
{
    return "Eu sou seu pai !!";
}