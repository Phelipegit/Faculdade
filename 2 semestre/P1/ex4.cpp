#include<string.h>
#include<iostream>

using namespace std;

class Pessoa {
    public:
        char nome[50];
        int idade;

        Pessoa(char nome[50],int idade) {
            strcpy(this->nome,nome);
            this->idade = idade;
        }

        void exibir() {
            cout << "Nome: " << this->nome << endl;
            cout << "Idade: " << this->idade << endl;
        }
};

class Funcionario : Pessoa {
    public:
        int matricula;
        float salario;

        Funcionario(char nome[50],int idade,int matricula,float salario) : Pessoa(nome,idade) {
            this->matricula = matricula;
            this->salario = salario;
        }

        void exibir() {
            Pessoa::exibir();
            cout << "Matricula: " << this->matricula << endl;
            cout << "Salario : " << this->salario << endl;
        }
};

enum class Disciplina { AAAAAA,AAAA,AA};

class Professor : Funcionario{
    public:
        Disciplina disciplina;
        int cargaHoraria;

        Professor(Disciplina disciplina, int cargaHoraria,char nome[50],int idade,int matricula,float salario) : Funcionario(nome,idade,matricula,salario) {
            this->disciplina = disciplina;
            this->cargaHoraria = cargaHoraria;
        }

        void exibirProfessor() {
            cout << "Disciplina: " << this->disciplina << endl;
            cout << "Carga Horaria: " << this->cargaHoraria << endl ;
        }
};

enum Curso {
    Curso1,
    Curso2,
    Curso3
};

class Coordenador : Funcionario {
    public:
        Curso curso;
        int qtdProfessores;

        Coordenador(Curso curso,int qtdProfessores,char nome[50],int idade,int matricula,float salario) : Funcionario(nome,idade,matricula,salario) {
            this->curso = curso;
            this->qtdProfessores = qtdProfessores;
        }

        void exibir() {
            cout << "Curso: " << curso << endl;
            cout << "Quantidade de professores: " << qtdProfessores; 
        }

        void exibirPessoa() {
            Funcionario::exibir();
        }
};

class ProfessorCoordenador : Professor,Coordenador {

    public:
        ProfessorCoordenador(Disciplina disciplina, int cargaHoraria,char nome[50],int idade,int matricula,float salario,Curso curso, int qtdProfessores) : Professor(disciplina,cargaHoraria,nome,idade,matricula,salario),Coordenador(curso,qtdProfessores,nome,idade,matricula,salario) {

        }

        void exibir() {
            cout << "=== DADOS DO PROFESSOR COORDENADOR ===" << endl;
            Coordenador::exibirPessoa();
            Professor::exibirProfessor();
            Coordenador::exibir();
        }
};

int main() {
    ProfessorCoordenador p(Disciplina::AAAA,40,"Phelipe",19,3944,5000,Curso::Curso2,12);

    p.exibir();
}