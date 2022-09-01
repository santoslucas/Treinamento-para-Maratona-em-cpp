#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, resultado;
    char operacao, aux[6];
    
    scanf("%i %c %i", &num1, &operacao, &num2);
    //printf("%i %c %i", num1, operacao, num2);

    sprintf(aux, "%i", num1);
    //printf("%c", aux[1]);
    for(int i=0; i<6; i++)
    {   if(aux[i] == '\0')
        {
            break;
        }

        if( aux[i] == '7')
        {
            aux[i] = '0';
        }
    }
    num1 = atoi(aux);

    sprintf(aux, "%i", num2);
    for(int i=0; i<6; i++)
    {   if(aux[i] == '\0')
        {
            break;
        }

        if( aux[i] == '7')
        {
            aux[i] = '0';
        }
    }
    num2 = atoi(aux);

    if(operacao == '+')
    {
        resultado = (num1 + num2);
    }

    else if(operacao == 'x')
    {
        resultado = (num1 * num2);
    }
    
    sprintf(aux, "%i", resultado);
    for(int i=0; i<6; i++)
    {   if(aux[i] == '\0')
        {
            break;
        }

        if( aux[i] == '7')
        {
            aux[i] = '0';
        }
    }
    resultado = atoi(aux);

    printf("%i\n", resultado);

    return 0;
}