// Aula introdutória a C++

/*
C++ é uma linguagem rápida, sendo usada em aplicativos de gráficos avançados, como softwares de edição, etc
É considerada uma linguagem de nível intermediário, mesmo que seja comumente usada em sistemas embarcados e desenvolvimento de jogos.
*/

//Hora do primeiro programa!

#include <iostream> //iostream é um arquivo que contém funções básicas de entrada e saída de dados.
                    //Agora precisamos de uma função principal, que é onde o programa começa.

int main(){   //return 0 é usado no final da função para indicar que nenhum erro ocorreu durante o programa, se o retorno for 1, quer dizer que algum problema aconteceu.
    std::cout << "Eu gosto de pizza" << std::endl; //No final de cada linha usamos ";" para que o compilador saiba que esta linha de ccódigo acabou.
    std::cout << "É muito bom!" << '\n'; //"<< std::endl" faz com que ocorra uma quebra de linha e o texto seguinte não fique na mesma linha que o anterior.
    return 0;                           //Também podemos substituir isso por '\n'
}