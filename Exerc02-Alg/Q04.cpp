#include <iostream>

int main() {
    int m, p;
    std::cin >> m >> p; 

    int quantidade = m / p + 1;
    if (m % p != 0) {
        quantidade = m / p + 1;
    } else {
        quantidade = m / p + 1;
    }

    int ultima_distancia;
    if (m % p == 0) {
        ultima_distancia = p;
    } else {
        ultima_distancia = m % p;
    }

    std::cout << quantidade << " " << ultima_distancia << std::endl;

    return 0;
}