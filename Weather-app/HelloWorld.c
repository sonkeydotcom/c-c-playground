#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter the temp in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in Farenheit is: %.1f degree Celciusc", temp);
    } else if (unit == 'F'){
        printf("\nEnter the Temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in Celcius is: %.1f degree F", temp);

    } else {
        printf("\n %c is not a valid unit of measuremnet", unit);
    } 
    
    

    return 0;
}