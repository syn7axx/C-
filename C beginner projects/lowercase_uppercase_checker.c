#include <stdio.h>

int main()
{
    char character;
    printf("Enter character : ");
    scanf("%c",&character);
    int ascii = character;
    
    if(ascii>=65 && ascii<=90)
        printf("Character \"%c\" is Uppercase.",character);     
    else if(ascii>=97 && ascii<=122)
        printf("Character \"%c\" is Lowercase",character);
    else
        printf("Character is is not letter.");
    
    
    return 0;
}