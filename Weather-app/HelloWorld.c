#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("The temp is currently in Celcius");
    } else if (unit == 'F'){
        printf("The temp is currenly in F");
    } else {
        printf("\n %c is not a valid unit of measuremnet", unit);
    } 
    
    

    return 0;
}