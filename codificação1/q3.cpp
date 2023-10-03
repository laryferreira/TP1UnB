#include <iostream>
#include <string>

using namespace std;

class Endereco {
public:
    // Método construtor público que recebe apenas a cidade
    Endereco(string cidade);

    // Método construtor público que recebe a cidade e o estado
    Endereco(string cidade, string estado);

    // Métodos públicos para obter a cidade e o estado
    string getCidade();
    string getEstado();

private:
    string cidade;
    string estado;
};

// Implementação do construtor que recebe apenas a cidade
Endereco::Endereco(string cidade) {
    this->cidade = cidade;
    this->estado = "";
}

// Implementação do construtor que recebe a cidade e o estado
Endereco::Endereco(string cidade, string estado) {
    this->cidade = cidade;
    this->estado = estado;
}

// Implementação do método para obter a cidade
string Endereco::getCidade() {
    return cidade;
}

// Implementação do método para obter o estado
string Endereco::getEstado() {
    return estado;
}
int main(){

    string cidade, estado;

    cin >> cidade;

    cin >> estado;    

    Endereco enderecoA(cidade);

    Endereco enderecoB(cidade, estado);   

    cout << enderecoA.getCidade();

    cout << enderecoB.getCidade();

    cout << enderecoB.getEstado();

    return 0;

}
