int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c ^ 0x20);
	return (c);
}
