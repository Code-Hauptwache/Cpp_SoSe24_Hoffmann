#include <iostream>

#ifndef COMPLX_H
#define COMPLX_H

namespace ToComplx
{
	class Complx
	{
		private:
			double re;
			double im;

		public:
			explicit Complx(double r, double i) : re{r}, im{i}		// Konstruktor
			{
				 std::cout << "Konstruktor aufgerufen" << std::endl;
			};

			Complx(double r) : re{r}, im{0.0}						// Konstruktor mit im=0
			{
				std::cout << "Konstruktor mit im=0 aufgerufen" << std::endl;
			};

			explicit Complx() : re{0.0}, im{0.0}					// Konstruktor re=im=0
			{
				std::cout << "Konstruktor re=im=0 aufgerufen" << std::endl;
			};

			~Complx() 
			{
				std::cout << "Objekt Zerstoert" << std::endl;		// Destruktor
			};
			
//			Complx(const Complx&) { };                     			// Copy Konstruktor

			Complx(const Complx& z) : re(z.re), im(z.im)			// Copy Konstruktor
			{
				std::cout << "Copy Konstruktor aufgerufen" << std::endl;
			};

			double getReal() const { return re; };            		// Getter -> const
			double getImag() const { return im; };
			void setReal(double r) { re = r; }                		// Setter
			void setImag(double i) { im = i; }

			// Eigene Memberfunktionen: ComplxAdd, ComplxSub, ComplxMult => Return by Value

			Complx operator+(Complx z) { return Complx( re += z.re, im += z.im ); }
			Complx operator-(Complx z) { return Complx( re -= z.re, im -= z.im ); }
			Complx operator*(Complx z) { return Complx( re*z.re - im*z.im, re*z.im + im*z.re ); }
	};
};

#endif // Datei: complx.h

