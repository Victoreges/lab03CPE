// feito por: Lucas Rodrigues
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void menu(){ // função para exibição do menu
	cout << "************** Cadastro de aluno ENE **************" << endl;
	cout << "1 - Inclusão aluno\n";
	cout << "2 - Exclusão aluno\n";
	cout << "3 - Pesquisa aluno\n";
	cout << "4 - Alteração aluno\n";
	cout << "5 - Listagem alunos\n";
	cout << "6 - FIM\n";
}

struct disciplina{ // struct aninhada à struct principal
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
	void excluir(){ // função-membro para exclução dos dados
		/* 
			A busca será feita por nome ou matrícula.
			Após a exclusão deve ser mostrada a mensagem: "Aluno excluído"
			Caso não exista o aluno procurado deve ser mostrada a mensagem: "Aluno
			não cadastrado"
		*/
		
	}
	void pesquisar();{ // função-membro para pesquisa de dados de algum aluno
		/*
			A pesquisa pode ser por nome ou matrícula e deve retornar todos os
			dados do aluno encontrado.
			Caso não exista o aluno procurado deve ser mostrada a mensagem: "Aluno
		    não cadastrado"	
		*/
	
	}
	void alterar(){ // função-membro para alteração de dados de algum aluno
		/*
			Primeiro deve ser procurado o aluno a ser alterado.
			A pesquisa deve ser por nome ou por matrícula.
			Deve-se exibir todos os dados do aluno e permitir alteração de
			qualquer um destes.
		*/
	}
	void listar(){ // função-membro para listagem de dados por ORDEM ALFABÉTICA
		/*
			Devem ser listados todos os dados digitados em ordem alfabética
			por nome do aluno.
		*/
		
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
