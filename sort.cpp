#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
void insertionSort(int *, int);
void selectionSort(int *, int);
void mergeSort(int *, int);
void printer(int *, int, string);

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
  }

  cout << "C++ Done" << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cout << p[i] << " ";
  // }
  // cout << "\n";
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
        temp = p[i];
        p[i] = p[index];
        p[index] = temp;
      }
    }
}

void insertionSort(int *p, int n)
{
  // cout << "Insertion Sort\n";
  int temp, value, curr_index;
  // printer(p, n, "Start");
  for (int i = 1; i < n;  i++)
  {
    // printer(p, n, "First Loop");
    value = p[i];
    curr_index = i;
    for (int j = i - 1; j >= 0; j--)
    {
      // printer(p, n, "Second Loop");

      if (p[j] > p[curr_index])
      {
        // printer(p, n, "Swapping");
        temp = p[j];
        p[j] = p[curr_index];
        p[curr_index] = temp;
        curr_index = j;
        // printer(p, n, "Swapped");
      }
    }
  }
}

void printer(int *p, int n, string mssg)
{
  cout << mssg << ": ";
  for (int i = 0; i < n; i++)
  {
    cout << p[i] << " ";
  }
  cout << "\n";
}
