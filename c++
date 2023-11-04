Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
  #include <iostream>
using namespace std;
int main() {
 int A, B, C;
    cin >> A >> B >> C;
    if (A < B+C && B < A+C && C < A+B) {cout <<"YES";}
    else {cout <<"NO";}
  return 0;
}


Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
#include <iostream>
using namespace std;
int main() {
  int z,x,c;
    cin >>z>>x>>c;
    if (z==x && z==c){cout << 3;}
    else if ((z==x && z!=c) || (z==c && z!=x) ||(c==x && c!=z)){cout<<2;}
    else {cout << 0;}
  return 0;
}
