#ifndef ELSA
#define ELSA
#include "../core-simulador-hpp/Personagem.hpp"
class Elsa : public Personagem
{
    public:
        Elsa(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif