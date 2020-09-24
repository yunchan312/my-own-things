#include <iostream>
using namespace std;
//modify
int main(void)
{
	int something, answer = 1;
	cin >> something;

	for (int i = 0; i < 10; i++)
	{
		answer *= something;
	}

	cout << answer;

	return 0;
}

