#include <superkarel.h>
#define speed 90

void turn_right();
void double_left();
void ultra_left();
void north();
void south();
void west();
void east();
void algo();
void around_wrld();

        int main() {
            turn_on("task_6.kw");
           set_step_delay (speed);
            algo();
            turn_off();

        return 0; 
      }

    void double_left()  {
         turn_left();
         turn_left();   }
  
    void turn_right()    {
         turn_left();
         double_left();  }

    void ultra_left()   {
         double_left();
         double_left(); }

    void north (){
        while(not_facing_north()){
              turn_left();
                 }               }

    void south(){
        while(not_facing_south()){
              turn_left();
                 }               }

    void east(){
        while(not_facing_east()){
              turn_left();
                 }               }
    void west(){
        while(not_facing_west()){
              turn_left();
                 }               }


    void around_wrld(){  
        if(beepers_present())    {
           pick_beeper();
           north();
        }
        
        if(beepers_present())    {
           pick_beeper();
           west();
        }
        
        if(beepers_present())    {
           pick_beeper();
           south();
        }

        if(beepers_present())    {
           pick_beeper();
           east();
        } 

        if(beepers_present())    {
           pick_beeper();
           turn_off();
        }
        }
    void algo() {
        while(no_beepers_present()){
              step(); 
              
        if(beepers_present()) {
           around_wrld(); }
  }  }
 
