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
#include "../acessorios-hpp/Flecha.hpp"
#include "../acessorios-hpp/Garfo.hpp"
#include "../acessorios-hpp/Katana.hpp"
#include "../acessorios-hpp/Machado.hpp"
#include "../acessorios-hpp/Martelo.hpp"


using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",10,50);
    ArmaAtaque* arma3 = new Flecha("Flecha",5,50);
    ArmaAtaque* arma4 = new Katana("Katana",0,60);
    ArmaAtaque* arma5 = new Garfo("Garfo",10,80);
    ArmaAtaque* arma6 = new Machado("Machado",0,20);
    ArmaAtaque* arma7 = new Martelo("Martelo",5,25);
    
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    
    Personagem* p1 = new Chaves(1, "Chaves", 100, arma, escudo);
    Personagem* p2 = new DarthVader(2, "Darth Vader", 100, arma2, escudo);
    Personagem* p3 = new Groot(2, "Groot", 100, arma4, escudo);
    Personagem* p4 = new Simba(2, "Simba", 100, arma6, escudo);
    Personagem* p5 = new Elsa(2, "Elsa", 100, arma3, escudo);
    Personagem* p6 = new Tiao(2, "Tiao", 100, arma7, escudo);



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