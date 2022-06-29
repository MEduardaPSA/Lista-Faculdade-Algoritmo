#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	float metro3=0;
	int mes=0, ano=0;
	char bissexto[20], result[20];
	
	printf("====Informe a quantidade de metros cubicos: ==== \n");
	scanf(" %f",&metro3);
	
	if(metro3 < 0){
		printf("==== Informe um valor positivo! ====");
		return 0;
	}else{		
		if(metro3 <= 2.1){
			strcpy(result, "Consumo baixo");
		}else if(metro3 > 2.1 && metro3 <=6.1){
			strcpy(result, "Consumo normal");
		}else if(metro3 > 6.1 && metro3 <= 10.5){
			strcpy(result, "Consumo alto");
		}else if(metro3 > 10.5){
			strcpy(result, "Consumo exagerado!!!");
		}	
	}
	
	printf("---- Informe o mes: ---- \n");
	printf("ex: 1 = janeiro, 12 = dezembro\n");
	scanf(" %i",&mes);
	
	if(mes > 12){
		printf("==== Voce informou um mes incorreto! ====");
		return 0;
	}else{
		printf("---- Informe o ano: ---- \n");
		scanf(" %i",&ano);
		
		if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
			strcpy(bissexto, "Ano bissexto");
		}else{
			strcpy(bissexto, "Ano nao bissexto");
		}		
	}
	printf("O consumo e de: %.2f\n", metro3);
	printf("Classificacao: %s\n", result);
	printf("Mes: %d\n", mes);
	printf("Ano: %d\n", ano);
	printf("Bissexto? : %s\n", bissexto);
	
	printf("\n==== Ate breve! ==== \n");
	return 0;
}
