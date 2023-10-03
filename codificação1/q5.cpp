#include <iostream>

using namespace std;

class Elemento {
private:
    int dado;
    Elemento* ptr_proximo;

public:
    void setDado(int);
    int getDado();
    void setProximo(Elemento*);
    Elemento* getProximo();
};

inline void Elemento::setDado(int dado) {
    this->dado = dado;
}

inline int Elemento::getDado() {
    return dado;
}

inline void Elemento::setProximo(Elemento* ptr_elemento) {
    ptr_proximo = ptr_elemento;
}

inline Elemento* Elemento::getProximo() {
    return ptr_proximo;
}

class Pilha {
private:
    Elemento* ptr_primeiro;

public:
    Pilha() {
        ptr_primeiro = nullptr;
    }

    void inserir(Elemento* elemento) {
        elemento->setProximo(ptr_primeiro);
        ptr_primeiro = elemento;
    }

    Elemento* remover() {
        if (ptr_primeiro == nullptr) {
            return nullptr; 
        }
        Elemento* elemento_removido = ptr_primeiro;
        ptr_primeiro = ptr_primeiro->getProximo();
        elemento_removido->setProximo(nullptr); 
        return elemento_removido;
    }
};

int main() {

	Elemento elementoA, elementoB, elementoC;

	int dado;

	cin >> dado;

	elementoA.setDado(dado);

	cin >> dado;

	elementoB.setDado(dado);

	cin >> dado;

	elementoC.setDado(dado);

	Pilha pilha;

	pilha.inserir(&elementoA);

	pilha.inserir(&elementoB);

	pilha.inserir(&elementoC);

	cout << pilha.remover()->getDado();

	cout << pilha.remover()->getDado();

	cout << pilha.remover()->getDado();

	return 0;

}
