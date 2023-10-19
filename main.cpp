#include <iostream>

using namespace std;

int main() {
    int n;
    int factorial = 1;

    cout << "Enter a non negative number: ";
    cin >> n;

    if(n<0)
      cout << "Error";
    else if(n==0)
      cout << "0! = 1";
    else{
      int x = 1;
    while(x <= n){
      factorial *= x;
      x++;
      }
    }
    cout << n << "! = " << factorial;

    return 0;
}
