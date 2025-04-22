#include <iostream>
long long calcularPerimetro(long long l1, int l2){
    return 2*(l1+l2);
}
int main(){
    long long l1, l2;
    std::cin >>l1>>l2;
    long long perimetro = calcularPerimetro(l1, l2);
    std::cout << perimetro << std::endl;
    return 0;
}
