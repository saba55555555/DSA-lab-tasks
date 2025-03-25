#include<iostream>
using namespace std; 

int main()
{
    int arr[10] ;
    int size = 5;      
    int value;
 cout<<"Enter the 5 numbers to Arrays:";
	for (int i=0;i<size;i++){
		cin>>arr[i];	
	}
   cout << "Enter the first number to add at the start: ";
    cin >> value;
    for (int i = size; i > 0; i--) {
   arr[i] = arr[i-1];
    }
    arr[5] = value; 
    size++; 
   cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
  cout << arr[i] << " ";
    }
 return 0;
}

