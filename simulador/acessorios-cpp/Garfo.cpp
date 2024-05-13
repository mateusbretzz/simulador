#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Garfo.hpp"

Garfo::Garfo(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Garfo::gerarForcaAtaque()
{
    return maxForca - minForca + 10;
}

string Garfo::gerarRuidoAtaque()
{
    return "clink";
}
