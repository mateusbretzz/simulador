#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Livro.hpp"

Livro::Livro(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Livro::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Livro::getResistencia() 
{
    return this->resistencia;
}