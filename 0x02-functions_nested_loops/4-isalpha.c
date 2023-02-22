#include "main.h"
/**
 * _isalpha - checks the alphabetical letters
 * @c: character to be checked
 * Return: 1 and 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
