#include<stdio.h>
#include<math.h>

main()
{
	float c,f,fa,ca;
	int o;
	//As variáveis c e fa correspondem, respectivamente a temperatura inserida em graus Celcius e graus Fahrenheit
	//f e ca recebem os valores para a conversão da unidade de temperatura
	//A variável "o" corresponde a opcao escolhida pelo o usuario
	
	printf("Escolha qual o fluxo de conversao \n Celcius para Fahrenheit (opcao1) \n Fahrenheit para celcius (opcao2)\n digite 1 ou 2 para selecionar a opcao\n ");
	scanf("%d",&o);
	
	if (o==1){
	printf("Digite a temperatura desejada em Celcius: ");
	scanf("%f",&c);
	
	f=(9*c/5)+32;
	
	printf("A temperatura informada, convertida de graus celcius para graus Fahrenheit, corresponde a:  %0.1f\n",f);
	}else{
	printf("Digite a temperatura desejada em Fahrenheit: ");
	scanf("%f",&fa);
	
	ca=(5*fa-160)/9;
	
	printf("A temperatura informada, convertida de graus Fahrenheit para graus Celcius, corresponde a:  %0.1f\n",ca);
	
	}
	
	system("PAUSE");
	
}
