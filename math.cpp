#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
//programa que faz operações matemáticas básicas
//soma, subtração, multiplicação, divisão, raiz quadrada e potência
//autor: João Vitor Lucas da Silva
int soma(int x, int y){
    return x+y;
}
int subtracao(int x, int y){
    return x-y;
}
float multiplicacao(float x, float y){
    return x*y;
}
float divisao(float x, float y){
    return x/y;
}
float raizQuadrada(float x){
    float raiz = sqrt(x);
    return raiz;
}
float potencia(float x, float y){
     float pot = pow(x,y);
    return pot;
}

int main()
{
    int option;
    
    cout << "Escolha a opção que deseja:\n1 -- Soma\n2 -- Subtração\n3 -- Multiplicação\n4 -- Divisão\n5 -- Raíz quadrada\n6 -- Potência\n";
    cin >> option;
    //soma
    if(option == 1){
        int x, y;
        
        cout << "Digite dois números:\nN1=> ";
        cin >> x;
        cout << "N2=> ";
        cin >> y;
        
        int z = soma(x,y);
        cout << "A soma desses números é: " << z << "." << endl;
    }
    //subtração
    if(option == 2){
        int x, y;
        
        cout << "Digite dois números:\nN1=> ";
        cin >> x;
        cout << "N2=> ";
        cin >> y;
        
        int sub = subtracao(x,y);
        cout << "A subtração de " << x << "-" << y << " é: " << sub << "." << endl;
    }
    //multiplicação
    if(option == 3){
        float x, y;
        
        cout << "Digite dois números:\nN1=> ";
        cin >> x;
        cout << "N2=> ";
        cin >> y;
        
        float mult = multiplicacao(x,y);
        cout << "A multiplicacao de " << x << "x" << y << " é: " << mult << "." << endl;
    }
    //divisão
    if(option == 4){
        float x,y;
        
        cout << "Digite dois número:\nN1=> ";
        cin >> x;
        cout << "N2=> ";
        cin >> y;
        
        float div = divisao(x,y);
        cout << div << endl;
    }
    //raíz quadrada
    if(option == 5){
        float x;
        cout << "Digite o número para saber a sua RAÍZ:\n";
        cin >> x;
        
        float raiz = raizQuadrada(x);
        cout << "A raiz quadrada de " << x << " é " << raiz << "." << endl;
    }
    //potência
    if(option == 6){
        float x, y;
        cout << "Digite a base da potência: ";
        cin >> x;
        cout << "Digite o expoente: ";
        cin >> y;
        
        float pot = potencia(x,y);
        cout << pot << endl;
    }
    
    cout << "\nEscolha a opção que deseja:\n1 -- Soma\n2 -- Subtração\n3 -- Multiplicação\n4 -- Divisão\n5 -- Raíz quadrada\n6 -- Potência\n";
    cin >> option;


    return 0;
}