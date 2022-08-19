#include <iostream>
#include <cassert>

//1. ������� ����� Power, ������� �������� ��� ������������ �����.
//���� ����� ������ ����� ��� ���������� - ����� ��� �������� ����
//������������ �����.��� ������� ��� ������ : ���� � ������ set,
//������� �������� ����������� �������� ����������� � ������ ����������,
//������ � calculate, ������� ����� �������� ��������� ���������� �������
//����� � ������� ������� �����.������ �������� ���� ���� ����� �� ���������.


class Power {

   float num1 = 2;
   float num2 = 1;

public:

   void Set(float number1, float number2) {
      num1 = number1;
      num2 = number2;
   }

   float Calculate() {
      return pow(num1, num2);
   }
};

int main()
{
   Power object1;
   object1.Set(3, 4);


   std::cout << object1.Calculate() << std::endl;

}