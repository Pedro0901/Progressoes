/* PROGRESSÃO ARITMÉTICA E PROGRESSÃO GEOMÉTRICA */

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <locale.h>

using namespace std;

//Função principal do programa
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
	
	//Dá uma mensagem de boas vindas
	cout << "========== SEJA BEM-VINDO (A) =====================";
	
	//Lista de opções
	cout << "\n\n---------- LISTA DE OPÇÕES ------------------------\n";
	cout << "\n1 - Cálculo do Termo Geral e Soma dos Termos de uma P.A";
	cout << "\n2 - Cálculo do Termo Geral e Soma dos Termos de uma P.G";
	
	//Opções individuais
	cout << "\n\n---------- LISTA DE OPÇÕES - INDIVIDUAIS ----------\n";
	cout << "\n3 - Cálculo do Termo Geral de uma P.A";
	cout << "\n4 - Cálculo da Soma dos Termos de uma P.A";
	cout << "\n5 - Cálculo do Termo Geral de uma P.G";
	cout << "\n6 - Cálculo da Soma dos Termos de uma P.G\n";
	
	//Opção para sair do programa
	cout << "\n---------- SAIR DO PROGRAMA -----------------------\n";
	cout << "\n0 - SAIR do Programa\n";
	
	//Usuário escolhe uma opção
	cout << "\nESCOLHA UMA DAS OPÇÕES: ";
	cin >> opcao;
	
	//Limpa a tela após a escolha
	system("CLS");
	
	//Menu para escolha
	switch(opcao){
		//SAIR do Programa
		case 0:
			return 0;
			break;
		
		//Cálculo do Termo Geral e Soma dos Termos de uma P.A
		case 1:
			//Mostra a opção escolhida
			cout << "\nOpção 1 Escolhida!\n";
			
			//Informa e lê dados do usuário
			cout << "\nPor favor, informe os seguintes valores";
			cout << "\n\nDigite o primeiro termo (A1) de sua P.A: ";
			cin >> A1;
			cout << "Digite o número de termos (n) de sua P.A: ";
			cin >> n;
			//Dica para usuários
			cout << "\nDICA: A razão de sua PG é igual a diferença de um termo pro outro!";
			cout << "\nDigite a razão (r) de sua P.A: ";
			cin >> r;
			
			//Cabeçalho - Cálculos
			cout << "\n========== CÁLCULOS ==========\n";
			
			//PARTE DO CÁLCULO DO TERMO GERAL DE UMA P.A
			//Mostrando o nome do cálculo a ser feito
			cout << "\nCálculo do Termo Geral de uma P.A\n";
			
			//Mostra a fórmula ao usuario
			cout << "\nFÓRMULA: An = A1 + (n - 1) * r\n";
			
			//Mostra a fórmula com os valores ja preenchidos
			cout << "\nA" << n << " = " << A1 << " + (" << n << " - 1) * " << r;
			
			//Faz o calculo
			paTermoGeral = A1 + (n - 1) * r;
			
			//Exibe o resultado
			cout << "\nA" << n << " = " << paTermoGeral;
			
			//Separação de um cálculo pro outro
			cout << "\n\n----------------------------------";
			
			//PARTE DO CÁLCULO DA SOMA DOS TERMOS DE UMA P.A
			//Mostrando o nome do cálculo a ser feito
			cout << "\n\nCálculo da Soma dos Termos de uma P.A\n";
			
			//Mostra a fórmula ao usuário
			cout << "\nFÓRMULA: Sn = (A1 + An) * n / 2\n";
			
			//Mostra a fórmula com os valores ja preenchidos
			cout << "\nS" << n << " = (" << A1 << " + " << paTermoGeral << ") * " << n << " / 2";
			
			//Faz o cálculo
			paSoma = (A1 + paTermoGeral) * n / 2;
			
			//Exibe o resultado
			cout << "\nS" << n << " = " << paSoma;
			
			//Faz a quebra do caso 
			break;
		
		//Termo Geral e Soma dos Termos de uma PG (Progressão Geométrica)
		case 2:
			//Mostra a opção escolhida
			cout << "\nOpção 2 Escolhida!\n";
			
			//Informa e lê os dados do usuário
			cout << "\nPor favor, informe os seguintes dados\n";
			cout << "\nDigite o primeiro termo (A1) de sua PG: ";
			cin >> pgA1;
			//Dica para usuários
			cout << "\nDICA: A razão de sua PG é igual a diferença de um termo pro outro!";
			cout << "\nDigite a razão (r) de sua PG: ";
			cin >> pgR;
			cout << "\nDigite o termo (n) que queremos descobrir: ";
			cin >> pgN;
			
			//Cabeçalho - Cálculos
			cout << "\n========== CÁLCULOS ==========\n";
			
			//PARTE DO CALCULO DO TERMO GERAL DE UMA P.G
			//Mostrando o nome do cálculo a ser feito
			cout << "\n\nCálculo do Termo Geral de uma P.G\n";
			
			//Mostra a formula ao usuário
			cout << "\nFÓRMULA: An = A1 * r^(n - 1)";
			//Texto de observação
			cout << "\nOBSERVAÇÃO: onde está ^ lê-se elevado.\n";
			
			//Mostra a formula com os valores ja preenchidos
			cout << "\nA" << pgN << " = " << pgA1 << " * " << pgR << "^(" << pgN << " - 1)";
			
			//Mostra a formula com os valores ja preenchidos e com a potencia resolvida
			cout << "\nA" << pgN << " = " << pgA1 << " * " << pow(pgR, (pgN - 1));
			
			//Faz o calculo 
			pgTermoGeral = pgA1 * pow(pgR, (pgN - 1));
			
			//Exibe o resultado
			cout << "\nA" << pgN << " = " << pgTermoGeral;
			
			//Separação de um cálculo pro outro
			cout << "\n\n----------------------------------";
			
			//PARTE DO CÁLCULO DA SOMA DOS TERMOS DE UMA PG
			//Mostrando o nome do cálculo a ser feito
			cout << "\n\nCálculo da Soma dos Termos de uma P.G\n";
			
			//Mostra a fórmula ao usuario
			cout << "\nFÓRMULA: Sn = A1 * (r^n-1) / r - 1";
			//Texto de observação
			cout << "\nOBSERVAÇÃO: onde está ^ lê-se elevado.\n";
			
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
				cout << "\nERRO: Valor da razão inválido. Dica: Tente um valor diferente de 1!";
			}
			
			//Faz a quebra do caso
			break;
		
		//Cálculo do Termo Geral de uma P.A
		case 3:
			//Mostra a opção escolhida
			cout << "\nOpção 3 Escolhida!\n";
			
			//Informa e lê dados do usuário
			cout << "\nPor favor, informe os seguintes valores";
			cout << "\n\nDigite o primeiro termo (A1) de sua P.A: ";
			cin >> A1;
			cout << "Digite o número de termos (n) de sua P.A: ";
			cin >> n;
			//Dica para usuários
			cout << "\nDICA: A razão de sua PG é igual a diferença de um termo pro outro!";
			cout << "Digite a razão (r) de sua P.A: ";
			cin >> r;
			
			//Cabeçalho - Cálculos
			cout << "\n========== CÁLCULOS ==========\n";
			
			//PARTE DO CÁLCULO DO TERMO GERAL DE UMA P.A
			//Mostrando o nome do cálculo a ser feito
			cout << "\nCálculo do Termo Geral de uma P.A\n";
			
			//Mostra a fórmula ao usuario
			cout << "\nFÓRMULA: An = A1 + (n - 1) * r\n";
			
			//Mostra a fórmula com os valores ja preenchidos
			cout << "\nA" << n << " = " << A1 << " + (" << n << " - 1) * " << r;
			
			//Faz o calculo
			paTermoGeral = A1 + (n - 1) * r;
			
			//Exibe o resultado
			cout << "\nA" << n << " = " << paTermoGeral;
			
			//faz a quebra do switch
			break;
		
		//Cálculo da Soma dos Termos de uma P.A
		case 4:
			//Mostra a opção escolhida
			cout << "\nOpção 4 Escolhida!\n";
			
			//Informa e lê dados do usuário
			cout << "\nPor favor, informe os seguintes valores";
			cout << "\n\nDigite o primeiro termo (A1) de sua P.A: ";
			cin >> A1;
			cout << "Digite o número de termos (n) de sua P.A: ";
			cin >> n;
			//Dica para usuários
			cout << "\nDICA: A razão de sua PG é igual a diferença de um termo pro outro!";
			cout << "\nDigite a razão (r) de sua P.A: ";
			cin >> r;
			cout << "\nDigite o Termo Geral de sua P.A: ";
			cin >> paTermoGeral;
			
			//Cabeçalho - Cálculos
			cout << "\n========== CÁLCULOS ==========\n";
			
			//PARTE DO CÁLCULO DA SOMA DOS TERMOS DE UMA P.A
			//Mostrando o nome do cálculo a ser feito
			cout << "\n\nCálculo da Soma dos Termos de uma P.A\n";
			
			//Mostra a fórmula ao usuário
			cout << "\nFÓRMULA: Sn = (A1 + An) * n / 2\n";
			
			//Mostra a fórmula com os valores ja preenchidos
			cout << "\nS" << n << " = (" << A1 << " + " << paTermoGeral << ") * " << n << " / 2";
			
			//Faz o cálculo
			paSoma = (A1 + paTermoGeral) * n / 2;
			
			//Exibe o resultado
			cout << "\nS" << n << " = " << paSoma;
			
			//Faz a quebra do caso 
			break;	
		
		//Cálculo do Termo Geral de uma P.G
		case 5:
			//Mostra a opção escolhida
			cout << "\nOpção 5 Escolhida!\n";
			
			//Informa e lê os dados do usuário
			cout << "\nPor favor, informe os seguintes dados\n";
			cout << "\nDigite o primeiro termo (A1) de sua PG: ";
			cin >> pgA1;
			//Dica para usuários
			cout << "\nDICA: A razão de sua PG é igual a diferença de um termo pro outro!";
			cout << "\nDigite a razão (r) de sua PG: ";
			cin >> pgR;
			cout << "\nDigite o termo (n) que queremos descobrir: ";
			cin >> pgN;
			
			//Cabeçalho - Cálculos
			cout << "\n========== CÁLCULOS ==========\n";
			
			//PARTE DO CALCULO DO TERMO GERAL DE UMA P.G
			//Mostrando o nome do cálculo a ser feito
			cout << "\n\nCálculo do Termo Geral de uma P.G\n";
			
			//Mostra a formula ao usuário
			cout << "\nFÓRMULA: An = A1 * r^(n - 1)";
			//Texto de observação
			cout << "\nOBSERVAÇÃO: onde está ^ lê-se elevado.\n";
			
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
		
		//Cálculo da Soma dos Termos de uma P.G
		case 6:
			//Mostra a opção escolhida
			cout << "\nOpção 6 Escolhida!\n";
			
			//Informa e lê os dados do usuário
			cout << "\nPor favor, informe os seguintes dados\n";
			cout << "\nDigite o primeiro termo (A1) de sua PG: ";
			cin >> pgA1;
			//Dica para usuários
			cout << "\nDICA: A razão de sua PG é igual a diferença de um termo pro outro!";
			cout << "\nDigite a razão (r) de sua PG: ";
			cin >> pgR;
			cout << "\nDigite o termo (n) que queremos descobrir: ";
			cin >> pgN;
			
			
			//PARTE DO CÁLCULO DA SOMA DOS TERMOS DE UMA PG
			//Cabeçalho - Cálculos
			cout << "\n========== CÁLCULOS ==========\n";
			//Mostrando o nome do cálculo a ser feito
			cout << "\nCálculo da Soma dos Termos de uma P.G\n";
			
			//Mostra a fórmula ao usuario
			cout << "\nFÓRMULA: Sn = A1 * (r^n-1) / r - 1";
			//Texto de observação
			cout << "\nOBSERVAÇÃO: onde está ^ lê-se elevado.\n";
			
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
				cout << "\nERRO: Valor da razão inválido. Dica: Tente um valor diferente de 1!";
			}
			
			//Faz a quebra do switch
			break;
		
		default:
			//Mostra um aviso ao usuário
			cout << "Opção Inválida! Tente novamente.";
			cout << "\nDica: Escolha uma das 7 opções presentes no MENU.";
	}
	
	//Créditos ao Desenvolvedor
	cout << "\n\nDesenvolvido por: Pedro Dantas";
						
	return 0;
}
