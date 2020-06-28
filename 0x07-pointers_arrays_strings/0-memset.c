char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
		*s++ = b;
	return (s);
}
