// Akram Hassen
// Fundamentals of programming
// CS 1336
// Section:001
// Due: 2/28/23
// Finished: 2/27/23
// Submitted: 2/28/23
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

double circle, rectangle, triangle, quit, input, length, width, radius, base, height; //initializing all datas

const double pi = 3.14159; // setting pi to be a constant and setting circle, rectangle, triangle, and quit to be the 1-4 so when the user does an input
circle = 1;
rectangle = 2;
triangle = 3;
quit = 4;


cout << "Geometry Calculator" << endl << "\n";
cout << "\t" << "1. Calculate the Area of a Circle" << endl;
cout << "\t" << "2. Calculate the Area of a Rectangle" <<endl;
cout << "\t" << right << "3. Calculate the Area of a Triangle" <<endl;
cout << "\t" << right << "4. Quit" << endl;  

cin >> input; //user puts input
if (input == 1)
{
  cout << "What is the radius of the circle"; //interface asks radius of the circle
  cin >> radius; //ipnut the circle
  if (radius <= 0) //if radius is negative or 0, the interface prints an error
{
  cout << "Error: input is negative." <<endl;
  }
else{
circle = pi * (radius*radius); //multiply pi * radius squared
  cout << "Area of the circle: " << circle << endl;
  }
  }
if (input == 2) 
{
  cout << "What is the length of the rectangle? "; //interface asks length of the rectangle
  cin >> length; 
  cout << "What is the width of the rectangle? "; //iterface asks width of the rectangle
  cin >> width; 
   if (length <= 0 || width <= 0) //if  length or width is negative or zero, the interface prints an error
{
  cout << "Error: Length or Width is negative." <<endl; 
  }
  else {
      rectangle = length * width; //multiply length and width
  cout << "Area of the rectangle: " << rectangle << endl;
    }
  
  }

  if (input == 3)
  {
  cout << "What is the length of the triangles base? "; //asks what is the length of the base
  cin >> base;
  cout << "What is the height of the rectangle? ";//asks what is the height
  cin >> height;
  if (base <= 0 || height <= 0){ //if base or height is negative, the interface prints an error
  cout << "Error: Base or Height is negative." <<endl;
  }
    else{
  
  triangle = ((base * height) / 2); //multiplies base * height divided by 2
  cout << "Area of the triangle: " << triangle << endl;
      }
  }
  
if (input == 4) //if input is 4, then the program breaks.
{
  cout << "Goodbye!" << endl;
}
if (input < 1 || input > 4) //if input is less than 1 or more than 4, the screen will print an error
{
  cout << "Error: input is outside of range." <<endl;
}
  

return 0;
}