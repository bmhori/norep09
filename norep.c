
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *norep(void) /* funcao que nao permite com que haja repeticao*/
{
    int valor,cont=0;
    int *vetor=(int*) calloc (6, sizeof(int));
    do
    {
        int i,j=1;
        valor=rand()%6+1;
        for(i=0; i<6; i++)
        {
            if(valor==vetor[i])
            {
                j=0;
                break;
            }
       }
            
        if(j==1)
        {
            vetor[cont]=valor;
            cont++;
        }

        }
    while(cont<6);
    return vetor;

}

int main(void)
{
    srand(time(NULL));
    int x=0, y=0;
    for(y=0; y<100; y++)
    {
        int *rep=norep();
        for(x=0; x<6; x++)
            printf("%d", rep[x]);
            printf("\n");
    }

    return EXIT_SUCCESS;
}

