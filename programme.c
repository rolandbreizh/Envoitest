#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void one()
{
    printf("test réussi\n");
}

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        printf("mot de passe incorrect\n");
        return 1;
    }
    if(strcmp(argv[1], "cristot") == 0)
    {
        one();
        return 0;
    }
    printf("mot de passe incorrect\n");
    return 1;
}

