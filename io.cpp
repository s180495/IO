#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
	int wordCount = 0;
	string word;

	while (getline(cin, word, ' '))
		for(int i = 0; i < word.length(); i++)
		{
			if (!isspace(word[i]))
			{
		 		wordCount++;
				break;
			}
		}

	cout << "antall ord: " << wordCount << endl;
}
