#include <stdio.h>
main(){
	int b;
	float a, c;
	//a = salrio, b= codigo de cargo
	printf("Informe seu salario: \n");
	scanf("%f",&a);
	printf("Informe o codigo do seu cargo: \n");
	scanf("%d", &b);
	
	//c= novo salário
	
	switch(b){
		case (1):c=a*1.5; printf("Voce e o escrituario, tem direito a 50 por cento de aumento salarial. Seu salario aumentado e %0.3f reais \n",c);break;
		case (2):c=a*1.35;printf("Voce e o secretario, tem direito a 35 por cento de aumento salarial. Seu salario aumentado e %0.3f reais \n",c);break;
		case (3):c=a*1.2;printf("Voce e o caixa, tem direito a 20 por cento de aumento salarial.Seu salario aumentado e %0.3f reais \n",c);break;
		case (4):c=a*1.1;printf("Voce e o gerente, tem direito a 10 por cento de aumento salarial. Seu salario aumentado e %0.3f reais \n",c);break;
		case (5):printf("Voce e diretor, não tem direito a aumento salarial, seu salario e %0.3f reais\n",a);break;
		default:printf("Opcao indisponivel\n");
	}
	 
	
	system("PAUSE");
	
}
