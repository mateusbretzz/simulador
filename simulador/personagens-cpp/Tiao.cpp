#include "../personagens-hpp/Tiao.hpp"

Tiao::Tiao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Tiao::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Tiao::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Tiao::pegarDescricao() 
{
    return "Hoooo xe xe xe !!";
}