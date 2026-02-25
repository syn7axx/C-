#include <stdio.h>

int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
#include <stdbool.h>
    bool leap = false;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        leap = true;
    }
    if (leap == true)
    {
        printf("Yes %d is a leap year.", year);
    }
    else
    {
        printf("No %d is not a leap year.", year);
    }
    return 0;
}