#ifndef FLECHA
#define FLECHA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Flecha : public ArmaAtaque
{
    public:
        Flecha(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif