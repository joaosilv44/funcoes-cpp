#include <iostream>
#include <fstream>
using namespace std;

void adicionarTask() {
    string descricao, status;
    
    cin.ignore();
    cout << "Tarefa: ";
    getline(cin,descricao);
    cout << "Status(Concluída ou Pendente): ";
    getline(cin,status);
    
    ofstream arquivo("tasks.txt", ios::app);
    if(arquivo.is_open()) {
        arquivo << "Descrição : " << descricao << " - " << status << endl;
        arquivo.close();
    }
}

void listarTasks() {
    ifstream arquivo("tasks.txt");
   
   if(!arquivo.is_open()){
       cout << "Erro ao abrir o arquivo.";
   }
   
   string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
}
void marcarTask () {
    string busca, linha;
    bool encontrado = false;
    
    cin.ignore();
    cout << "Digite a tarefa que deseja concluir:\n";
    getline(cin, busca);
    
    ifstream arquivo("tasks.txt");
    ofstream arquivoTemp("temp.txt");
    
    if(arquivo.is_open() && arquivoTemp.is_open()) {
        while(getline(arquivo, linha)){
            if(!encontrado && linha.find(busca) != string::npos){
                size_t pos = linha.find('-');
                if(pos != string::npos) {
                string descricao = linha.substr(0,pos);
                linha = descricao + " - concluída";
                encontrado = true;
                cout << "Tarefa encontrada e marcada como concluída\n" << linha << endl;
                }
            }
            arquivoTemp << linha << endl;
        }
        arquivo.close();
        arquivoTemp.close();
        
        remove("tasks.txt");
        rename("temp.txt", "tasks.txt");
        
        if(!encontrado){
            cout << "Tarefa não encontrada.\n";
        }
    }else {
        cout << "Erro ao abrir o arquivo.\n";
    }
}
void removeTask() {
    string busca, linha;
    bool encontrado = false;
    
    cin.ignore();
    cout << "Digite a tarefa que deseja excluir:\n";
    getline(cin, busca);
    
    ifstream arquivo("tasks.txt");
    ofstream arquivoTemp("temp.txt");
    
    if(arquivo.is_open() && arquivoTemp.is_open()) {
        while(getline(arquivo, linha)){
            if(!encontrado && linha.find(busca) != string::npos){
                encontrado = true;
                cout << "Tarefa encontrada e excluída\n" << linha << endl;
                continue;
            }
            arquivoTemp << linha << endl;
        }
        arquivo.close();
        arquivoTemp.close();
        
        remove("tasks.txt");
        rename("temp.txt", "tasks.txt");
        
        if(!encontrado){
            cout << "Tarefa não encontrada.\n";
        }
    }else {
        cout << "Erro ao abrir o arquivo.\n";
    }
}
void buscarTask() {
    string busca, linha;
    bool encontrado = false;
    
    cin.ignore();
    cout << "Digite a tarefa que deseja buscar:\n";
    getline(cin, busca);
    
    ifstream arquivo("tasks.txt");
    if(arquivo.is_open()) {
        while(getline(arquivo, linha)){
            if(linha.find(busca) != string::npos){
                cout << "Tarefa encontrada\n" << linha << endl;
                encontrado = true;
                break;
            }
        }
        arquivo.close();
        if(!encontrado){
            cout << "tarefa não encontrada." << endl;
        }
    }
}


int main()
{
    int action = 0;
    
   cout << "Em que posso ajudar?\n";
   cout << "1 -- Adicionar tarefas\n2 -- Listar tarefas\n3 -- Marcar Tarefa como concluída\n4 -- Excluir tarefa\n5 -- Buscar tarefa\n";
   cin >> action;
   
   if(action == 1) {
   adicionarTask();
   }
   
   if(action == 2){
       listarTasks();
   }
   
   if(action == 3){
       marcarTask();
   }
   
   if(action == 4){
       removeTask();
   }
   
   if(action == 5){
       buscarTask();
   }

    return 0;
}