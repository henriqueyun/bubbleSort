/*

Código feito por Henrique Lima de Oliveira

*/#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main(void){

	setlocale(LC_ALL, "Portuguese");

	
	int vetor[10];
	
	cout << "Algor�timo Bubble Sort!\n\nPor favor que preencha o vetor, por favor:\n\n";
	
	for(int i = 0;i <= 9;i++){
	
	cout << "Digite o " << i + 1 << "� valor:\n";
	cin >> vetor[i];
	
	}
	
	
	for(int k = 0;k <=9;k++){
		for(int x = k;x <= 9;x++){
			
			if(vetor[k] > vetor[x]){// 9 < 10
			
				//cout << "Vetor[" << k << "] que era " << vetor [k] << " troca de valor com vetor[" << x<< "] que era " << vetor [x] << "\n";
				
				vetor[x] = vetor[x] + vetor [k]; // 10 = 10 + 9 // vetor [x] = 19
				vetor[k] = vetor[x] - vetor[k]; // 9 = 19 - 9 // vetor [k] = 10
				vetor[x] = vetor[x] - vetor[k]; // 19 = 19 - 10  // vetor [x] = 9
			}
			
		}
		cout << "Vetor[" << k <<"] finalizado com valor " << vetor[k] << "\n\n";
	}
	
	cout << "Vetor ordenado:";
	
	for(int u = 0; u <= 9;u++){
		
		cout << vetor[u] << " "; 
		
	}
	
	return 0;
	
}
