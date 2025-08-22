//Aula 2 - Variáveis e tipos básicos de dados

//Uma Variável é a representação de um número ou valor
//Para criar uma variável são necessários 2 passos: declaração e atribuição
//Para declarar uma variável em C++, precisamos declarar o tipo de dado que a mesma será
/*Existem vários tipos de dados, por exemplo:
    INT para números inteiros, como idade, anos, dias, etc
    DOUBLE para números quebrados, como preços, médias, temperaturas
    CHAR para 1 único caractere, como iniciais 
    BOOLEAN para verdadeiro ou falso, apenas
    STRINGS para uma sequência de texto, como um endereço. STRINGS são providenciadas pelo std então sua declaração é diferente
*/



#include <iostream>
int main(){

    
    int x = 5; //declaração
    int y = 6;
    int soma = x + y;
    int age = 18;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << soma << '\n';
    
    //Exemplos com double
    double gpa = 7.5;
    double price = 10.99;
    
    //Exemplos com char
    char initial = 'A';
    char currency = '$';

    //Exemplos com boolean
    bool isStudent = true;
    bool forSale = false;
    
    //Exemplos com strings
    std::string name = "Jorge";
    std::string day = "Segunda-Feira";
    std::string food = "pizza";
    std::string address = "Rua 902";
    

    //Para declarar uma váriavel com texto
    std::cout << "Olá " << name << '\n';
    std::cout << "Sua comida favorita é " << food << '\n';
    std::cout << "Você tem " << age << " anos";

    return 0;


}