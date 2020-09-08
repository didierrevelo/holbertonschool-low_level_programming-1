#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#   define DLL_EXPORT __declspec(dllexport)
#else
#    define DLL_EXPORT
#endif
/**
 *sub - two integers
 *@a: number
 *@b: number
 *
 *Return: return the sum
 */
DLL_EXPORT int sub(int a, int b)
{
    return (a - b);
}