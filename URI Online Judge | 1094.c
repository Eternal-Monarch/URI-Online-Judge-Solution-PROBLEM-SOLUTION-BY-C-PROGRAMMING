#include <stdio.h>

int main(){
    char t;
    int n,i, c = 0, r = 0, s = 0, total = 0, a;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %c", &a, &t);
        total += a;
        if (t == 'C'){
            c += a;
        } else if (t == 'R'){
            r += a;
        } else if (t == 'S'){
            s += a;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %\n", (float)c * 100.0 / total);
    printf("Percentual de ratos: %.2f %\n", (float)r * 100.0 / total);
    printf("Percentual de sapos: %.2f %\n", (float)s * 100.0 / total);
}
