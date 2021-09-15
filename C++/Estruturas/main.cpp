#include <iostream>

using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        float peso;

    public:
    void status(){
        cout << nome << endl
        << idade << endl
        << peso << endl;
    }
    void setNome(string n);
    void getNome();
};

void Pessoa::setNome(string n){
    nome = n;
}

void Pessoa::getNome(){
    cout << nome;
}

int main(){
    Pessoa p;
    p.setNome("Luccas");
    p.getNome();
    return 0;
}