//--------------------------------------\\
Print diamond pattern using a single array
#include<iostream>
using namespace std;
int main() {
//n represents number of rows:
int n, half; 

//taking input from user:
cout<<"Enter the number of rows for diamond"<<endl;	
cin>>n;	

//delaring character array:													
char diamond[n];  
half = n/2;

//replacing elements of array with spaces:
    for ( int i = 0; i<n; i++ ) {
	    diamond[i] = ' ';
	    }
	
//for row :
	for ( int i = 0; i<= half; i++ ) {
	    diamond[half] = '*';	
	    diamond[half - i] = '*';
	    diamond[half + i] = '*';
	
//for column :	
	for ( int j = 0; j<n; j++ ) {
		cout<<diamond[j];	
	    }
     	cout<<endl;} // to move onto the next column used endl:

//for bottom rows :
	for ( int i = half; i >= 1; i-- ) {	
	    diamond[half - i] = ' ';
	    diamond[half + i] = ' ';
	
	for ( int j = 0; j<n; j++) {
		cout<<diamond[j];
		}
		cout<<endl; // to move onto the next row used endl :
		}
		return 0;
}
