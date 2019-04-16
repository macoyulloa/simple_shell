#include "shell.h"
/**                                                                             
 * freed - free an double pointer.                                              
 * @ptr: a double pointer.                                                      
 **/
void freed(char **ptr)
{
        unsigned int i;

        if (ptr == NULL)
                return;
        for (i = 0; ptr[i]; i++)
                free(ptr[i]);
        if (ptr[i] == NULL)
                free(ptr[i]);
        free(ptr);
}
