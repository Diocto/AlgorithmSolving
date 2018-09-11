#include<iostream>
using namespace std;
//solved using counting sort
int N;
short *counts;
int main()
{
	cin >> N;

	short counts[10001] = { 0, };
	for (int n_i = 0; n_i < N; n_i++)
	{
		int tmp;
		scanf("%d", &tmp);
		counts[tmp]++;
	}
	int n = 0;
	for (int n_i = 0; n_i < 10001; n_i++)
	{
		while (counts[n_i] > 0)
		{
			n++;
			counts[n_i]--;
			printf("%d\n", n_i);
		}
	}
	return 0;
}
