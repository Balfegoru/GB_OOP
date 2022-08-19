#include <iostream>


//3. �������� �����, ������� ��������� ���������������� �����.
//� private - ������ ����� ����� ������ 10;
//
//� private ������������� �������� ��� ������������ ����� �����;
//
//� public - ����� � ������ reset(), ������� ����� ���������� ����� � ��� �������� ��������� �� 0;
//
//� public - ����� � ������ push(), ������� ����� ��������� �������� � ����.push() ������ ���������� �������� false, ���� ������ ��� ��������, � true � ��������� ������;
//
//� public - ����� � ������ pop() ��� ����������� � �������� �������� �� �����.���� � ����� ��� ��������, �� ������ ���������� ��������������;
//
//� public - ����� � ������ print(), ������� ����� �������� ��� �������� �����.
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

