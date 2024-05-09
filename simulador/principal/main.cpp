#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../core-simulador-hpp/Simulador.hpp"
#include "../personagens-hpp/DarthVader.hpp"
#include "../personagens-hpp/Groot.hpp"
#include "../personagens-hpp/Tiao.hpp"
#include "../personagens-hpp/Elsa.hpp"
#include "../personagens-hpp/Simba.hpp"


using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    
    Personagem* p1 = new Chaves(1, "Chaves", 100, arma, escudo);
    Personagem* p2 = new DarthVader(2, "Darth Vader", 100, arma, escudo);
    Personagem* p3 = new Groot(2, "Groot", 100, arma, escudo);
    Personagem* p4 = new Simba(2, "Simba", 100, arma, escudo);
    Personagem* p5 = new Elsa(2, "Elsa", 100, arma, escudo);
    Personagem* p6 = new Tiao(2, "Tiao", 100, arma, escudo);



    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}