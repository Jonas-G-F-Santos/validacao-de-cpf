#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	
	setlocale(LC_ALL, "Portuguese");	
	
	char cpf_str[15];
	
	int j, k = 0, dig1, dig2, len, cpf_num[10], resultado1 = 0, resultado2 = 0, sobra = 0, sobra2 = 0;
	
	printf("Digite o cpf: ");
	
	gets(cpf_str);
	
	len = strlen(cpf_str);

	for (j=0;j<=len;j++)
	{
		if (cpf_str[j] != '.' && cpf_str[j] != '-' && cpf_str[j] != ' ')
		{
			cpf_num[k] = cpf_str[j] - 48;
			
			k = k + 1;
		}
	}
	
	for (j=0;j<9;j++)
	{
		resultado1 += (cpf_num[j] * (10 - j));
	}
	
	sobra = resultado1 % 11;
	
	if (sobra < 2)
		
		dig1 = 0;
	
	else
		
		dig1 = 11 - sobra;
	
	for (j=0;j<10;j++)
	{
		resultado2 += (cpf_num[j] * (11 - j));
	}
	
	sobra2 = resultado2 % 11;
	 
	if (sobra2 < 2)
		
		dig2 = 0;
	
	else
	
		dig2 = 11 - sobra2;	
	
	printf("\n\n");
	
	if (cpf_num[9] == dig1 && cpf_num[10] == dig2){
		printf("CPF Válido.");
	}else {
		printf("CPF Inválido.");
	}
	
	


}

