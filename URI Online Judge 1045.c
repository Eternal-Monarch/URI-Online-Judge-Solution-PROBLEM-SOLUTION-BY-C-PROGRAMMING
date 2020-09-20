#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h;
    scanf("%lf %lf %lf",&a,&b,&c);
    //if A ≥ B + C, write the message: NAO FORMA TRIANGULO
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    //if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
    else if((a*a)==(b*b)+(c*c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    //if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
    else if((a*a)>(b*b)+(c*c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    //if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
    else if((a*a)<(b*b)+(c*c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    //if the three sides are the same size, write the message: TRIANGULO EQUILATERO
    else if(a==b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    //if only two sides are the same and the third one is different, write the message: TESRIANGULO ISOSCEL
    else if(a==b || b==c ||a!=b)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    
return 0;
    
}
