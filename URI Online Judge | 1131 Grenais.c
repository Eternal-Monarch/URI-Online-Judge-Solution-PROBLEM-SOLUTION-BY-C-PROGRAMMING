#include <stdio.h>
int main()
{
    int x,y,I,G,E,c;
    I = G = E = c = 0;
    while(1)
    {
        scanf("%d%d",&x,&y);
        c++;
        if(x==y)
            E++;
        else if(x>y)
            I++;
        else if(x<y)
            G++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&x);
        if(x==2)
            break;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",c,I,G,E);
    if(I==G)
        printf("Nao houve vencedor\n");
    else if(I>G)
        printf("Inter venceu mais\n");
    else if(I<G)
        printf("Gremio venceu mais\n");
    return 0;
}
