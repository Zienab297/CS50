#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // make the user enter a number
    int h = 0;
    do
    {
        h = get_int("Height: ");
    }
    
    while (h < 1 || h > 8);

    for (int i = 0; i < h; i++)   
    {
        // print leading spaces
        
        for (int s = 0; s < h - i - 1; s++)
        {
            printf(" ");
        }   
        
        // print left-side Deshes
        for (int x = h - i; x <= h; x++)
        {
            printf("#");
                
        }
        // print gap
        printf("  ");
          
        // print right-side hashtags
        for (int x = h - i; x <= h; x++)
        {
            printf("#");
        }
        
        // move to new line
        printf("\n");
    }
    return 0;
}
