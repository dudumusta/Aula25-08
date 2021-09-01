#include <iostream>
#include<cmath>

int main() 
{
	// declaração de variavel
	int a,b,c;
	int x1,x2;
	
		
	// essa linha de baixo imprime alguma 
	std::cout << "Digite o valor de A:";
	// essa linha lê um valor para dento uma variavel
	std::cin  >> a;
	std::cout << "\nDigite o valor de B:";
	std::cin  >> b;
	std::cout << "\nDigite o valor de C:";
	std::cin  >> c;	
	
	int resultado = b*b - 4*a*c;
	int delta = sqrt(resultado);	

	
	// processamento
	
	if (delta<0){
		std::cout<< "Não existem valores para x1 e x2";
	}else if(delta=0) {
		 std::cout<< "Existe apenas um valor";
	} else {
		x1 = (-b+(sqrt(delta)))/2*a*c;
		x2 = (-b-(sqrt(delta)))/2*a*c;
	
	std::cout << "O valor de x1 eh: " <<x1;
	}
	
	
	

		 	
	return 0;
}
