#include <stdio.h>
#include <string>
bool func(char a[])
{
	int x = 0;
	int o = 0;
	for (int i = 0; i < sizeof(a); i++)
	{
		if (a[i] == 'X' || a[i] == 'x')
			x++;
		if (a[i] == 'O' || a[i] == 'o')
			o++;
	}
	bool check = false;
	if (x == o)
		check = true;
	else
		check = false;
	return check;
}
int main()
{		
	char b[] = "XooX";
	printf("%d",func(b));	
}

