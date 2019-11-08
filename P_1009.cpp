#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  
  double SALARIO, VENDAS;
  string NOME;
  
  cin >> NOME >> SALARIO >> VENDAS;
  cout << "TOTAL = R$ " << fixed << setprecision(2) << (VENDAS * 0.15) + SALARIO << "\n";

  return 0;

}
