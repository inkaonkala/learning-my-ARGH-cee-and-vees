
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char 	r;
	unsigned char	len;

	r = 0;
	len = 8;

	while(len--)
	{
		r = (r << 1) | (octet & 1);
		ocet >>= 1;
	}
	return (r);
}
