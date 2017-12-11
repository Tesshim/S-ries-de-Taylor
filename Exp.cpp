#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, r = 1, R, erro,  num = 1, den = 1;
    
    
    printf("Entre com o valor x: ");
    scanf("%lf",&x);


    for(int k = 1 ; k < 50 ; k++)
    {

        num *= x;
        den *= k;
        r += num/den;

    }
    
    R = exp(x);
    printf("Seno da math.h = %.15g\n",R);
    
    printf("Seno de Taylor = %.15g\n",r);

    erro = R-r;

    printf("Erro entre os senos = %.15g\n",erro);

    return 0;

}
