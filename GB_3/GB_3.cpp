#include <iostream>


//3. Написать класс, который реализует функциональность стека.
//• private - массив целых чисел длиной 10;
//
//• private целочисленное значение для отслеживания длины стека;
//
//• public - метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
//
//• public - метод с именем push(), который будет добавлять значение в стек.push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
//
//• public - метод с именем pop() для вытягивания и возврата значения из стека.Если в стеке нет значений, то должно выводиться предупреждение;
//
//• public - метод с именем print(), который будет выводить все значения стека.
class Stack {

   int mass[10];
   int size = 0;

public:

   void reset() {
      size = 0;

      for (int i = 0; i < 10; i++) {
         mass[i] = 0;
      }
   }

   bool push(int number) {
      if (size <= 10) {
         mass[size] = number;
         size++;
         return true;
      }
      else {
         return false;
      }
   }

   int pop() {
      if (size == 0) {
         std::cout << "Stack haven't nymbers" << std::endl;
         return false;
      }
      else {
         int temp = mass[size - 1];
         mass[size - 1] = 0;
         size--;
         return temp;
      }
   }

   void print() {
      std::cout << "( ";
      if (size != 0) {
         
         for (int i = 0; i < size; i++) {
            std::cout << mass[i] << " ";
         }
      }
      std::cout << ")" << std::endl;
   }

};


int main()
{
   Stack stack;
   stack.reset();
   stack.print();

   stack.push(3);
   stack.push(7);
   stack.push(5);
   stack.print();

   stack.pop();
   stack.print();

   stack.pop();
   stack.pop();
   stack.print();

   return 0;




}

