#include <stdio.h>
#include <conio.h>
main()
{
   int a;
   /*Declaración de un puntero a un entero */
   int *p;
   system ("cls");
   printf("Ingrese un valor ENTERO para la variable:\n");
   scanf("%d", &a);
   while(a<0)
   {
       printf("ERROR, el valor debe ser mayor que cero:\n");
       scanf("%d", &a);
   }
   p=&a;
   system ("cls");
    /*Limpiamos la pantalla */
   printf("a=%d\n", a); /*Imprimo el valor de a*/
   printf("La dirección de a es %p\n", &a);
   printf("*p=%p\n", p); /*Imprimo la dirección que guarda p*/
   /*imprimo el valor guardado en la dirección a la que apunta p*/
   printf("a=%d\n", *p);
   printf("El tamaño de *p es %d\n", sizeof(p));
   getch();
   return 0;
}
