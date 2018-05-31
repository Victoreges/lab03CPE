// feito por: Lucas Rodrigues
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void menu(){ // fun��o pra ficar mostrando o menu
	cout << "************** Cadastro de aluno ENE **************" << endl;
	cout << "1 - Inclus�o aluno\n";
	cout << "2 - Exclus�o aluno\n";
	cout << "3 - Pesquisa aluno\n";
	cout << "4 - Altera��o aluno\n";
	cout << "5 - Listagem alunos\n";
	cout << "6 - FIM\n";
}

struct disciplina{
	int cod;
	string nomedisc;
};
struct cadastro{ // struct principal "cadastro"
	string nome; // membro "nome"
	string mat; // membro "matr�cula"
	string address; // membro FDP "address"
	int tel; // membro "telefone"
	disciplina subscribe; // membro "subscribe"
};

int main(){
	// declara��o de vari�veis
	int choice;
	cadastro aluno; // vari�vel "aluno" da struct "cadastro"
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Nome: ";
	getline(cin, aluno.nome);
	cout << "Matr�cula: ";
	cin >> aluno.mat;
	cout << "Endere�o: ";
	getline(cin, aluno.address);
	cout << "Telefone: ";
	cin >> aluno.tel;
	cout << "C�digo da disciplina: ";
	cin >> aluno.subscribe.cod;
	cout << "Nome da disciplina: ";
	getline(cin, aluno.subscribe.nomedisc);
	
	return 0;
}
