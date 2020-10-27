#include <stdio.h>
#include <stdlib.h>

int main()
{ /*%s is a conversion character for stings
    and for whole numbers we can use %d and for decimal numbers we use %f
    and by default it would print out 6 digits for decimals but we can change
    it by adding %.2f to print 2 decimals after the decimal point and we can
    write any number instead of 2 to obtain different number of decimal eg. %4f
    for 4 decimals after the decimal point it means it will exchange it with the
    number after the comma and we need to put strings in double quotations where
    as whole numbers and decimals dont go in double quotations
    */
    printf("%s is the best %s ever\n", "haziq", "student");
    printf("haziq is %d years old\n", 13);
    printf("and %d divided by %d equals %f\n", 7, 2, 3.500000);
    printf("%d divided by %d equals %.2f\n", 7, 2, 3.50);
    return 0;
}
