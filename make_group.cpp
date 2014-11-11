#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main () {
  int no,n1; 
  string arr[20] ;
  int num,group;

  cout << "Enter number of persons per group : " ;
  cin >> group;

  cout << "Enter number of members : " ;
  cin >> num;
  
  cout << "Enter the names : ";
  for (int i = 0; i< num ; i++) {
    cin >> arr[i];
  }
  int a[num];
  for (int j = 0 ; j<num; j++) {
    a[j] = 0;
  }

  int c = 1;
  cout << "Names are : " ;
  for (int j = 0; j< num; ) {
    
    n1 = rand() % 1000 + 1;
    no = n1 % num;
    
    if (a[no] == 0 )
    {
      if ( j%group == 0 )
      cout << "\nGroup"<< c++;
      
      j++; 

      a[no] = no;
      cout << "\t" << arr[no] << "\n"; 
    }
  } 
  return 0;  
}
