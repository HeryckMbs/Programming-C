#include <stdio.h>
main()

{
 float h,p;
 //h corresponde a altura informada
 //p corresponde ao resultado do peso ideal proposto pelo enunciado
  
 
 printf("Digite sua altura(em metros):  ");
 
 scanf("%f",&h);
 
 p=(72.7*h)-(58);
 
 printf("Seu peso ideal e: %0.1f kilos \n",p);
 
 
 
 system("PAUSE");
}
