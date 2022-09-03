#include <iostream>
#include <cstdint>


//2. �������� ����� � ������ RGBA, ������� �������� 4 ����������-����� ����
//std::uint8_t: m_red, m_green, m_blue � m_alpha (#include cstdint ��� ������� � ����� ����).
//������ 0 � �������� �������� �� ��������� ��� m_red, m_green, m_blue � 255 ��� m_alpha.
//������� ����������� �� ������� ������������� ������, ������� �������� ������������ ����������
//�������� ��� m_red, m_blue, m_green � m_alpha. �������� ������� print(), ������� ����� �������� 
//�������� ����������-������.

class RGBA {

   uint8_t m_red = 0, m_green = 0, m_blue = 0, m_alpha = 255;

public:

   RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
      : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {}

   void Print() { 
      std::cout << "m_red: " << static_cast<int>(m_red) << "\nm_green: " << static_cast<int>(m_green) << "\nm_blue: " << static_cast<int>(m_blue) << "\nm_alpha: " << static_cast<int>(m_alpha) << std::endl;
   }
};


int main()
{
   RGBA color(100,200,150,255);
   color.Print();
}

