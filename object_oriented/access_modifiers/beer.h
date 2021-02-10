#pragma once

#include <string>

enum class BeerType
{
  LAGER,
  ALE,
  PILSEN
};

class Beer
{
  /**
   * A public member is accessible from anywhere outside 
   * the class but within a program. You can set and get 
   * the value of public variables without any member 
   * function.
   * */
public:
  Beer();
  Beer(std::string name,
       std::string brand,
       BeerType type,
       double price);
  uint64_t getID();
  void setName(std::string name);
  std::string getName();
  void setBrand(std::string brand);
  std::string getBrand();
  void setType(BeerType type);
  BeerType getType();
  void setPrice(double price);
  double getPrice();

  /**
  * A protected member variable or function is very similar 
  * to a private member but it provided one additional benefit 
  * that they can be accessed in child classes which are called 
  * derived classes.
  * */
protected:
  double m_price;

  /**
 * A private member variable or function cannot be accessed, or 
 * even viewed from outside the class. Only the class and friend 
 * functions can access private members. 
 * 
 * By default all the members of a class would be private.
 * */
private:
  uint64_t m_id;
  std::string m_name;
  std::string m_brand;
  BeerType m_type;
};