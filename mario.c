#include<cs50.h> //to include cs50 
#include<stdio.h>

void pyramid(int n);

int main(void)
{
    int H;
    do
    {
        H = get_int("Height: "); // to make the user enter the height
    }
    while (H <= 0 || H > 8);
    pyramid(H);
}
void pyramid(int n)
{
    int S;     
    int D;
    for (int i = 1; i < n + 1; i++)
    {
        for (S = (n - i); S >= 1; S--) //space
        {
            printf(" ");
        }
        for (D = 1; D <= i; D++) //dashes
        {
            printf("#");
        }
        printf("\n");
    }
}
