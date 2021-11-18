int	ft_strlen(const char *s)
{
	char	*str;

	str = (char *)s;
	while (*s)
		s++;
	return (s - str);
}
