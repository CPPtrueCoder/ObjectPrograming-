#include <iostream>
#include <string>

using namespace std;
class Point {
private:
  int x;
  int y;

public:
  Point(int valueX, int valueY) {
    x = valueX;
    y = valueY;
  }
  int GetY() { return y; }
  void SetY(int valueY) { y = valueY; }
  int GetX() { return x; }
  void SetX(int valueX) { x = valueX; }
  void Show() { cout << "X= " << x << "\t Y = " << y << endl << endl; }
};
class CoffeGrinder {
private:
  bool CheckVoltage() { return false; }

public:
  void Start() {

    if (CheckVoltage()) {
      cout << "Wjuuuh" << endl;

    } else {
      cout << "Beep Beep " << endl;
    }
  }
};

int main() {

  Point a(5, 44);
  a.Show();
  Point b(77, 9);
  b.Show();
}
