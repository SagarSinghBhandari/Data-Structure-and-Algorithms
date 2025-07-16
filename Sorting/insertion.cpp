#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
  for (auto x : arr)
    cout << x << " ";
  return;
}

int main()
{
  // your code goes here
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Before Sorting: ";
  print(arr);
  cout << endl;

  for (int i = 1; i < n; i++)
  {
    int temp = arr[i], j = i - 1;
    while (j >= 0 && temp < arr[j])
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
  cout << "After Sorting: ";
  print(arr);
}
/*
Recursive:
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
  for (auto x : arr)
    cout << x << " ";
  return;
}

void insertionSort(vector<int>&arr,int i){
    if(i>=arr.size()) return;
    int temp = arr[i],j=i-1;
    while(j>=0 && temp<arr[j]){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
    insertionSort(arr,i+1);
}

int main() {
  // your code goes here
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
  cout << "Before Sorting: ";
  print(arr);
  cout << endl;

  insertionSort(arr,1);
  cout << "After Sorting: ";
  print(arr);

}

*/
