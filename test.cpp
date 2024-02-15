#include <iostream>
#include <string>
#include <sstream>

int main ()
{
  std::string mystr;
  float price=0;
  int quantity=0;

  std::cout << "Enter price: ";
  std::getline(std::cin,mystr);
  std::stringstream(mystr) >> price;
  std::cout << "Enter quantity: ";
  std::getline(std::cin,mystr);
  std::stringstream(mystr) >> quantity;
  std::cout << "Total price: " << price*quantity << std::endl;
  return 0;
}