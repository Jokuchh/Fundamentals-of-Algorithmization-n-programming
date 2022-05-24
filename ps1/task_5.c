#include<superkarel.h>

void beeper(){
while(no_beepers_present()){
put_beeper();
    if(front_is_blocked()){
        turn_left();
            }
            step();
            }
            }

            void start(){
            while(not_facing_east()){
            turn_left();
            }
            while(front_is_clear()){
            step();
            }
            while(not_facing_south()){
            turn_left();
            }
            while(front_is_clear()){
            step();
            }
            while(not_facing_north()){
            turn_left();
            }
            }

            void asd(){
            step();
     if(beepers_present() && front_is_clear()){ 
     asd();
           }
       else{
     turn_left();
     turn_left();
     step();
     if(beepers_present()){ 
     pick_beeper();
     asd();
              }
              }
              }
      void beper(){
           step();
      if(no_beepers_present()){
         beper();
              }
      else{
         turn_left();
         turn_left();
         step();
      if(no_beepers_present()){
         put_beeper();
         beper();
              }
              }
              }
 int main(){
            turn_on("task_5.kw");
            set_step_delay(50);
            start();
            beeper();
            start();
            step();
            pick_beeper();
            asd();
            beper();
        while(not_facing_west()){
        turn_left();
                }
         beper();
         asd();
        while(not_facing_north()){
         turn_left();
              }
         turn_off();
                return 0;
     }
