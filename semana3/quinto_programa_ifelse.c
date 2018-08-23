/* Creado por Alan Macías. quinto programa de ejemplo con if... else. semana 3. 22/08/18*/

#include<stdio.h>

int main()
{
 char c;
 int es_vocalminuscula, es_vocalmayuscula;

 printf("introduce una letra\n");
 scanf("%c", &c);

 es_vocalminuscula = (c == 'a' || c== 'e' || c == 'i' || c == 'o' || c == 'u');
 es_vocalmayuscula = (c == 'A' || c== 'E' || c == 'I' || c == 'O' || c == 'U');

 if (es_vocalmayuscula || es_vocalminuscula){
    printf("%c es una vocal\n", c);
 }  else{
     printf("%c es una consonante\n", c);
 }
 return 0;
}
