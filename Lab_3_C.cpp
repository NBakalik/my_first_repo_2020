#include <stdio.h>
#include <string>
void func(char a[])
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
		printf("%d", 1);
	else
		printf("%d", 0);
}
int main()
{		
	char b[] = "XoooX";
	func(b);	
}

