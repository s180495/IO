#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int wordCount = 0;
	string word;

	while (cin >> word) wordCount++;

	cout << "antall ord: " << wordCount << endl;
}
