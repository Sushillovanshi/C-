/*#include<iostream>
using namespace std;
    main()
    {
        int a,b,c,d,e;
        cout<<"enter any 3 digit no\n";
        cin>>a;//342
        b=a/100;//3
        c=a%100;//42
        d=c/10;//4
        e=c%10;//2
        cout<<"sum of 3 digit n=342"<<b+d+e;
    }*/


// Arithmetic Logical opertor...

/*#include<iostream>
using namespace std;
main()
{
    int a;
    a= 12 && 34;
    cout<<a;
}*/

#include <iostream>

using namespace std;

int main() {
  // Declare variables
  float p, r, t, si;

  // Get input from the user
  cout << "Enter the principal amount: ";
  cin >> p;

  cout << "Enter the rate of interest: ";
  cin >> r;

  cout << "Enter the time period: ";
  cin >> t;

  // Calculate simple interest
  si = (p * r * t) / 100;

  // Display the result
  cout << "The simple interest is: " << si << endl;

  return 0;
}
