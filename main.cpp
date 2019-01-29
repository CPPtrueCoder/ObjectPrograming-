#include <iostream>
#include <string>
using namespace std;
class Human
{
public:
  int age ;
  int weight ;
  string name;
};
int main()
{
  Human firstHuman ;
  Human secondHuman;
  firstHuman.age =15;
  firstHuman.name="Ivan Vasilievich";
  firstHuman.weight=100;
  secondHuman.age=30;
  secondHuman.name="Andrey Urievich";
  secondHuman.weight=45;

}
