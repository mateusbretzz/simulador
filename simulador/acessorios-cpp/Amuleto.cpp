#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Amuleto.hpp"

Amuleto::Amuleto(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Amuleto::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Amuleto::getResistencia() 
{
    return this->resistencia;
}