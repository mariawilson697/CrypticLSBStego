#include <stdio.h>
#include<string.h>
#include "encode.h"
#include "types.h"

int main(int argc, char *argv[])
{
   int res = check_operation_type(argv);
   if(res == e_encode)
   {
        printf("Selected Encoding");
   }
   else if(res == e_decode)
   {
        printf("Selected Decoding");
   }
   else if(res == e_unsupported)
   {
        printf("Error: Invalid option \n");
        printf("Usage: For Encoding ./a.out -e beautiful.bmp secret.txt [stegno.bmp] ");
        printf("     : For Decoding ./a.out -d beautiful.bmp secret.txt [stegno.bmp] ");
   }

    return 0;
}

OperationType check_operation_type(char *argv[])
{
    if ((strcmp(argv[1], "-e")) == 0)
    {
        return e_encode;
    }
    else if((strcmp(argv[1], "-d")) == 0)
    {
        return e_decode;
    }
    else
    {
        return e_unsupported;
    }
}