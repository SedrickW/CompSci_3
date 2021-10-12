/* echoChar1.c
 * Echoes a character entered by the user.
 * 2017-09-29: Bob Plantz
 */

#include <unistd.h>

int main(void)
{
    char *aLetter;
    char* starting_pos = aLetter;
    write(STDOUT_FILENO, "Enter a line of character: ", 27); // prompt user
    while (*aLetter != '\n')
    {
        read(STDIN_FILENO, &aLetter, 1);                   // whole line of characters
        aLetter++;
    }
    *aLetter = '/0';

    write(STDOUT_FILENO, "You entered: ", 13);         // message
    while (starting_pos != aLetter)
    {
        write(STDOUT_FILENO, &starting_pos, 1);                 // echo character
        starting_pos++;
    }
    return 0;
}