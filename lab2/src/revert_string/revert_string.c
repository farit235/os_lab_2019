#include "revert_string.h"
#include "string.h"

void RevertString(char *str)
{
	char tmp;
    int length = strlen(str);
    for(int i=0 ; i<length/2;i++)
    {
        tmp = str[i];
        str[i]=str[length - i - 1 ];
        str[length - i - 1] = tmp;
    }
}

