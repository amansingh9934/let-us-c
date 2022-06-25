#include<stdio.h>
    int main ()
     {
        
        float fahrenheit, celsius;
        printf(" Enter temprature in farenheit \n");
        scanf("%F",& fahrenheit);
         
        celsius=(fahrenheit - 32)*5/9;
        printf("celcius = %.3f", celsius);

       return 0;
       

     }