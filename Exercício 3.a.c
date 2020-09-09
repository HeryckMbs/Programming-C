#include<stdio.h>
#include<math.h>
main()
{
	float c,f;
	//A variável "c" corresponde a temperatura em graus Celcius
	// "f" corresponde a temperatura convertida para graus Fahrenheit
		
	printf("Digite a temperatura desejada em Celcius: ");
	scanf("%f",&c);
	f=(9*c/5)+32;
	printf("A temperatura informada, convertida de graus celcius para graus Fahrenheit, corresponde a:  %0.1f\n",f);
	
	system("PAUSE");
}
