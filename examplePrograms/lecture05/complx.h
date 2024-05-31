#ifndef COMPLX_H
#define COMPLX_H

namespace ToComplx{
  class Complx {
    private:
      double re;
      double im;
    public:
      explicit Complx(double r, double i) : re{r}, im{i} { }; // Konstruktor
      Complx(double r) : re{r}, im{0.0} { };         // Konstruktor mit im=0
      explicit Complx() : re{0.0}, im{0.0} { };               // Konstruktor re=im=0
      ~Complx() {std::cout << "Objekt Zerstoert" << std::endl ;};                                  // Destruktor
//      Complx(const Complx&) { };                     // Copy Konstruktor
      Complx(const Complx& z) : re(z.re), im(z.im) { }; // Copy Konstruktor
      
      double real() const { return re; };            // Getter -> const
      double imag() const { return im; };
      void real(double r) { re = r; }                // Setter
      void imag(double i) { im = i;  }

 // Eigene Memberfunktionen: ComplxAdd, ComplxSub, ComplxMult => Return by Value

      Complx operator+(Complx z) { return Complx( re += z.re, im += z.im ); }
      Complx operator-(Complx z) { return Complx( re -= z.re, im -= z.im ); }
      Complx operator*(Complx z) { return Complx( re*z.re - im*z.im, re*z.im + im*z.re ); }
   };
};
#endif // Datei: complx.h

