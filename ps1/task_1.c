#include <superkarel.h>
#define speed 80
        void turn_right();
        void jump_over();
        void obratno();
        void turn_around();
   
  int main(){
      turn_on("task_1.kw");
      set_step_delay(speed);
      put_beeper();
   
   if(front_is_clear()){
        while(front_is_clear()){
         step();
         }
   if (beepers_present()){
        pick_beeper();
        turn_around();
        while(no_beepers_present()){
              step();  }
   if(beepers_present()){
      pick_beeper();
      turn_off();
      }
    }
  }
      turn_left();
      step();
      jump_over();
      pick_beeper();
      obratno();
      pick_beeper();
            
      
      while(not_facing_west()){
        turn_left();
       }
       turn_off();
     return 0;}

    void jump_over(){
    while(no_beepers_present()){
    while(not_facing_north()){
        turn_left();
    }
    do { step(); }
    while (right_is_blocked());
         turn_right();
    do{   step ();} 
    while (right_is_blocked()); 
           turn_right();
    while (front_is_clear()){
           step();}
           turn_left();
      }
      }
   void turn_right(){
        turn_left();
        turn_left();
        turn_left(); }
   
 void obratno(){
   while(no_beepers_present()){
     while(not_facing_north()){
           turn_left();}
           if(left_is_blocked()){
             while(left_is_blocked())
             {
                step();
             }
        }  
        turn_left();
        do{
            step();
        }while(left_is_blocked());
        turn_left();
        while(front_is_clear()){
            step();
        }
   }
} 
      
      
 void  turn_around(){
       turn_left();
       turn_left();
       }
       
