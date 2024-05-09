#ifndef GROOT
#define GROOT
#include "../core-simulador-hpp/Personagem.hpp"
class Groot : public Personagem
{
    public:
        Groot(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif