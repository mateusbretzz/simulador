#include "../personagens-hpp/Elsa.hpp"

Elsa::Elsa(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Elsa::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Elsa::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Elsa::pegarDescricao() 
{
    return "Let it go, let it go !!";
}