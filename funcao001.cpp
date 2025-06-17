#include <iostream>
using namespace std;

int soma(int x, int y){
    return x+y;
}

bool ehPar(int x){
    return x % 2 == 0; 
}

void tabuada(int n){
    cout<< "Tabuada do número " << n << ":\n";
    for(int i =1; i <=10; i++){
        cout<< n << "x" << i << " = " << n*i << endl;
    }
}

int main()
{
    int licao;
    
    cout<< "Qual questão você quer executar?( 1-Soma, 2-ehPar, 3-Tabuada)\n";
    cin>> licao;
    
    //soma de 2 números
    if(licao == 1){
    int x, y;
    
    cout<<"Digite 2 números para serem somados:\n";
    cout<< "Primeiro número:\n";
    cin>> x;
    cout<< "Segundo número:\n";
    cin>> y;
    
    int z = soma(x,y);
    cout<< "A soma desses dois números é: " << z << endl;
    }
    
    //verifiicação de números pares
    if(licao == 2){
        int x;
        
        cout<< "Digite um número inteiro;\n";
        cin>> x;
        
        if(ehPar(x)){
            cout<< "O número " << x << " é par" << endl;
        }else{
            cout<< "O número " << x << " é ímpar" << endl;
        }
    }
    
    if(licao == 3){
        int num;
        
        cout<< "Digite um número para obter a sua tabuada\n";
        cin>> num;
        
        tabuada(num);
    }

    return 0;
}