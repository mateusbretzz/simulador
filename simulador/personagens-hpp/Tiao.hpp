#ifndef TIAO
#define TIAO
#include "../core-simulador-hpp/Personagem.hpp"
class Tiao : public Personagem
{
    public:
        Tiao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif