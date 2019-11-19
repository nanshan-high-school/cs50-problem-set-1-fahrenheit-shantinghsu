#include <iostream>
using namespace std;

int main() {
  float c , f;
  cout << "請輸入攝氏溫度:";
  cin >> c;
  f = ((c * 9.0) / 5.0) + 32.0;
  cout << "華氏溫度為:" << f;

  cout << "\n\n請輸入華氏溫度:";
  cin >> f;
  c = (f - 32.0) * 5.0 / 9.0;
  cout << "攝氏溫度為:" << c;
}
