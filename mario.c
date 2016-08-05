#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    do
    {
        printf("Height: ");
        height = GetInt();  
    }   while (height < 0 || height > 23);
    
    int counter;
    char* hash = "########################";
    char* spaces = "                        ";
    int num_of_spaces = height - 1;
    for (counter = 0; counter < height; counter++)
    {
            printf("%.*s", num_of_spaces, spaces);
            printf("%.*s\n", counter + 2, hash);
            num_of_spaces--;
    }
}
