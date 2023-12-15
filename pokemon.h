#include <string>
#include <fstream>

class Pokemon {
    public:
    std::string nome;
    int tipo;
    int stipo;
    float altura;
    float peso;
    int dex;
    int evolvl;
    int final;

    void Preencher(std::ifstream& arquivo, Pokemon* dex);
    void Exibir(Pokemon* dex);
};

class Time:public Pokemon{
    public:
    int stats[7];
    std::string hab;

    Time(){
        nome = "?";
        tipo = -1;
        stipo = -1;
        altura = -1;
        peso = -1;
        dex = -1;
        evolvl = -1;
        final = -1;
        hab = "?";
        for(int i = 0; i < 7; i++){
            stats[i] = -1;
        }
    }
    void Preencher(Time* time, Pokemon* dex);
    void InfoAdicionais(Time* time);
    void Exibir(Time* time, Pokemon* dex, std::ofstream& info);
};