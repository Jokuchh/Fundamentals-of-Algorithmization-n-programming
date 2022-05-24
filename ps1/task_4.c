#include<superkarel.h>
void turn_right();
void program();


int main(){
  turn_on("task_4.kw");
  set_step_delay(50);
    while(not_facing_north()){  turn_left(); }
    while(front_is_clear()){  program();
    while(facing_north()){
    while(not_facing_south()){ turn_right(); }
    while(front_is_clear()){  step(); }
 }
    while(not_facing_east()){ turn_left();  }
      if(facing_east()&&  front_is_clear()){
         step();
         turn_left();
    }
  }
           
turn_off();
return 0;
}


    void turn_right(){
        set_step_delay(40);
        turn_left();
        turn_left();
        set_step_delay(40);
        turn_left();
        }
    void program(){
        while(facing_north() && front_is_clear()){
        if(beepers_present()){
        while(front_is_clear() &&  facing_north()){
              step();
                    }
              turn_left();
              turn_left();
        while(front_is_clear()){
        if(no_beepers_present()){
              put_beeper();
                   }
              step();
      }
      if(no_beepers_present()){
           put_beeper();
               }
             }
    if(front_is_clear()){
   step();
        }
      }
    }
                             

