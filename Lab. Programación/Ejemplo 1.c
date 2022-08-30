#include<stdio.h>
main() /* Asignamos direcciones */
{
int a;
int *p1;
printf("Ingrese un valor ENTERO para la variable:\n");
   scanf("%d", &a);
   while(a<0)
   {
       printf("ERROR, el valor debe ser mayor que cero:\n");
       scanf("%d", &a);
   }
p1= &a;


printf("%d", *p1);
}
