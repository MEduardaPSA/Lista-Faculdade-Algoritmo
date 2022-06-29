#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int quantidade=0, i=0, f=0, r=0, m=0, outra=0, soma=0;
	char equipe;
	
	printf("============Informe a quantidade de pessoas que serao entrevistadas! ============ \n");
	scanf(" %d", &quantidade);
	
	if(quantidade > 5){
		for(i=1;i<quantidade;i++){
			printf("Informe a opiniao do entrevistado numero %d\n", i);
			printf("Considere: F = Ferrari, R = Red Bull, M = Mercedes\n");
			scanf(" %c", &equipe);
			
		system("CLS");	
			if(equipe == 'F'){
				f++;
			}else if(equipe == 'R'){
				r++;
			}else if(equipe == 'M'){
				m++;
			}else{
				outra++;
			}
		}
	}else{
		printf("\n==== A quantidade de pessoas entrevistadas tem que ser maior que 5! ====\n");
		
		return 0;
	}
	
	system("CLS");
	
	printf("Quantidade de votos na equipe da Ferrari: %d\n", f);
	printf("Quantidade de votos na equipe do RedBull: %d\n", r);
	printf("Quantidade de votos na equipe da Mercedes: %d\n", m);
	printf("Quantidade de votos em outra equipe: %d\n", outra);
	
	soma = f + r + m;
	
	if(outra > soma){
		printf("-----------------------------------\n");
		printf("Outra equipe privilegiada!");
	}else if (outra == soma){
		printf("-----------------------------------\n");
		printf("Empate!");
	}else{
		if(f > r && f > m){
			printf("-----------------------------------\n");
			printf("Ferrari!");
		}else if(r > f && r > m){
			printf("-----------------------------------\n");
			printf("Redbull!");
		}else if(m > f && m > r){
			printf("-----------------------------------\n");
			printf("Mercedes!");
		}
	}
	
	return 0;
}
