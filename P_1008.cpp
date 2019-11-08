#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  
  int ID, HORAS;
  float VALOR, SALARIO;
  
  cin >> ID >> HORAS >> VALOR;

  SALARIO = HORAS * VALOR;

  cout << "NUMBER = " << ID << "\n";
  cout << "SALARY = U$ " << fixed << setprecision(2) << SALARIO << "\n";

  return 0;

}
