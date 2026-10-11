#include <stdio.h>

int main()
{
    int sayi,A,B,C,D,E,F;

    printf("Bir not  giriniz: ");
    scanf("%d", &sayi); 

    if (sayi >=90 && sayi <=100) {
        printf("Girdiginiz A dereceye sahip.\n");
    } 
     if (sayi >=80 && sayi <90) {
        printf("Girdiginiz B dereceye sahip.\n");
    } 
     if (sayi >=70 && sayi <80) {
        printf("Girdiginiz C dereceye sahip.\n");
    } 
     if (sayi >=60 && sayi <70) {
        printf("Girdiginiz D dereceye sahip.\n");
    } 
     if (sayi >=50 && sayi <60) {
        printf("Girdiginiz E dereceye sahip.\n");
    } 
     if (sayi <50) {
        printf("Girdiginiz F dereceye sahip.\n");
    } 


    return 0;
}