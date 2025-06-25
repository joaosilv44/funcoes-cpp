#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void adicionarContato(){
    string nome, telefone;
    
    cin.ignore();
    cout << "Digite o nome do contato: ";
    getline(cin, nome);
    cout << "Telefone: ";
    getline(cin,telefone);
    
    ofstream arquivo("agenda.txt", ios::app);
    if(arquivo.is_open()){
        arquivo <<"Nome: " << nome << " - Telefone: " << telefone << endl;
        cout <<"Nome: " << nome << " e telefone: " << telefone << " adicionado com sucesso." << endl;
        arquivo.close();
    }
}
    
void buscarContato(){
    string termo, linha;
    bool encontrado = false;
    
    cin.ignore();
    cout << "Digite o nome ou telefone do contato que deseja buscar:\n";
    getline(cin,termo);
    
    ifstream arquivo("agenda.txt");
    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            if(linha.find(termo) != string::npos){
                cout << "Contato encontrado\n" << linha << endl;
                encontrado = true;
                break;
            }
        }
        arquivo.close();
            if(!encontrado){
                cout << "Contato não encontrado." << endl;
        }
    }
}

int main()
{
    cout << "-------Agenda-------" << endl;
    ifstream arquivo("agenda.txt");

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!\nTalvez ela esteja vazia.\n";
    }

    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
    
    int action = 0;
    cout << "\nDigite:\n1 para cadastrar um contato\n2 para buscar um contato pelo nome\n3 para buscar contato pelo telefone.\n";
    cin >> action;
    
    if(action == 1){
        adicionarContato();
    }
    
    if(action == 2){
        buscarContato();
    }
    
    if(action == 3){
        buscarContato();
    }
    
    return 0;
}