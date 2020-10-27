#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    this program is just printing on the screen haziqs age
    is 13 but it includes 3 variables that are defined to find
    age without actually telling it the age and it automatically
    finds out the age and prints it out on the screen
    */
    int age;
    int currentyear;
    int birthyear;

    currentyear = 2017;
    birthyear = 2004;
    age = currentyear - birthyear;
    printf("haziq is %d years old\n",age);
    return 0;
}
