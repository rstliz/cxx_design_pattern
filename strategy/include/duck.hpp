#ifndef __DUCK_H_
#define __DUCK_H_

#include <iostream>

#include "fly_behavior.hpp"
#include "quack_behavior.hpp"

class Duck {
protected:
  FlyBehavior *flyBehavior_;
  QuackBehavior *quackBehavior_;

public:
  virtual void display() = 0;
  void performFly() { flyBehavior_->fly(); }
  void performQuack() { quackBehavior_->quack(); }
  void swim() {
    std::cout << "すべての鴨は浮かびます。おとりの鴨でも！" << std::endl;
  }
  virtual ~Duck(){};
};
#endif