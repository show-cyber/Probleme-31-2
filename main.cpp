#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int ReadNUmber(string message)
{
	int Number;
	do {
		cout << message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int LimitOfArray(int from, int to)
{
	int RandomNum = rand() % (from - to + 1) + from;
	return RandomNum;
}
void fillArrayRandom(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = LimitOfArray(1, 100);
	}
}
void ReseveOfArray(int arr[100], int length, int Reseve[100])
{
	for (int i = 0; i < length; i++) 
	{
		Reseve[i] = arr[length - i - 1];
	}
}
void PrintOfArray(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int Reseve[100];
	int length = ReadNUmber("Enter Number Plesse?? ");

	fillArrayRandom(arr, length);
	cout << "The Array Random :";
	PrintOfArray(arr, length);

	cout << endl;

	ReseveOfArray(arr, length,Reseve);
	cout << "The Array Random Reseve :";
	PrintOfArray(Reseve, length);


}