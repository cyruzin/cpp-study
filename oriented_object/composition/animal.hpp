#pragma once

#include <string>

class Animal
{
private:
  std::string name, breed;
  float weight;

public:
  Animal();
  Animal(std::string _name, std::string _breed, float _weight);
  void setName(std::string _name);
  std::string getName();
  void setBreed(std::string _breed);
  std::string getBreed();
  void setWeight(float _weight);
  float getWeight();
};