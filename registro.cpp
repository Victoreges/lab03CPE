// feito por: Lucas Rodrigues
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void menu(){ // função pra ficar mostrando o menu
	cout << "************** Cadastro de aluno ENE **************" << endl;
	cout << "1 - Inclusão aluno\n";
	cout << "2 - Exclusão aluno\n";
	cout << "3 - Pesquisa aluno\n";
	cout << "4 - Alteração aluno\n";
	cout << "5 - Listagem alunos\n";
	cout << "6 - FIM\n";
}

struct disciplina{
	int cod;
	string nomedisc;
};
struct cadastro{ // struct principal "cadastro"
	string nome; // membro "nome"
	string mat; // membro "matrícula"
	string address; // membro FDP "address"
	int tel; // membro "telefone"
	disciplina subscribe; // membro "subscribe"
	
	void incluir(){ // função-membro para inclusão dos dados
		cout << "Nome: ";
		getline(cin, nome);
		cout << "Matrícula: ";
		cin >> mat;
		cin.ignore(); // limpa buffer
		cout << "Endereço: ";
		getline(cin, address);
		cout << "Telefone: ";
		cin >> tel;
		cout << "Código da disciplina: ";
		cin >> subscribe.cod;
		cin.ignore(); // limpa buffer
		cout << "Nome da disciplina: ";
		getline(cin, subscribe.nomedisc);
	}
	
};

int main(){
	// declaração de variáveis
	int choice;
	cadastro aluno; // variável "aluno" da struct "cadastro"
	
	setlocale(LC_ALL, "Portuguese");
	aluno.incluir();
	
	return 0;
}
