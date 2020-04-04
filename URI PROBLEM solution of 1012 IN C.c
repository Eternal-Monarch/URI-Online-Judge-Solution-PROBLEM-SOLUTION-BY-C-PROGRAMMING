#include<stdio.h>
int
main()
{ 
float a,b,c,sum,TRIANGULO,CIRCULO;
scanf("%f%f%f",&a,&b,&c);
TRIANGULO=(.5*a*c);
CIRCULO=(3.14159*c*c);
float TRAPEZIO=(((a+b)/2)*c);
float QUADRADO=(b*b);
float RETANGULO=(a*b);

printf("TRIANGULO: %0.03f\n",TRIANGULO);
printf("CIRCULO: %0.03f\n",CIRCULO);
printf("TRAPEZIO: %0.03f\n",TRAPEZIO);
printf("QUADRADO: %0.03f\n",QUADRADO);
printf("RETANGULO: %0.03f\n",RETANGULO);

return 0;
}
