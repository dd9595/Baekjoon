#include <iostream>

using namespace std;



int main()
{
	// �� 10�� �Է�
	// 42�� ���� �������� ����
	// ���� �ٸ� ���� �� �� �ִ°�

	int arr[10];
	int arrSize = sizeof(arr) / sizeof(int);
	int count = 0;

	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}

	// 0~9���� ���� ���� �ִ� �� Ȯ��
	// ���� ���̸� -1�� �ٲ�
	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i + 1; j < arrSize; j++)
		{
			if (arr[j] == -1) continue;
			if (arr[i] == arr[j]) arr[j] = -1;
		}
	}

	// 0���� ū ���� �� ������ Ȯ��
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] >= 0) count++;
	}

	cout << count << endl;
}