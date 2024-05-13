#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/ProtetorSolar.hpp"

ProtetorSolar::ProtetorSolar(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string ProtetorSolar::getDescricaoArma() 
{
    return this->descricaoArma;
}

int ProtetorSolar::getResistencia() 
{
    return this->resistencia;
}