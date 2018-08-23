/* Creado por Alan Macías. Si a es par le sumamos 1. semana 3. 22/08/18*/


#include<stdio.h>

int main()
{
    int a;
    printf("introduce un numero\n");
    scanf("%i", &a);
    if(a%2==0) a=a+1;
    printf("%i\n", a);
}
