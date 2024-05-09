#include "../personagens-hpp/Groot.hpp"

Groot::Groot(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Groot::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Groot::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Groot::pegarDescricao() 
{
    return "Eu sou Groot !!";
}