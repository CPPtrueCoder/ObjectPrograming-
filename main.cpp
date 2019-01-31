
#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>
#include <string>
using coordinates = std::array<double, 3>;
using namespace std;

class VelocityVector {

private:
  coordinates Velocity;

  int CheckVector() {
    int sum = 0;
    sum = accumulate(Velocity.begin(), Velocity.end(), 0);
    return sum;
  }

public:
  VelocityVector() {

    for (auto &point : Velocity) {
      point = 0.0;
    }
  }
  void SetVelocity_vector(coordinates Velocity) { // Как здесь прописать геттер для того чтобы изменять вектор ?
    cout << " Set the points of vector";
    this->Velocity=Velocity; //Если оставить так , то придется в функции вызова создавать переменную типа coordinates. Я думаю это не очень удобно
    }

  void ShowVector() {
    for (auto point : Velocity) {
      cout << point << endl;
    }
  }
  void ShowLenght() {
    double lenght = 0;
    cout << CheckVector();
  }
};
int main() {
  VelocityVector a;
  a.SetVelocity_vector ();
  a.ShowVector();
  a.ShowLenght();
}
