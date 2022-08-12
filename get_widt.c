#include "main.h"

/*
* get_width - function that calculate the width for printing
* @format: formatted string 
* @data:list of arguments
* @i: list of agurments to be printed
* Returns: returns widths
*/
int get_width(const char *format, va_list data, int *i)
{
    int current_index, width;

    for ( current_index = *i + 1; format[current_index] != '\0'; current_index++)
    {
        if (is_digit(format[current_index]))
        {
            width *= 10;
            width += format[current_index] - '0';
        }
        else if (format[current_index] == '*')
        {
            current_index++;
            width = va_arg(list);
            break;
        }
        else
        {
            break;
        }
    }
    *i = current_index - 1;

    return (width);
}