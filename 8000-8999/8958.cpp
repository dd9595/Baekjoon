#include <iostream>
#include <string>

using namespace std;

int main()
{
	int testCase;
	string ox;

	cin >> testCase;

	while(testCase--)
	{
		int bestScore = 0, totalScore = 0;
		cin >> ox;
		
		// ���ڿ� Ž��
		for (int i = 0; i < ox.length(); i++)
		{
			if (ox[i] == 'O')
			{
				totalScore++;
			}
			else
			{
				totalScore = 0;
			}

			bestScore += totalScore;
		}
		
		cout << bestScore << endl;
	}
}