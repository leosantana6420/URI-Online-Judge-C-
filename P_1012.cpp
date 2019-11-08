#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
  
  double A, B, C;

  cin >> A >> B >> C;

  cout << "TRIANGULO: " << fixed << setprecision(3) << (A * C) / 2 << "\n";
  cout << "CIRCULO: " << fixed << setprecision(3) << 3.14159 * (pow(C, 2)) << "\n";
  cout << "TRAPEZIO: " << fixed << setprecision(3) << ((A + B) * C) / 2 << "\n";
  cout << "QUADRADO: " << fixed << setprecision(3) << B * B << "\n";
  cout << "RETANGULO: " << fixed << setprecision(3) << A * B << "\n";

  return 0;

}
