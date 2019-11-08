#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  
  int X;
  float Y;

  cin >> X >> Y;
  cout << fixed << setprecision(3) << X / Y << " km/l\n";

  return 0;

}
