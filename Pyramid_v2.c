// build a half pyramid from users input

#include <stdio.h>
#include <cs50.h>

int main(void)
{
	// declare integer which represents the users input, height
	
    int height;
    do
    {
    	    // obtain height number for pyramid, accept only numbers 1 - 22
    	    
    printf("Enter: \n");
    height = GetInt();
    } while (height < 0 || height > 23);

    // loop through each row up until the top row(height) of the pyramid is
    // reached
    
    for(int r=1; r <=height; r++)
    {
    	    // create variables based on the design pattern of mario's pyramid
    	    
    int spaces = height - r;
    
    int hashes = r + 1;
    
    // loop through the spaces variable printing spaces for the needed amount
    // of spaces
    
        for( int s = 1; s <= spaces; s++)
        {
            printf(" ");
        }
        
     // loop through the hashes variable printing hashes for the needed amount
        
        for( int hs = 1; hs <= hashes; hs++)
        {
            printf("#");
        }
     printf("\n");
        }
}
