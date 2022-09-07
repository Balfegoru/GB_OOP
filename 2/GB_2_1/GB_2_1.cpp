#include <iostream>

using namespace std;


//1. Создать класс Person(человек) с полями :
//имя, возраст, пол и вес.Определить методы
//переназначения имени, изменения возраста
//и веса.Создать производный класс Student(студент),
//имеющий поле года обучения.Определить методы переназначения
//и увеличения этого значения.Создать счетчик количества созданных
//студентов.В функции main() создать несколько(не больше трёх) студентов.
//Вывести информацию о них.


class Person {

protected:
   string name;
   int year;
   char gender;
   float weight;

public:
   

   void setName(string n) {
      name = n;
   }
   void setYear(int y) {
      if (year > 0) {
         year = y;
      }
   }
   void setGender(char g) {
      if (g == 'M' || g == 'F') {
         gender = g;
      }
   }
   void setWeight(float w) {
      if (w > 0) {
         weight = w;
      }
   }


};

class Student : Person {

   int year_study;
   static int  student_count;

public:

   Student() {
      student_count++;
      name = "";
      year = 0;
      gender = 'T';
      weight = 0;
      year_study = 0;
   }

   Student(string n, int y, char g, float w, int ya) {
      student_count++;
      name = n;
      year = y;
      gender = g;
      weight = w;
      year_study = ya;
   }

      void setYearStudy(int y) {
         if (y > 0) {
            year_study = y;
         }
      }

      void print() {
         cout << "name " << name << endl;
         cout << "year " << year << endl;
         cout << "gender " << gender << endl;
         cout << "weight " << weight << endl;
         cout << "year_study " << year_study << endl;
         cout << "Count All Students " << student_count << endl;
        
      }

      ~Student() {
         student_count--;
      }
};

int Student::student_count = 0;

int main()
{
   Student stud1("Vasia", 20, 'M', 76.1, 2);
   Student stud2("Katya", 25, 'F', 56.2, 3);
   Student stud3("Ivan", 30, 'M', 63.3, 1);

   stud1.print();
}

