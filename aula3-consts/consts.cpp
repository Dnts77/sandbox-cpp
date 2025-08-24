//Aula 3 - Consts
//Uma const especifica que o valor de uma variável é constante
//Avisa o compilador para previnir qualquer coisa de a modificar

#include <iostream>

int main(){
    const double PI = 3.14; //Agr a variável pi não pode ser modificada 
    //PI = 420; Caso essa linha fosse rodada, um erro seria mostrado dizendo que a variável PI foi declarada como "apenas-leitura", ou seja, não pode ser mudada.
    double radius = 10;
    double circumference = 2*PI*radius;
    
    std::cout << circumference << "cm" << '\n';
    
    
    //Exemplo com a velocidade da luz
    const int LIGHT_SPEED = 299792458;
    
    std::cout << "A velocidade da luz é " << LIGHT_SPEED << " metros por segundo";
    return 0;
}