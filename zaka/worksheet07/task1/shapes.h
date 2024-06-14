#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
#include <cmath>

// Abstract classes
class Form
{
	public:
		virtual 
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

#endif // SHAPES_H
