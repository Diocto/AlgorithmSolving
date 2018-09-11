#include<iostream>
#include<vector>
using namespace std;

int N;

int partition(short* elements, int start, int end);

void quickSort(short* elements, int start, int end)
{
	if (start >= end)
		return;
	int pivot = partition(elements, start, end);
	quickSort(elements, start, pivot - 1);
	quickSort(elements, pivot + 1, end);

}
int partition(short* elements, int left, int right)
{
	int mid = (left + right) / 2;
	swap(elements[left], elements[mid]);
	int pivot = elements[left];
	int i = left, j = right;
	while (i < j)
	{
		while (pivot < elements[j])
		{
			j--;
		}
		while (i < j && pivot >= elements[i])
		{
			i++;
		}
		swap(elements[i], elements[j]);
	}
	elements[left] = elements[i];
	elements[i] = pivot;
	return i;


}
int main()
{
	cin >> N;
	short* elements;
	elements = new short[N]();
	for (int n_i = 0; n_i < N; n_i++)
	{
		cin >> elements[n_i];
	}

	quickSort(elements, 0, N - 1);

	for (int n_i = 0; n_i < N; n_i++)
	{
		cout << elements[n_i] << endl;
	}
	return 0;
}
