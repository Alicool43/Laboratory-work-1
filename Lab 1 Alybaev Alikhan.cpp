                                                                    // Alybaev Alikhan Lab 1
// Task 1:
#include <iostream>
#include <string>

using namespace std;

int main() {
    string Name;
    cout << "Enter your name: ";
    cin >> Name;
    cout << "Hello, " << Name << "!" << endl;

 return 0;
}

// Task 2:
#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    int y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    int sum = x + y;
    cout << "The sum is " << sum << "." << endl;

 return 0;
}

// Task 3:
#include <iostream>
using namespace std;

int main() {
    float radius; 
    const float pi = 3.14; 

   cout << "Enter the radius of a circle: ";
   cin >> radius;  

    float area = pi * radius * radius; 

   cout << "The area is " << area << "." << endl; 

    return 0;
}

// Task 4:
#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    int y = 12;

   cout << "Enter your age in years : ";
   cin >> x;  
   
   int sum = x * y;

   cout << "You are " << sum << " months old" << "." << endl; 

    return 0;
}

// Task 5:
#include <iostream>
#include <string>
using namespace std;

int main() {
   float x;

   cout << "Enter the temperature in Celsius : ";
   cin >> x;  
   
   float sum = (x * 9/5) + 32;

   cout << "Temperature in Fahrenheit: " << sum << endl; 

    return 0;
}

// Task 6:
#include <iostream>
#include <string>
using namespace std;

int main() {
   int x;

   cout << "Enter the number : ";
   cin >> x;  
   
   int sum = x * x;

   cout << "The square is " << sum << "." << endl; 

    return 0;
}

// Task 7:
#include <iostream>
using namespace std;

int main(){
    double x;
    double y;
    double z;
    cout << "Enter principal amount: ";
    cin >> x;
    cout << "Enter rate of interest: ";
    cin >> y;
    cout << "Enter time in years: ";
    cin >> z;
    double SI = (x * y * z) / 100;
    cout << "Simple interest is " << SI << "." << endl;

    return 0;

}

// Task 8:
#include <iostream>
#include <string>
using namespace std;

int main() {
   double x;
   double y;

   cout << "Enter your weight in kg: ";
   cin >> x;
   
   cout << "Enter your height in meters: ";
   cin >> y;
   
   double sum = x / (y * y);
   cout << "Your BMI is " << sum << endl;


    return 0;
}

// Task 9:
#include <iostream>
using namespace std;

int main (){
    double x;
    double y; 
    double z;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Enter third number: ";
    cin >> z;

    double sum = (x + y + z) / 3;
    cout << "The average is " << sum << "." << endl;

    return 0;

}

// Task 10:
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2)
        cout << "The number is odd.\n";
    else
        cout << "The number is even.\n";

    return 0;
}