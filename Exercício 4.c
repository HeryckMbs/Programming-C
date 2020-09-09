#include<stdio.h>

main()
{
	int a;
	//A variável "a" corresponde a idade do nadador
	printf("Digite a idade do nadador para a classificação de categoria: ");
	scanf("%d", &a);
	
	if(a>=5 && a<=7){
	printf("Nadador pertencente a categoria infantil A\n");		
	}else if(a>=8&&a<=10){
	printf("Nadador pertencente a categoria infantil B\n");
	}else if(a>=11&&a<=13){
	printf("Nadador pertencente a categoria juvenil A\n");
	}else if(a>=14&&a<=17){
	printf("Nadador pertencente a categoria juvenil B\n");
	}else if(a<5||a>17){
	printf("Nadador sem categoria!\n");
	}
	
	system("PAUSE");
}
