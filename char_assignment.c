#include <stdio.h>
#include <stdlib.h>
/*
In this program char stands for charecter which is named 'name'
and is written as "Haziq sayyed" and we have to set aside a memory
to store this string each letter can take a space of 1 byte and we
have to set 1 byte aside for the string terminator. In the next line
it says in the character name change letter no. 2 to c which means
H = 0 , a = 1 , z = 2 so change z to c and print it again ant then
it says create a new character called food and it will take 7 bytes
1 for the string terminator and print then it says 'strcpy' which
means exchange the character food from chicken to meat and print again.
*/
int main()
{
    char name[13] = "Haziq sayyed";
    printf("my name is %s\n",name );
    name[2] = 'c';
    printf("my name is %s\n",name );
    char food[8] = "chicken";
    printf("The best food is %s\n",food );
    strcpy(food,"meat");
    printf("The best food is %s\n",food );
    return 0;
}
