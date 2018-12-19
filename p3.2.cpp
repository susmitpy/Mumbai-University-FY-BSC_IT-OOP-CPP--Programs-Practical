#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Geometry
{
public:
  float volume(float);
  float area(float);
  float area(float, float);
};

float Geometry::volume(float r)
{
  // Volume of sphere
  return (4.0/3) * 3.1415 * pow(r, 3);
}

float Geometry::area(float r)
{
  //Area of sphere
  return 4 * 3.1415 * pow(r, 2);
}

float Geometry::area(float l,float b)
{
  // Area of rectangle
  return l * b;
}


int main()
{
  Geometry Geo;
  int r, l, b;
  cout << "Enter radius for sphere: " << endl;
  cin >> r;
  cout << "Volume: " << Geo.volume(r) << "\nArea: " << Geo.area(r) << endl;
  cout << "Enter length and breadth of rec separated by space: " << endl;
  cin >> l >> b;
  cout << "Area: " << Geo.area(l,b) << endl;

  return 0;
}
