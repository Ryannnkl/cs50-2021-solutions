#include <cs50.h>
#include <stdio.h>

void build_pyramid(int height);

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    build_pyramid(height);
}

void build_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        for(int j = 0 ; j < height ; j++)
        {
            if(i + j < height - 1 )
            {
                printf(" ");
            } else {
                printf("#");
            }
        }
       printf("\n");
    }
}