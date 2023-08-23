#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int questao;
    questao = -1;

    while (questao != 0) {
        cout << "Digite um numero de 1 a 10 para ir a questao ou 0 para sair: ";
        cin >> questao;

		switch (questao){
			case 1: {
						
				float valor;
				cout << "Digite um valor: ", cin >> valor;
				if (valor > 0){
					cout << valor << " eh positivo" << endl;
				}else if (valor < 0){
					cout << valor << " eh negativo" << endl;
				}else {
					cout << "Neutro";
				}
				break;
			}
		
			case 2: {
				
				float num1;
				cout << "Digite o primeiro numero: ", cin >> num1;
				float num2;
				cout << "Digite o segundo numero: ", cin >> num2;
				
				if (num1 > num2){
					cout << "O maior numero eh: " << num1 << endl;
				}else if(num1 < num2){
					cout << "O maior numero eh: " << num2 << endl;
				}else{
					cout << "OS numeros são iguais" << endl;
				}
				
				break;
			}
			
			case 3: {
				
				string letra;
				cout << "Digite 'F' para Feminino e 'M' para Masculino: ", cin >> letra;
				
				if (letra == "F" || letra == "f"){
					cout << "Feminino" << endl;
				}else if (letra == "M" || letra == "m"){
					cout << "Masculino" << endl;
				}else {
					cout << "Sexo invalido" << endl;
				}
				break;
			}
			case 4: {
				
				int contador = 0;
				cout << "Digite quantos numeros voce quer colocar: ", cin >> contador;
				
				float numero = 0;
				float maiorNumero = -99999999;
				float menorNumero = 99999999;
				
				if (contador == 1){
					cout << "Digite um numero: "; 
					cin >> numero;
					maiorNumero = numero;
					menorNumero = numero;
				}else {
					for (int i = 0; i < contador; i++){
						cout << "Digite um numero: "; 
						cin >> numero;
						
						if (numero < menorNumero){
							menorNumero = numero;
						}
						if (numero > maiorNumero){
							maiorNumero = numero;
						} 
					}
				}
				cout << "O maior numero eh " << maiorNumero << ", o menor numero eh " << menorNumero << " e a soma entre eles eh " << menorNumero + maiorNumero << endl;
				
				break;
			}
			
			case 5: {
			
				int num;
				cout << "Digite um numero para obter a tabuada: "; 
				cin >> num;
				for (int i = 0; i < 11; i++)
				cout << num << "x" << i << ":" << num * i << endl;
				break;
			}
			case 6: {
			
				int num;
				cout << "Digite um numero para saber se ele eh primo ou nao: ";
				cin >> num;
				
				if (num % 2 != 0 && num % 3 != 0 || num == 2 || num == 3){
					cout << "numero primo" << endl;
				}else {
					cout << "nao eh primo" << endl;
				}
				break;
			}
				
			case 7: {
			
				int num;
				int numPar = 0;
				int numImpar = 0;
				
				cout << "Digite um numero maior que mil ou menor que zero para parar o programa!" << endl;
				
				while (true){
					cout << "Digite um numero: ";
					cin >> num; 
					if (num > 1000){
						break;
					}else if (num % 2 == 0){
					numPar += num;
					}else{
					numImpar += num;
					}
				}
				cout << "A soma dos numeros pares eh: " << numPar << " e a soma dos numeros impares eh " << numImpar << endl;	
			}
				
			
			case 8: {
				
				int num1 = 0;
				int num2 = 1;
				int num3;
				int contador;
				
				
				cout << "Digite a quantidade de termos: ";
				cin >> contador;
				
				for (int i = 1; i <= contador; i++){
					cout << num1 << endl;
					num3 = num1 + num2;
					num1 = num2;
					num2 = num3;
				}
			}
			
			case 9:{
		
				float salario;
				float vinte = 0.2;
				float quinze = 0.15;
				float dez = 0.1;
				float cinco = 0.05;
				float aumento;
				
				cout << "Digite seu salario para ver o seu aumento: ";
				cin >> salario;
				
				if (salario <= 280){
					aumento = salario * vinte;
					cout << "Seu salario antes do reajuste: " << salario << endl;
					cout << "Aumento de 20%" << endl;
					cout << "Valor do aumento: " << aumento << endl;
					cout << "Novo salario: " << salario + aumento << endl;
	
				}else if (salario > 280 && salario <= 700){
					aumento = salario * quinze;
					cout << "Seu salario antes do reajuste: " << salario << endl;
					cout << "Aumento de 15%" << endl;
					cout << "Valor do aumento: " << aumento << endl;
					cout << "Novo salario: " << salario + aumento << endl;
					
				}else if (salario > 700 && salario <= 1500){
					aumento = salario * dez;
					cout << "Seu salario antes do reajuste: " << salario << endl;
					cout << "Aumento de 10%" << endl;
					cout << "Valor do aumento: " << aumento << endl;
					cout << "Novo salario: " << salario + aumento << endl;
					
				}else {
					aumento = salario * cinco;
					cout << "Seu salario antes do reajuste: " << salario << endl;
					cout << "Aumento de 5%" << endl;
					cout << "Valor do aumento: " << aumento << endl;
					cout << "Novo salario: " << salario + aumento << endl;
				}
				
				break;
			}
				
			case 10:{
				
				int num1;
				int num2;
				int soma;
				
				cout << "Seja bem vindo a maior banda de forro!! 'Se avexe nao'." << endl;
				cout << "Digite dois numeros de 0 a 5 para tocar a musica desejada." << endl;
				cout << "Digite o primeiro: ";
				cin >> num1;
				cout << "Digite o segundo: ";
				cin >> num2;
				
				if (num1 + num2 == 0){
					cout << "tocando... 'Meio dia'" << endl;
				}else if (num1 + num2 == 1){
					cout << "tocando... 'Rock no sertao'" << endl;
				}else if (num1 + num2 == 2){
					cout << "tocando... 'Saga de um vaqueiro'" << endl;
				}else if (num1 + num2 == 3){
					cout << "tocando... 'Bota pegado parea'" << endl;
				}else if (num1 + num2 == 4){
					cout << "tocando... 'Ponto final'" << endl;
				}else if (num1 + num2 == 5){
					cout << "tocando... 'Luz camera acao'" << endl;
				}else if (num1 + num2 == 6){
					cout << "tocando... 'Toma conta de min'" << endl;
				}else if (num1 + num2 == 7){
					cout << "tocando... 'Olha pro ceu'" << endl;
				}else if (num1 + num2 == 8){
					cout << "tocando... 'Olhinhos de fogueira'" << endl;
				}else if (num1 + num2 == 9){
					cout << "tocando... 'Rancheira'" << endl;
				}else if (num1 + num2 == 10){
					cout << "tocando... 'Avoante'" << endl;
				}else{
					cout << "Musica nao encontrada!" << endl;
				}
				break;
			}
				
			case 0:
                cout << "TCHAU" << endl;
                break;
            default:
                cout << "Questao inexistente!" << endl;
                break;
                
		    }
	    }
		
	}
