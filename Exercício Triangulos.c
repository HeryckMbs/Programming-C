#include<stdio.h>
#include<math.h>

main()
{
	float a,b,c;
	/*As variáveis a, b, e c correspondem aos lados de do triângulo
	Triângulo: figura geométrica de 3 lados, onde cada um é menor do que a soma dos outros dois.
	Triângulo eqüilátero: Triângulo com 3 lados iguais.
	Triângulo isósceles: Triângulo com 2 lados iguais.
	Triângulo escaleno: Triângulo com todos os lados diferentes.	
	*/
	
	printf("Informe os lados de um triangulo para a sua classificacao: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a+b<c || a+c<b || c+b<a|| a<=0|| b<=0|| c<=0){
		printf("Nao constitui um triangulo\n");	
	}else if(a==b && b==c){
		printf("o triangulo e equilatero\n");	
	}else if(a!=b && b!=c){
		printf("O triangulo e escaleno\n");
	}else{
		printf("O triangulo e isoceles\n");
	}
	system("PAUSE");	
	
}
