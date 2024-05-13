#ifndef PROTETORSOLAR
#define PROTETORSOLAR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class ProtetorSolar : public ArmaDefesa
{
    public:
        ProtetorSolar(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif