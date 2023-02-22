#include "main.h"
/**
 * _isalpha - checks the alphabetical letters
 * @c: character to be checked
 * Returns 'a','z','A','Z' if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
