#include <iostream>
#include <string>
using namespace std;





int main ()
{
int x, y;    // Int Variables
int product;    // Int Variable

cout << "Type a num for x: "; // Output a text massage for user
cin >> x; // Initialize the variable x

cout <<"Type a num for y: "; // Output a text massage for user
cin >> y; // Initialize the variable y

product = x * y; // product is equal to x multiplied y
cout << "Product is: " << product << endl; // Output product

return 0; // terminates

}