#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, r = 0, R, erro,  num = 1, t;
    
    
    printf("Entre com o valor x: ");
    scanf("%lf",&x);
	
	t = (x-1)/(x+1);

    for(int k = 1 ; k < 50 ; k++)
    {

        num *= t;
        r += num/k;
        num *= t;
        k++;

    }
    
    r = r*2;
    
    R = log(x);
    printf("Log da math.h = %.15g\n",R);
    
    printf("Log de Taylor = %.15g\n",r);

    erro = R-r;

    printf("Erro entre os logs = %.15g\n",erro);

    return 0;

}
