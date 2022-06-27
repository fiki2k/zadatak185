/*   Program treba izracunat sinus seriju pomocu funkcije sin(x).  */

#include<stdio.h>
#include<math.h>

int faktorijal(int n)
{
        int i,fact=1;
        for(i=1;i<=n;i++)
                fact=fact*i;
        return fact;
}


int main()
{
        double x, sinx=0, z, red;
    int j, n, i,znak=-1;

        printf("Unesi vrijednost za x : ") ;  // Npr 45 180 90 360
        scanf("%lf", &x) ;
        printf("\nUnesi vrijednost za n : ") ;   // Npr 10 20
        scanf("%d", &n) ;

        x = x * 3.14159 / 180 ;   //pretvara stupnjeve u radijane
    i=0;
    z=sin(x);

        for(i=1;i<=n;i=i+2)
    {
        znak=-znak;
        red=znak*pow(x,i)/faktorijal(i);
        sinx=sinx+red;
    }

        printf("\nsin(x) je priblizno %.15lf\n", sinx);
    printf("\nsin(x) prema zadanoj funkciji je %.15lf\n", z);

    return 0;
}
