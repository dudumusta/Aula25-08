#include<iostream>

int main() 
{
	// declaração de variavel
	int numero;
	int resultado = 5;
	
	
	// essa linha de baixo imprime alguma 
	std::cout << "Digite um numero de 1 a 10: ";
	// essa linha lê um valor para dento uma variavel
	std::cin  >> numero;
	
	// processamento
	if(numero==resultado){
		std::cout <<"Voce acertou";	
	} else{
		std::cout <<"tente novamente";
	}
		 	
	return 0;
}
