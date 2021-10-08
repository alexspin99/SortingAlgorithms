#include<iostream>

using namespace std;

void Swap(int[], int, int);
void SelectionSort(int[]);
void InsertionSort(int[]);
void BubbleSort(int[]);
void QuickSort(int[], int, int);
void MergeSort(int[]);



int main() {

	int algorithm;
	int numArray[9] = { 54, 26, 93, 17, 77, 31, 44, 55, 20 };

	cout << "Select a Sorting algorithm, type the number only\n";
	cout << "1. Selection Sort\n2.Insertion Sort\n3.Bubble Sort\n4.Quick Sort\n5.Merge Sort\n";
	cin >> algorithm;

	switch (algorithm) {
	case 1:
		SelectionSort(numArray);
		break;
	case 2:
		InsertionSort(numArray);
		break;
	case 3:
		BubbleSort(numArray);
		break;
	case 4:
		QuickSort(numArray, 0, 8);
		break;
	case 5:
		MergeSort(numArray);
		break;
	default:
		cout << "Invalid Entry.  Must enter a nunber from 1-5.";
		break;
	}

	cout << "\nProgram Completed, press enter to close.";
	cin >> algorithm;


	return 0;
}

void Swap(int arr[], int i, int j) {
	int swap = arr[j];
	arr[j] = arr[i];
	arr[i] = swap;
}

//Selection Sort will start at finding lowest number
void SelectionSort(int arr[]) {
	cout << "\nUsing Selection Sort.";
	cout << "\nOriginal Array: ";
	
	int size = 9;
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	int minIndex;

	cout << "\nSorted Array: ";
	for (int i = 0; i < size; i++) {

		//finds minimum element
		minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}

		//swap min element if needed
		if (minIndex != i) 
			Swap(arr, i, minIndex);

		cout << arr[i] << ", ";
	}
}

void InsertionSort(int arr[]) {
	cout << "\nUsing Insertion Sort.";
	cout << "\nOriginal Array: ";

	int size = 9;
	int key, j;
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";

	cout << "\nSorted Array: ";
	for (int i = 1; i < size; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && key < arr[j]) {
			Swap(arr, j, j + 1);
			j--;
		}
	}
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
}

void BubbleSort(int arr[]) {
	cout << "\nUsing Bubble Sort.";
	cout << "\nOriginal Array: ";

	int size = 9;
	int key, j;
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";

	cout << "\nSorted Array: ";
	for (int unsorted = size; unsorted > 0; unsorted--) {
		for (int i = 0; i < size; i++) {
			if (arr[i + 1] < arr[i])
				Swap(arr, i, i + 1);
		}
	}
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
}


int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++; 
			Swap(arr, i, j);
		}
	}
	Swap(arr, i + 1, high);
	return (i + 1);
}

void QuickSort(int arr[], int start, int end)
{
	//continues dividing problem until low == high
	if (start < end)
	{
		int pivot = partition(arr, start, end);

		// quicksort elements below pivot and above pivot
		QuickSort(arr, start, pivot - 1);
		QuickSort(arr, pivot + 1, end);
	}

	cout << "\nSorted Array: ";
	int size = 9;
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
}



void MergeSort(int arr[], int low, int high) {
	


	cout << "\nSorted Array: ";
	int size = 9;
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
}

