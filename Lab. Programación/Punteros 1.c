#include <stdio.h>
#include <conio.h>
main()
{
   int a;
   /*Declaraci�n de un puntero a un entero */
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
   printf("La direcci�n de a es %p\n", &a);
   printf("*p=%p\n", p); /*Imprimo la direcci�n que guarda p*/
   /*imprimo el valor guardado en la direcci�n a la que apunta p*/
   printf("a=%d\n", *p);
   printf("El tama�o de *p es %d\n", sizeof(p));
   getch();
   return 0;
}
