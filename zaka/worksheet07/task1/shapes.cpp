#include <iostram>

using namespace std;

int main()
{
	return 0;
}

// Base classes
class Form
{

}

class TwoDimensional : public Form
{

}

class ThreeDimensional : public Form
{

}

// concrete classes
class Triangle : public TwoDimensional
{

}

class Rectangle : public TwoDimensional
{

}

class Square : public TwoDimensional
{

}

class Crate : public ThreeDimensional
{

}

class Cylinder : public ThreeDimensional
{
	
}

class Pyramid : public ThreeDimensional
{

}

class sphere : public ThreeDimensional
{

}
