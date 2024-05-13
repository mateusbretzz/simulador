#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Machado.hpp"

Machado::Machado(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Machado::gerarForcaAtaque()
{
    return maxForca - minForca + 5;
}

string Machado::gerarRuidoAtaque()
{
    return "toiiiinnnn";
}
