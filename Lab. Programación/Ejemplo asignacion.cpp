#include <stdio.h>
main() /* Asignamos direcciones */
{
int a;
int *p1,*p2;
p1=&a;
p2=p1;
printf("%p %p",p1,p2);
}
