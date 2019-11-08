#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
  
  int A, B, C, MAIORAB;

  cin >> A >> B >> C;

  MAIORAB = (((A + B) + abs(A - B)) / 2);
  MAIORAB = (((C + MAIORAB) + abs(MAIORAB - C)) / 2);

  cout << MAIORAB << " eh o maior\n";
 
  return 0;

}
