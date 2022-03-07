#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 80;

void reversit(char s[]);

int main()
{
	void reversit(char[]);
	char str[MAX];

	cout << "Enter string: ";
	cin.get(str, MAX);
	reversit(str);
	cout << "Reverse string: ";
	cout << str << endl;

	system("pause");
	return 0;
}

void reversit(char s[])
{
	int len = strlen(s);

	for (size_t i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}