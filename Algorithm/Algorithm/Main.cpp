#include <iostream>
#include <vector>

using namespace std;
template<class T>
void BubblingSort(T *array, int nSize)
{
	if (nSize < 0)
		return;
	for (int i = 0; i < nSize; ++i)
	{
		for (int j = i + 1; j < nSize; ++j)
		{
			if (array[i] > array[j])
			{
				T temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

template<class T>
void InsertSort(T *array, int nSize)
{
	if (nSize < 0)
		return;
	T temp = array[0];
	for (int i = 1; i < nSize; ++i)
	{
		if (array[i] < temp)
		{

		}
	}
}

template<class T>
void CoutNumber(T *array, int nSize)
{

	cout << "Number:";
	for (int i = 0; i <= nSize; ++i)
	{
		cout << array[i]<<" "£»
	}
	cout << endl;
}

int main()
{
	int nSize = 7;
	int *vec = new int[nSize]{ 3, 1, 5, 2, 4, 99, 76 };
	//vector<int> vec{ 3,1,5,2,4 };

	BubblingSort<int>(vec, nSize);
	cout << "stop" << endl;
	delete[] vec;
	return 0;
}