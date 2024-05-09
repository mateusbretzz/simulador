#ifndef SIMBA
#define SIMBA
#include "../core-simulador-hpp/Personagem.hpp"
class Simba : public Personagem
{
    public:
        Simba(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif