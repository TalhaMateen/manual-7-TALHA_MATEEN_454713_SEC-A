//Take 10 integer inputs from user and store them in an array and print them on screen.
//-----------------------------------------------------------------------------//

#include <iostream>
using namespace std;
int main(){

//declaring array of 10 elements and getting input from user
int arr[10];
cout<<"Please enter 10 values : "<<endl;
 
 
 for(int i=0; i<10; i++){
        cout<<"enter the value of array at "<<i+1<<" : \n";
        cin>>arr[i]; } // getting values from user in array
  
    for(int i=0; i<10; i++)
//printing values from user
        {cout<<arr[i]<<" ";}

return 0;}

