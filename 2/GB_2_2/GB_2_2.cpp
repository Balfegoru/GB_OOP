#include <iostream>

//2. Создать классы Apple(яблоко) и Banana(банан),
//которые наследуют класс Fruit(фрукт).У Fruit есть
//две переменные - члена: name(имя) и color(цвет).
//Добавить новый класс GrannySmith, который наследует класс Apple.

using namespace std;

class Fruit {
protected:
   string name;
   string color;
public:
   string getName() {
      return name;
   }

   string getColor() {
      return color;
   }

};

class Apple : public Fruit {

public:
   Apple() {
      color = "black";
      name = "apple";
   }

   Apple(string col) {
      color = col;
      name = "apple";
   }

   Apple(string col, string na) {
      color = col;
      name = na;
   }

   string getName() {
      return name;
   }

   string getColor() {
      return color;
   }
};

class Banana : public Fruit {
public:

   Banana() {
      name = "banana";
      color = "yellow";
   }

   Banana(string col) {
      color = col;
      name = "banana";
   }

   Banana(string col, string na) {
      color = col;
      name = na;
   }

   string getName() {
      return name;
   }

   string getColor() {
      return color;
   }
};

class GrannySmith : public Apple {
public:
   
   GrannySmith() {
      name = "GrannySmith";
      color = "green";
   }

};

int main()
{
      Apple a("red");
      Banana b;
      GrannySmith c;

      std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
      std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
      std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

      return 0;
}




