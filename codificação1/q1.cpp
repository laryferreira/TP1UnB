#include <iostream>
using namespace std;

class Codigo {
private:
    int valor;

public:
    void set(int novo_valor) {
        valor = novo_valor;
    }

    int get() {
        return valor;
    }
};

int main() {
    Codigo codigo;
    int valor;

    cin >> valor;
    codigo.set(valor);

    cout << codigo.get();

    return 0;
}
