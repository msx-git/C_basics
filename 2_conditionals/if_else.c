#include <stdio.h>
#include <stdbool.h>

void describeTemp(double degreesF);
bool isLeapYear(int year);

int main(void)
{
    describeTemp(85);

    int year = 2004;

    if (isLeapYear(year))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap.\n", year);
    }
}

void describeTemp(double degreesF)
{
    char *message;
    if (degreesF >= 100.0)
        message = "hot! Stay in the shade.";
    if (degreesF < 100.0 && degreesF >= 80.0)
        message = "perfect weather for swimming.";
    if (degreesF < 80.0 && degreesF >= 60.0)
        message = "very comfortable.";
    if (degreesF < 60.0 && degreesF >= 40.0)
        message = "chilly.";
    if (degreesF < 40.0 && degreesF >= 20.0)
        message = "freezing, but good skiing weather.";
    if (degreesF < 20.0)
        message = "way too cold to do much of anything!";
    printf("%g°F is %s\n", degreesF, message);
}

bool isLeapYear(int year)
{
    bool isLeap = false;
    // Gregorian calendar leap year calculation.
    // Cannot use years before 1 using BC or BCE year notation.
    if ((year % 4) != 0) // Year is not a multiple of 4.
        isLeap = false;
    else if ((year % 400) == 0) // Year is a multiple of 400.
        isLeap = true;
    else if ((year % 100) == 0) // Year is multiple of 100.
        isLeap = false;
    else
        isLeap = true; // Year is a multiple of 4 (other conditions 400
                       // years, 100 years) have already been considered.
    return isLeap;
}