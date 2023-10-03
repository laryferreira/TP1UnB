#include <iostream>
using namespace std;

class Codigo {
private:
    int valor;

public:
    bool set(int novo_valor) {
        if (novo_valor % 2 == 0) {
            valor = novo_valor;
            return true;
        } else {
            return false;
        }
    }

    int get() {
        return valor;
    }
};

int main() {
    Codigo codigo;
    int valor;

    cin >> valor;

    if (valor % 2 == 0 && codigo.set(valor) && codigo.get() == valor) {
        cout << "SUCESSO";
    } else if (valor % 2 != 0 && !codigo.set(valor) && codigo.get() != valor) {
        cout << "SUCESSO";
    } else {
        cout << "FALHA";
    }

    return 0;
}
