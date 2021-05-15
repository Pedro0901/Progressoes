/* PROGRESS�O ARITM�TICA E PROGRESS�O GEOM�TRICA */

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <locale.h>

using namespace std;

//Fun��o principal do programa
int main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//Definindo variaveis da PA
	int A1, n, r;										//Variaveis para calculo da PA
	int paTermoGeral, paSoma;							//Variaveis para resultados do Termo Geral e da Soma da PA
	
	//Definindo variaveis da PG
	int pgA1, pgN, pgR;									//Variaveis para calculo do PG
	int pgTermoGeral, pgSoma;							//Variaveis para resultados do Termo Geral e da Soma do PG
	
	//Definindo variaveis auxiliares
	int opcao;											//Variavel para o switch case
	
	//D� uma mensagem de boas vindas
	cout << "========== SEJA BEM-VINDO (A) =====================";
	
	//Lista de op��es
	cout << "\n\n---------- LISTA DE OP��ES ------------------------\n";
	cout << "\n1 - C�lculo do Termo Geral e Soma dos Termos de uma P.A";
	cout << "\n2 - C�lculo do Termo Geral e Soma dos Termos de uma P.G";
	
	//Op��es individuais
	cout << "\n\n---------- LISTA DE OP��ES - INDIVIDUAIS ----------\n";
	cout << "\n3 - C�lculo do Termo Geral de uma P.A";
	cout << "\n4 - C�lculo da Soma dos Termos de uma P.A";
	cout << "\n5 - C�lculo do Termo Geral de uma P.G";
	cout << "\n6 - C�lculo da Soma dos Termos de uma P.G\n";
	
	//Op��o para sair do programa
	cout << "\n---------- SAIR DO PROGRAMA -----------------------\n";
	cout << "\n0 - SAIR do Programa\n";
	
	//Usu�rio escolhe uma op��o
	cout << "\nESCOLHA UMA DAS OP��ES: ";
	cin >> opcao;
	
	//Limpa a tela ap�s a escolha
	system("CLS");
	
	//Menu para escolha
	switch(opcao){
		//SAIR do Programa
		case 0:
			return 0;
			break;
		
		//C�lculo do Termo Geral e Soma dos Termos de uma P.A
		case 1:
			//Mostra a op��o escolhida
			cout << "\nOp��o 1 Escolhida!\n";
			
			//Informa e l� dados do usu�rio
			cout << "\nPor favor, informe os seguintes valores";
			cout << "\n\nDigite o primeiro termo (A1) de sua P.A: ";
			cin >> A1;
			cout << "Digite o n�mero de termos (n) de sua P.A: ";
			cin >> n;
			//Dica para usu�rios
			cout << "\nDICA: A raz�o de sua PG � igual a diferen�a de um termo pro outro!";
			cout << "\nDigite a raz�o (r) de sua P.A: ";
			cin >> r;
			
			//Cabe�alho - C�lculos
			cout << "\n========== C�LCULOS ==========\n";
			
			//PARTE DO C�LCULO DO TERMO GERAL DE UMA P.A
			//Mostrando o nome do c�lculo a ser feito
			cout << "\nC�lculo do Termo Geral de uma P.A\n";
			
			//Mostra a f�rmula ao usuario
			cout << "\nF�RMULA: An = A1 + (n - 1) * r\n";
			
			//Mostra a f�rmula com os valores ja preenchidos
			cout << "\nA" << n << " = " << A1 << " + (" << n << " - 1) * " << r;
			
			//Faz o calculo
			paTermoGeral = A1 + (n - 1) * r;
			
			//Exibe o resultado
			cout << "\nA" << n << " = " << paTermoGeral;
			
			//Separa��o de um c�lculo pro outro
			cout << "\n\n----------------------------------";
			
			//PARTE DO C�LCULO DA SOMA DOS TERMOS DE UMA P.A
			//Mostrando o nome do c�lculo a ser feito
			cout << "\n\nC�lculo da Soma dos Termos de uma P.A\n";
			
			//Mostra a f�rmula ao usu�rio
			cout << "\nF�RMULA: Sn = (A1 + An) * n / 2\n";
			
			//Mostra a f�rmula com os valores ja preenchidos
			cout << "\nS" << n << " = (" << A1 << " + " << paTermoGeral << ") * " << n << " / 2";
			
			//Faz o c�lculo
			paSoma = (A1 + paTermoGeral) * n / 2;
			
			//Exibe o resultado
			cout << "\nS" << n << " = " << paSoma;
			
			//Faz a quebra do caso 
			break;
		
		//Termo Geral e Soma dos Termos de uma PG (Progress�o Geom�trica)
		case 2:
			//Mostra a op��o escolhida
			cout << "\nOp��o 2 Escolhida!\n";
			
			//Informa e l� os dados do usu�rio
			cout << "\nPor favor, informe os seguintes dados\n";
			cout << "\nDigite o primeiro termo (A1) de sua PG: ";
			cin >> pgA1;
			//Dica para usu�rios
			cout << "\nDICA: A raz�o de sua PG � igual a diferen�a de um termo pro outro!";
			cout << "\nDigite a raz�o (r) de sua PG: ";
			cin >> pgR;
			cout << "\nDigite o termo (n) que queremos descobrir: ";
			cin >> pgN;
			
			//Cabe�alho - C�lculos
			cout << "\n========== C�LCULOS ==========\n";
			
			//PARTE DO CALCULO DO TERMO GERAL DE UMA P.G
			//Mostrando o nome do c�lculo a ser feito
			cout << "\n\nC�lculo do Termo Geral de uma P.G\n";
			
			//Mostra a formula ao usu�rio
			cout << "\nF�RMULA: An = A1 * r^(n - 1)";
			//Texto de observa��o
			cout << "\nOBSERVA��O: onde est� ^ l�-se elevado.\n";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nA" << pgN << " = " << pgA1 << " * " << pgR << "^(" << pgN << " - 1)";
			
			//Mostra a formula com os valores ja preenchidos e com a potencia resolvida
			cout << "\nA" << pgN << " = " << pgA1 << " * " << pow(pgR, (pgN - 1));
			
			//Faz o calculo 
			pgTermoGeral = pgA1 * pow(pgR, (pgN - 1));
			
			//Exibe o resultado
			cout << "\nA" << pgN << " = " << pgTermoGeral;
			
			//Separa��o de um c�lculo pro outro
			cout << "\n\n----------------------------------";
			
			//PARTE DO C�LCULO DA SOMA DOS TERMOS DE UMA PG
			//Mostrando o nome do c�lculo a ser feito
			cout << "\n\nC�lculo da Soma dos Termos de uma P.G\n";
			
			//Mostra a f�rmula ao usuario
			cout << "\nF�RMULA: Sn = A1 * (r^n-1) / r - 1";
			//Texto de observa��o
			cout << "\nOBSERVA��O: onde est� ^ l�-se elevado.\n";
			
			if(pgR > 1){
				//Mostra a formula com os valores ja preenchidos
				cout << "\nS" << pgN << " = " << pgA1 << " * (" << pgR << "^" << pgN << "-1) / " << pgR << " - 1";
				
				//Mostra a formula com os valores ja preenchidos e com a potencia resolvida
				cout << "\nS" << pgN << " = " << pgA1 << " * " << pow(pgR, pgN - 1) << " / " << pgR << " - 1";
				
				//
				pgSoma = (pgA1 * pow(pgR, pgN - 1)) / (pgR - 1);
				
				//Exibe o resultado
				cout << "\nS"  << pgN << " = " << pgSoma;
			}else{
				cout << "\nERRO: Valor da raz�o inv�lido. Dica: Tente um valor diferente de 1!";
			}
			
			//Faz a quebra do caso
			break;
		
		//C�lculo do Termo Geral de uma P.A
		case 3:
			//Mostra a op��o escolhida
			cout << "\nOp��o 3 Escolhida!\n";
			
			//Informa e l� dados do usu�rio
			cout << "\nPor favor, informe os seguintes valores";
			cout << "\n\nDigite o primeiro termo (A1) de sua P.A: ";
			cin >> A1;
			cout << "Digite o n�mero de termos (n) de sua P.A: ";
			cin >> n;
			//Dica para usu�rios
			cout << "\nDICA: A raz�o de sua PG � igual a diferen�a de um termo pro outro!";
			cout << "Digite a raz�o (r) de sua P.A: ";
			cin >> r;
			
			//Cabe�alho - C�lculos
			cout << "\n========== C�LCULOS ==========\n";
			
			//PARTE DO C�LCULO DO TERMO GERAL DE UMA P.A
			//Mostrando o nome do c�lculo a ser feito
			cout << "\nC�lculo do Termo Geral de uma P.A\n";
			
			//Mostra a f�rmula ao usuario
			cout << "\nF�RMULA: An = A1 + (n - 1) * r\n";
			
			//Mostra a f�rmula com os valores ja preenchidos
			cout << "\nA" << n << " = " << A1 << " + (" << n << " - 1) * " << r;
			
			//Faz o calculo
			paTermoGeral = A1 + (n - 1) * r;
			
			//Exibe o resultado
			cout << "\nA" << n << " = " << paTermoGeral;
			
			//faz a quebra do switch
			break;
		
		//C�lculo da Soma dos Termos de uma P.A
		case 4:
			//Mostra a op��o escolhida
			cout << "\nOp��o 4 Escolhida!\n";
			
			//Informa e l� dados do usu�rio
			cout << "\nPor favor, informe os seguintes valores";
			cout << "\n\nDigite o primeiro termo (A1) de sua P.A: ";
			cin >> A1;
			cout << "Digite o n�mero de termos (n) de sua P.A: ";
			cin >> n;
			//Dica para usu�rios
			cout << "\nDICA: A raz�o de sua PG � igual a diferen�a de um termo pro outro!";
			cout << "\nDigite a raz�o (r) de sua P.A: ";
			cin >> r;
			cout << "\nDigite o Termo Geral de sua P.A: ";
			cin >> paTermoGeral;
			
			//Cabe�alho - C�lculos
			cout << "\n========== C�LCULOS ==========\n";
			
			//PARTE DO C�LCULO DA SOMA DOS TERMOS DE UMA P.A
			//Mostrando o nome do c�lculo a ser feito
			cout << "\n\nC�lculo da Soma dos Termos de uma P.A\n";
			
			//Mostra a f�rmula ao usu�rio
			cout << "\nF�RMULA: Sn = (A1 + An) * n / 2\n";
			
			//Mostra a f�rmula com os valores ja preenchidos
			cout << "\nS" << n << " = (" << A1 << " + " << paTermoGeral << ") * " << n << " / 2";
			
			//Faz o c�lculo
			paSoma = (A1 + paTermoGeral) * n / 2;
			
			//Exibe o resultado
			cout << "\nS" << n << " = " << paSoma;
			
			//Faz a quebra do caso 
			break;	
		
		//C�lculo do Termo Geral de uma P.G
		case 5:
			//Mostra a op��o escolhida
			cout << "\nOp��o 5 Escolhida!\n";
			
			//Informa e l� os dados do usu�rio
			cout << "\nPor favor, informe os seguintes dados\n";
			cout << "\nDigite o primeiro termo (A1) de sua PG: ";
			cin >> pgA1;
			//Dica para usu�rios
			cout << "\nDICA: A raz�o de sua PG � igual a diferen�a de um termo pro outro!";
			cout << "\nDigite a raz�o (r) de sua PG: ";
			cin >> pgR;
			cout << "\nDigite o termo (n) que queremos descobrir: ";
			cin >> pgN;
			
			//Cabe�alho - C�lculos
			cout << "\n========== C�LCULOS ==========\n";
			
			//PARTE DO CALCULO DO TERMO GERAL DE UMA P.G
			//Mostrando o nome do c�lculo a ser feito
			cout << "\n\nC�lculo do Termo Geral de uma P.G\n";
			
			//Mostra a formula ao usu�rio
			cout << "\nF�RMULA: An = A1 * r^(n - 1)";
			//Texto de observa��o
			cout << "\nOBSERVA��O: onde est� ^ l�-se elevado.\n";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nA" << pgN << " = " << pgA1 << " * " << pgR << "^(" << pgN << " - 1)";
			
			//Mostra a formula com os valores ja preenchidos e com a potencia resolvida
			cout << "\nA" << pgN << " = " << pgA1 << " * " << pow(pgR, (pgN - 1));
			
			//Faz o calculo 
			pgTermoGeral = pgA1 * pow(pgR, (pgN - 1));
			
			//Exibe o resultado
			cout << "\nA" << pgN << " = " << pgTermoGeral;
			
			//Faz a quebra do switch
			break;
		
		//C�lculo da Soma dos Termos de uma P.G
		case 6:
			//Mostra a op��o escolhida
			cout << "\nOp��o 6 Escolhida!\n";
			
			//Informa e l� os dados do usu�rio
			cout << "\nPor favor, informe os seguintes dados\n";
			cout << "\nDigite o primeiro termo (A1) de sua PG: ";
			cin >> pgA1;
			//Dica para usu�rios
			cout << "\nDICA: A raz�o de sua PG � igual a diferen�a de um termo pro outro!";
			cout << "\nDigite a raz�o (r) de sua PG: ";
			cin >> pgR;
			cout << "\nDigite o termo (n) que queremos descobrir: ";
			cin >> pgN;
			
			
			//PARTE DO C�LCULO DA SOMA DOS TERMOS DE UMA PG
			//Cabe�alho - C�lculos
			cout << "\n========== C�LCULOS ==========\n";
			//Mostrando o nome do c�lculo a ser feito
			cout << "\nC�lculo da Soma dos Termos de uma P.G\n";
			
			//Mostra a f�rmula ao usuario
			cout << "\nF�RMULA: Sn = A1 * (r^n-1) / r - 1";
			//Texto de observa��o
			cout << "\nOBSERVA��O: onde est� ^ l�-se elevado.\n";
			
			if(pgR > 1){
				//Mostra a formula com os valores ja preenchidos
				cout << "\nS" << pgN << " = " << pgA1 << " * (" << pgR << "^" << pgN << "-1) / " << pgR << " - 1";
				
				//Mostra a formula com os valores ja preenchidos e com a potencia resolvida
				cout << "\nS" << pgN << " = " << pgA1 << " * " << pow(pgR, pgN - 1) << " / " << pgR << " - 1";
				
				//
				pgSoma = (pgA1 * pow(pgR, pgN - 1)) / (pgR - 1);
				
				//Exibe o resultado
				cout << "\nS"  << pgN << " = " << pgSoma;
			}else{
				cout << "\nERRO: Valor da raz�o inv�lido. Dica: Tente um valor diferente de 1!";
			}
			
			//Faz a quebra do switch
			break;
		
		default:
			//Mostra um aviso ao usu�rio
			cout << "Op��o Inv�lida! Tente novamente.";
			cout << "\nDica: Escolha uma das 7 op��es presentes no MENU.";
	}
	
	//Cr�ditos ao Desenvolvedor
	cout << "\n\nDesenvolvido por: Pedro Dantas";
						
	return 0;
}
