#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
    printf("Enter: \n");
    height = GetInt();
    } while (height < 0 || height > 23);

    for(int r=1; r <=height; r++)
    {
    int spaces = height - r;
    
    int hashes = r + 1;
    
        for( int s = 1; s <= spaces; s++)
        {
            printf(" ");
        }
        for( int hs = 1; hs <= hashes; hs++)
        {
            printf("#");
        }
     printf("\n");
        }
}