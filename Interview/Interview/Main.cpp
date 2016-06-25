#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

template<class T>
void PrintAllNumber(T *array,size_t size)
{
	if (!array)
	{
		printf("Error!!!\n");
		return;
	}
	cout << "Begin Print!" << endl;
	for (size_t i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl<< "End Print!"<<endl;
}

template<class T>
void Swap(T &Left, T &Right)
{
	T temp;
	temp = Left;
	Left = Right;
	Right = temp;
}

//µ¥ÏòÃ°ÅÝ
template<class T>
void SortArray(T *array, size_t size)
{
	T Temp;
	for (size_t i = 0; i < size - 1; ++i)
	{
		bool IsTure = true;
		for (size_t j = 0; j < size - 1 - i; ++j)
		{
			if (array[j] > array[j + 1])
			{
// 				Temp = array[j + 1];
// 				array[j + 1] = array[j];
// 				array[j] = Temp;
				Swap(array[j + 1], array[j]);
				IsTure = false;
			}
		}
		if (IsTure)
			break;
	}
}

//Ë«ÏòÃ°ÅÝ
template<class T>
void DoubleSortArray(T *array, size_t size)
{
	if (!array && size == 0)
	{
		printf("Error!!!\n");
		return;
	}

	T Left = 0, Right = size - 1,mid = 1;
	int SaveCount = 0;
	while (Left < Right)
	{
		for (size_t i = Left; i < Right; ++i)
		{
			if (array[i] > array[i + 1])
			{
				Swap(array[i], array[i + 1]);
				mid = i;
				PrintAllNumber(array, size);
			}
			cout << "Left!!!!" << endl;
		}

		Right = mid;
		for (int i = Right - 1; i >= Left; --i)
		{
			if (array[i] > array[i + 1])
			{
				Swap(array[i], array[i + 1]);
				mid = i + 1;
				PrintAllNumber(array, size);
			}
			cout << "Right!!!!" << endl;
		}
		Left = mid;

		SaveCount++;
	}

	cout << "SaveCount:" << SaveCount << endl;
}


union A
{
	int a;
	char b[2];
}a;

int main()
{

	system("pause");
	return 0;
}

void TestSort()
{
	int *IntArray = new int[5]{ 5,2,3,1,7 };
	size_t size = 5;

	SortArray<int>(IntArray, size);
	vector<int> vec;
	for (int i = 0; i < 5; ++i)
	{
		vec.push_back(IntArray[i]);
	}
	PrintAllNumber(IntArray, 5);
	printf("************************************************\n");

	int *IntArray2 = new int[5]{ 5,2,3,1,7 };
	DoubleSortArray<int>(IntArray2, size);

	printf("***********************************************\n");


	a.b[0] = 10;
	a.b[1] = 1;
	cout << "a:" << a.a << endl;
}