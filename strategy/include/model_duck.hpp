#ifndef __MODEL_DUCK_H_
#define __MODEL_DUCK_H_

#include <iostream>

#include "duck.hpp"
#include "fly_noway.hpp"
#include "mallard_duck.hpp"
#include "quack.hpp"

class ModelDuck : public Duck {

public:
  ModelDuck() {
    quackBehavior_ = new Quack();
    flyBehavior_ = new FlyNoWay();
  };
  void display() override { std::cout << "模型の鴨です" << std::endl; }
};
#endif