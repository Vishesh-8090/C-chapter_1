# include <stdio.h>

int main(){
    float farenheit = 3;
    float celsius = (farenheit - 32) * 5/9 ;

    printf("The value of this farenheit temperature in celsius is %f", celsius);
    return 0;
}