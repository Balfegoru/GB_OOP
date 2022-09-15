#include <iostream>
//1. Создать абстрактный класс Figure(фигура).
//Его наследниками являются классы Parallelogram(параллелограмм)
//и Circle(круг).Класс Parallelogram — базовый для классов Rectangle(прямоугольник),
//Square(квадрат), Rhombus(ромб).Для всех классов создать конструкторы.Для класса Figure
//добавить чисто виртуальную функцию area() (площадь).Во всех остальных классах переопределить
//эту функцию, исходя из геометрических формул нахождения площади.

using namespace std;

class Figure {
public:
   virtual float area() = 0;
};

class Parallelogram : public Figure {
   float footing;
   float height;

public:
   Parallelogram() {}

   Parallelogram(float w, float h) : footing(w), height(h) {}

   float area() override {
      return footing * height;
   }

};

class Rectangle : public Parallelogram {

   float width;
   float height;

public:
   Rectangle() {}

   Rectangle(float w , float h) : width(w), height(h)
   {
   }

   float area() {
      return width * height;
   }
};

class Square : public Parallelogram {
   float width;
   float length;

public:
   Square() {}

   Square(float w, float h) : width(w), length(h)
   {
   }
   float area() {
      return width * length;
   }
};

class Rhombus : public Parallelogram {
   float height;
   float length;
   
public:

   Rhombus() {}

   Rhombus(float w, float h) : height(w), length(h)
   {
   }
   
   float area() {
      return height * length;
   }
};


int main()
{
   
   Parallelogram a(2, 5);
   cout << a.area() << endl;
   
}

