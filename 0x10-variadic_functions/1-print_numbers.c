#include "variadic_functions.h"
#include <stdio.h>

void print_numbers(const char *seperator, const unsigned int, ...)
{
  va_list numbers;
  unsigned int i;

  va_start(numbers, n);
  for (i =0; i < n; i++)
    {
      printf("%d", va_arg(numbers, unisigned int));
      if(i < (n - 1) && seperator != NULL)
	printf("%s", seperator);
    }
      va_end(numbers);
      printf("\n")
	}	
