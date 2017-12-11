#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, r = 0, R, erro,  num = 1, den = 1;
    int sinal = 1;
    
    
    printf("Entre com o valor x: ");
    scanf("%lf",&x);


    for(int k = 1 ; k < 50 ; k++)
    {

        sinal *= -1;
        num *= x;
        den *= k;
        r += sinal * num/den;
        num *= x;
        k++;
        den *= k;

    }

    r *= -1;
    
    R = sin(x);
    printf("Seno da math.h = %.15g\n",R);
    
    printf("Seno de Taylor = %.15g\n",r);

    erro = R-r;

    printf("Erro entre os senos = %.15g\n",erro);

    return 0;

}
