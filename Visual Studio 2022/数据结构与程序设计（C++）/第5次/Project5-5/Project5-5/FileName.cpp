#include<iostream>
using namespace std;
void Int(char* in, char* out);
int main()
{
	char c[100], result[100];
	cin.getline(c, 100);
	Int(c, result);
	cout << result;
}
void Int(char* in, char* out)
{
	int i = 0, n = 0,number, j, k;
	while (*(in + (i++)) != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		number = 1;
		j = i;
		while (*(in + i) != ' ')
		{
			if (!(in[i] >= '0' && in[i] <= '9'))
				number = 0;
			i++;
		}
		if (number == 1)
		{
			for (k = 0; k < i - j; k++)
				*(out + k) = *(in + (j+k));
			*(out + k) = '\0';
		}
	}
}