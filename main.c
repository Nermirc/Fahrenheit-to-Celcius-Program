#include <stdio.h>
#include <stdlib.h>
    float FdenCye(float f)
    {
        return (0.5555)*(f-32);
    }
    float CdenFye(float c)
    {
        return (1.8*c)+32;
    }
int main()
{
    /* Fahrenheit to Celcius Program */
    //f=(1.8*c)+32       c=(5/9)*(F-32)
    float f,c,secim;
    printf("Lutfen donusturmek istediginiz degerin numarasini giriniz.\n\n\n");
    printf("1 Fahrenheit => Celcius\n");
    printf("2 Celcius => Fahrenheit\n\n\n");
    scanf("%f",&secim);
    if(secim == 1)
    {
        printf("Lutfen fahrenayt derecesini giriniz\n");
        scanf("%f",&f);
        printf("%f F = %f C'a esittir.",f,FdenCye(f));
    }
    else if(secim == 2)
    {
        printf("Lutfen Celcius degerini giriniz.\n");
        scanf("%f",&c);
        printf("%f C =%f F'a esittir",c,CdenFye(c));
    }
    else{
            printf("Yanlis secim yaptiniz");
    }
}
