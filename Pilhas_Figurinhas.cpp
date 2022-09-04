#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testes, numCartas[2], divisor, i=0;
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67};
    int MDC=1;
    float aux[2];

    scanf("%i", &testes);

    while(testes--)
    {
        scanf("%i %i", &numCartas[0], &numCartas[1]);

        while(numCartas[0] != 1 && numCartas[1] != 1 && i != 19)
        {
            divisor = primos[i];
            aux[0] = (numCartas[0]%divisor);
            aux[1] = (numCartas[1]%divisor);

            if(aux[0] == 0 && aux[1] == 0)
            {
                numCartas[0] = (numCartas[0]/divisor);
                numCartas[1] = (numCartas[1]/divisor);
                MDC = (MDC*divisor);
            }

            else if (aux[0] == 0 && aux[1] != 0)
            {
                numCartas[0] = (numCartas[0]/divisor);
            }

            else if (aux[0] != 0 && aux[1] == 0)
            {
                numCartas[1] = (numCartas[1]/divisor);
            }

            else
            {
                i++;
                divisor = primos[i];
            }
        }

        printf("%i\n", MDC);
        MDC = 1;
        i=0;

    }
}
