#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Katana.hpp"

Katana::Katana(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Katana::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Katana::gerarRuidoAtaque()
{
    return "cush cush";
}
