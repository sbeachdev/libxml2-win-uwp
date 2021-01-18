
#include "winuwpcompat.h"

char *getcwd(char *buffer, unsigned int size)
{
    /* Windows CE don't have the concept of a current directory
    * so we just return NULL to indicate an error
    */
    return 0;
}


//char *getenv(const char *varname)
//{
//    return 0;
//}
