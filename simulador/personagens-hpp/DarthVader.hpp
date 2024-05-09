#ifndef DARTHVADER
#define DARTHVADER
#include "../core-simulador-hpp/Personagem.hpp"
class DarthVader : public Personagem
{
    public:
        DarthVader(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif