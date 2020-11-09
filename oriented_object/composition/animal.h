#pragma once

#include <string>

class Animal
{
public:
  Animal();
  Animal(std::string name, std::string breed, float weight);
  void setName(std::string name);
  std::string getName();
  void setBreed(std::string breed);
  std::string getBreed();
  void setWeight(float weight);
  float getWeight();

private:
  std::string m_name, m_breed;
  float m_weight;
};