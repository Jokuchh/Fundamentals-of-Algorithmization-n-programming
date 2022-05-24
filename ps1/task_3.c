#include<superkarel.h>
void algo();
void double_left();
void turn_right();
  
  int main(){
  turn_on("task_3.kw");
  set_step_delay(1);
  algo();
  turn_left();
  turn_left();
  while(front_is_clear()){
  if(right_is_blocked()){
  if(beepers_in_bag())
  put_beeper(); 
  step();
  }
  else{
  step(); 
  }}
  while(left_is_clear()){
  double_left();
  algo();
  turn_left();
  turn_left();
  while(front_is_clear()){
  if(beepers_in_bag()){
  turn_right(); 
  step();
  if(beepers_present()){
  turn_left();
  turn_left();
  step();
  put_beeper();
  turn_right(); 
  step();
  }
  else{     
  turn_left();
  turn_left(); 
  step(); 
  turn_right(); 
  step();  
  }}
  else{   
  step();    
  }}}
  turn_left();
  turn_left();
  step();
  turn_left();
  while(front_is_clear()){
  step();
  }
  turn_left();
  step();
  turn_left();
  turn_left();
  turn_off();
  return 0;
  }

  void turn_right(){
  turn_left();
  turn_left();
  turn_left();}

  void double_left(){
  turn_left();
  step();
  turn_left();}

  void algo(){
  while(front_is_clear()){
  step();
  while(beepers_present()){
  pick_beeper();
  }}}
