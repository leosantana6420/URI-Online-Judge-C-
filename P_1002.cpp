#include <iostream>
#include <iomanip> 

using namespace std;

int main(void)
{
  
  double RAIO, AREA;

  cin >> RAIO;

  AREA = (RAIO * RAIO) * 3.14159;

  cout << "A=" << fixed << setprecision(4) << AREA << "\n";

  return 0;

}
