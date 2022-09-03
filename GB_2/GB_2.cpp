#include <iostream>
#include <cstdint>


//2. Ќаписать класс с именем RGBA, который содержит 4 переменные-члена типа
//std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint дл€ доступа к этому типу).
//«адать 0 в качестве значени€ по умолчанию дл€ m_red, m_green, m_blue и 255 дл€ m_alpha.
//—оздать конструктор со списком инициализации членов, который позволит пользователю передавать
//значени€ дл€ m_red, m_blue, m_green и m_alpha. Ќаписать функцию print(), котора€ будет выводить 
//значени€ переменных-членов.

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

