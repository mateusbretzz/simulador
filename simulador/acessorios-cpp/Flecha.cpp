#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Flecha.hpp"

Flecha::Flecha(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Flecha::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Flecha::gerarRuidoAtaque()
{
    return "cush cush";
}
