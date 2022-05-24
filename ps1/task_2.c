
#include <superkarel.h>
  
   void turn_right();
   void aim();
   void back();
          
    int main() {
        turn_on("task_2.kw");
        set_step_delay(50);
                
        aim();
        back();
           
        turn_off();
    return 0;
                }
                       
    void turn_right()  {
               turn_left();
               turn_left();
               turn_left();
                             }
                             
    void aim(){
       if(front_is_blocked()){
        while(front_is_blocked()){
              turn_left();
             }
                }
                                  
       while(no_beepers_present()){
             step();
       if(front_is_blocked()){
             turn_left();}
              }                                            
                                    
           pick_beeper();
           } 
       void back(){
            turn_right();
       while(front_is_blocked()){
            turn_right();
            } 
          do{ step();
          if(front_is_blocked()){
             turn_right();
                             }
         }while(front_is_clear());
                         }
                     
/*        int main() {
            turn_on("task_2.kw");
            set_step_delay(SPEED);
  
            while(no_beepers_present()){ around();}
            while(beepers_in_bag()) {get_back();}
   
              turn_off();
         return 0;
     }


        void around(){
*/
  
        
