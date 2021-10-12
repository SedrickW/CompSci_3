/* oneChar.c
 * Writes a single character on the screen.
 * 2017-09-29: Bob Plantz
 */

#include <iostream>
#include <fstream>

int main(void)
{
    char aLetter = 'A';
    std::basic_ostream::write(STDOUT_FILENO, &aLetter, 1); // STDOUT_FILENO is
                                       // defined in unistd.h
    return 0;
}