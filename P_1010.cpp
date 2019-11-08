#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  
  int COD_P1, COD_P2, NUM_P1, NUM_P2;
  double VALOR_P1, VALOR_P2;
  
  cin >> COD_P1 >> NUM_P1 >> VALOR_P1 >> COD_P2 >> NUM_P2 >> VALOR_P2;
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (NUM_P1 * VALOR_P1) + (NUM_P2 * VALOR_P2) << "\n";

  return 0;

}
