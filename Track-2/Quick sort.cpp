#include<bits/stdc++.h>
 
using namespace std;
 

void swap(int *a, int *b)
{
 int temp; 
 temp = *a;
 *a = *b;
 *b = temp;
}
 

int Partition(vector<int> &a, int low, int high)
{
 int pivot, index, i;
 index = low;
 pivot = high;
 
 
 for(i=low; i < high; i++)
 {
  if(a[i] < a[pivot])
  {
   swap(&a[i], &a[index]);
   index++;
  }
 }
 
 swap(&a[pivot], &a[index]);
 
 return index;
}
 

int RandomPivotPartition(vector<int> &a, int low, int high)
{
 int pvt, n, temp;
 n = rand();
 
 pvt = low + n%(high-low+1);
 
swap(&a[high], &a[pvt]);
 
 return Partition(a, low, high);
}
 
int QuickSort(vector<int> &a, int low, int high)
{
 int pindex;
 if(low < high)
 {
  pindex = RandomPivotPartition(a, low, high);
  QuickSort(a, low, pindex-1);
  QuickSort(a, pindex+1, high);
 }
 return 0;
}

//code start compiling here
int main()
{
 
 int i,n;
 vector<int> v;
 
 while(n!=0) {
 cout<<"\nEnter the an element to a list to be sorted(enter 0 to end): \n";
 cin>>n;
 v.push_back(n);
 
 } 
 
 cout<<"\nBefore sorting: ";
 for (i = 0; i < v.size(); i++)
         cout<<v[i]<<" ";
 
 QuickSort(v, 0, v.size()-1);
 
 
 cout<<"\nAfter sorting: ";
 for (i = 0; i < v.size(); i++)
         cout<<v[i]<<" ";
         

 return 0;
}
