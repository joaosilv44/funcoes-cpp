#include<iostream>
#include <cmath>
using namespace std;

//Quadrado de um número
int quadrado(int num){
    return num*num;
}

//Verificação de números primos
bool ehPrimo(int num){
    if(num <=1){
        return false;
    }

    int limite = sqrt(num);
    for(int i = 2; i <= limite; i++){
        if(num % i ==  0){
            return false;
        }
    }
    return true;
}

//Soma dos elementos de um vetor
int somaVetor(int vet[], int num){
    int soma = 0;
    for(int i = 0; i < num; i++){
        soma += vet[i];
    }
    return soma;
}

//Fatorial de um número
int fatorial(int num){
    int fatorial = 1;
    for(int i = num; i > 1; i--){
        fatorial *= i;
    }
    return fatorial;
}

int main(){
int questao;

cout << "Escolha uma questão de 1-4 :\n";
cin >> questao;

//Questão 1
if(questao == 1){
    int num;

    cout << "Digite um número para calcular o quadrado dele:\n";
    cin >> num;

    int resultado = quadrado(num);

    cout << "O quadrado de " << num << " é: " << resultado << endl;

}

//Questão 2
if(questao == 2){
    int num;

    cout << "Digite um número para verificar se ele é primo:\n";
    cin >> num;

    if(ehPrimo(num)){
        cout << "O número " << num << " é primo.";
    }else{
        cout << "O número " << num << " não é primo.";
    }
}

//Questão 3
if(questao == 3){
    int vet[100], num;
    
    cout << "Qual o tamanho do vetor?\n";
    cin >> num;
    
    for(int i = 0; i < num; i++){
        cout << i + 1 << "° :";
        cin >> vet[i];
    }
    int soma = somaVetor(vet, num);
    
    cout << "A soma dos elementos do vetor é " << soma << "." << endl;
}

//Questão 4
if(questao = 4){
    int num;
    
    cout << "Digite um número e saiba o seu fatorial: \n";
    cin >> num;
    
    int resultado = fatorial(num);
    
    cout << resultado << endl;
}
 return 0;
}