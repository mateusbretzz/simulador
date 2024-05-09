#include "../personagens-hpp/Simba.hpp"

Simba::Simba(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Simba::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Simba::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Simba::pegarDescricao() 
{
    return "Hakuna Matata !!";
}