#include <iostream>
using namespace std;

class Estudante {
private:
    string nome;
    static int contador; // Atributo estático para contar instâncias

public:
    Estudante(string nome) {
        this->nome = nome;
        contador++; // Incrementa o contador quando um novo objeto é criado
    }

    string getNome() {
        return nome;
    }

    static int getContador() {
        return contador;
    }
};

int Estudante::contador = 0; // Inicialização do contador estático

int main() {
    string nomeA, nomeB;

    cin >> nomeA;
    cin >> nomeB;

    cout << Estudante::getContador(); // Deve ser 0 inicialmente

    Estudante estudanteA(nomeA);

    cout << Estudante::getContador(); // Deve ser 1 após a criação de estudanteA
    cout << estudanteA.getNome();  

    Estudante estudanteB(nomeB);

    cout << Estudante::getContador(); // Deve ser 2 após a criação de estudanteB
    cout << estudanteB.getNome();  

    return 0;
}
