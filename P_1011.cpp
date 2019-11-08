#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
  
  double RAIO;

  cin >> RAIO;
  cout << "VOLUME = " << fixed << setprecision(3) << ((4/3.0) * 3.14159) * pow(RAIO, 3) << "\n";

  return 0;

}
