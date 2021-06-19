#include "mallard_duck.hpp"
#include "model_duck.hpp"

int main() {
  Duck *mallard = new MallardDuck();
  mallard->display();
  mallard->performQuack();
  mallard->performFly();
  delete mallard;

  Duck *model = new ModelDuck();
  model->display();
  model->performQuack();
  model->performFly();
  delete model;
}