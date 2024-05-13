#ifndef KATANA
#define KATANA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Katana : public ArmaAtaque
{
    public:
        Katana(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif