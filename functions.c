//Functions for sem4

int hex_to_dec(char array_hex[])
{
	int dec = 0;
	int buffer;

	for (int i = 0; array_hex[i] != '\0'; i++)
	{
		if (array_hex[i] >= '0' && array_hex[i] <= '9')
		{
			buffer = array_hex[i] - '0'; //С помощью разности номеров в таблице ANCII
		}				  //производим перевод в целочисленное значение
						  //
		else if (array_hex[i] >= 'A' && array_hex[i] <= 'F')
		{
			buffer = array_hex[i] - 'A' + 10; // То же самое, но с переводом в деятичную систему
		}

		else if (array_hex[i] >= 'a' && array_hex[i] <= 'f')
		{
			buffer = array_hex[i] - 'a' + 10; //С учетом регистра
		}
		else return -1;

		dec = dec * 16 + buffer;


	}

	return dec;

}

int bin_count(int dec)
{
	int b = 1; 
	int c = 0;
	while (b <= dec)
	{
		if ((dec & b) != 0)
			c++;
		b<<=2;
	}
	return c;
}
