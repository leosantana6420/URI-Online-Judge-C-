#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  
  double A, B, C, MEDIA;

  cin >> A >> B >> C;

  MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;

  cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << "\n";

  return 0;

}
