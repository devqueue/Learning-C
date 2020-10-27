#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[20];
    char crush[20];
    int numberofsiblings;
    printf("what is your name?\n");
    scanf("%s", firstName);
    printf("what is your crush's name?\n");
    scanf("%s", crush);
    printf("how many siblings do you have?\n");
    scanf("%d", &numberofsiblings);
    printf("Your name is %s. You have a crush on %s\n You have %d siblings\n", firstName , crush, numberofsiblings);
    return 0;
}













