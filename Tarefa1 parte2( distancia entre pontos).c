#include <stdio.h>
#include <math.h>

main()
{
	int x1,x2,y1,y2;
	//As variáveis x e y correspondem ás coordenadas dos pontos P e Q
	float d;
	
	printf("Digite as coordenadas do ponto P(X,Y): \n");
	scanf("%i%i",&x1,&y1);
	
    printf("Digite as coordenadas do ponto Q(X,Y): \n");
	scanf("%i%i",&x2,&y2);

	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	//d corresponde á formúla proposta pelo exercício 
	
	printf("A distancia entre as coordenadas dos pontos citados e: %0.3f \n",d);
	
	system("PAUSE");
	
	
	
	
	
	
	
}
