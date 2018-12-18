#include <iostream>
#include <string>


using namespace std;
void insertionSort(int *, int);
void selectionSort(int *, int);
void bubbleSort(int *, int);
void quickSort(int *, int);
void quickSorter(int *p, int left, int right);
int partition(int *p, int left, int right, int pivot);
// void mergeSort(int *, int);
// void merge(int *, int*, int *);

void swap(int *array, int a, int b);


int main(int argc, char* argv[])
{
  int arr[argc - 2];
  for (int i = 0; i < argc - 1; i++)
  {
     arr[i] = atoi(argv[i+1]);
  }

  int n = argc - 2;
  int *p = arr;

  switch(*(argv[argc - 1]))
  {
    case 'i':
      insertionSort(p, n);
      break;
    case 's':
      selectionSort(p, n);
      break;
    case 'b':
      bubbleSort(p,n);
      break;
    case 'q':
      quickSort(p,n);
      break;
  }

//  cout << "C++ Done" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << p[i] << " ";
  }
  cout << "\n";
  return 0;
}

void selectionSort(int *p, int n)
{
    // cout << "Selection Sort\n";
    int min, temp, index;
    for (int i = 0; i < n; i++)
    {
      min = p[i];
      index = i;
      for (int j = i+1; j < n; j++)
      {
        if (p[j] < min)
        {
          index = j;
          min = p[j];
        }
      }
      if (index != i)
      {
        swap(p, i, index);

      }
    }
}

void insertionSort(int *p, int n)
{
  // cout << "Insertion Sort\n";
  int temp, value, curr_index;

  for (int i = 1; i < n;  i++)
  {

    value = p[i];
    curr_index = i;
    for (int j = i - 1; j >= 0; j--)
    {


      if (p[j] > p[curr_index])
      {

        swap(p, j, curr_index);

        curr_index = j;

      }
    }
  }
}

void bubbleSort(int *p, int n)
{
  bool bubbled;
  for (int i = 0; i < n - 1; i++)
  {
    bubbled = false;
    for (int j = 0; j < n - 1; j++)
    {
      if (p[j] > p[j+1])
      {
        bubbled = true;
        swap(p, j, j+1);

      }
    }
    if (!bubbled)
    {
      break;
    }
  }
}

void quickSort(int *p, int n)
{
  // cout << "Starting quick sort" << endl;
  quickSorter(p, 0, n-1);
}

void quickSorter(int *p, int left, int right)
{
   if (left < right)
   {

     int pivot = p[((left+right) / 2)];

     int index = partition(p, left, right, pivot);

     quickSorter(p, left, index-1);
     quickSorter(p, index, right);
   }
}

int partition(int *p, int left, int right, int pivot)
{
  while (left <= right)
  {
    while (p[left] < pivot)
    {

      left++;
    }

    while (p[right] > pivot)
    {

      right--;
    }

    swap(p, left, right);
    left++;
    right--;


  }
  return left;

}

// void mergeSort(int *a, int n)
// {
//
// }
//
// void merge(int *l, int *r, int *a)
// {
//   int i, j, k, ln, rn;
//
// }
//
// int * divide(int *arr)
// {
//
// }

void swap(int *array, int a, int b)
{
  int temp = array[a];
  array[a] = array[b];
  array[b] = temp;
}
