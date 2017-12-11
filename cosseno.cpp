#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, r = 1, R, erro,  num = 1, den = 1;
    int sinal = 1;
    
    
    printf("Entre com o valor x: ");
    scanf("%lf",&x);


    for(int k = 1 ; k < 50 ; k++)
    {
		if(k != 1)
		{
	        sinal *= -1;
	        num *= x;
	        den *= k;
	        r += sinal * num/den;
	        num *= x;
	        k++;
	        den *= k;
    	}
    	else
    	{
    		num *= x;
        	den *= k;
		}

    }

    //r *= -1;
    
    R = cos(x);
    //printf("\nx = %lf \n",x);
    printf("Cosseno da math.h = %.15g\n",R);
    
    printf("Cosseno de Taylor = %.15g\n",r);

    erro = R-r;

    printf("Erro entre os cossenos = %.15g\n",erro);

    return 0;

}
