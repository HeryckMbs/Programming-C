#include<stdio.h>
#include<math.h>

main()
{
	float a,b,c;
	/*As vari�veis a, b, e c correspondem aos lados de do tri�ngulo
	Tri�ngulo: figura geom�trica de 3 lados, onde cada um � menor do que a soma dos outros dois.
	Tri�ngulo eq�il�tero: Tri�ngulo com 3 lados iguais.
	Tri�ngulo is�sceles: Tri�ngulo com 2 lados iguais.
	Tri�ngulo escaleno: Tri�ngulo com todos os lados diferentes.	
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
