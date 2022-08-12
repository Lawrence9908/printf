#include "main.h"

/**
* get_size - fuction to caluculate the
* size of cast the argument
* @format: formatted string 
* @i: list of arguments
* Return: returns precision
*/
int get_size(const char *format, int *i)
{
    int current_index = *i + 1, size = 0;

    if (format[current_index] == '1')
    {
        size = S_LONG;
    }
    else if (format[current_index])
    {
        size = S_SHORT;
    }
    
    if (size == 0)
    {
        *i = current_index -1;
    }
    else{
        *i = current_index;
    }
}