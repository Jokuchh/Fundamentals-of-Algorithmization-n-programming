#include <superkarel.h>
#define speed 50

void turn_right();
void doroga();
void way();
void program();
void put();
void double_left();

    int main() {
        turn_on("task_7.kw");
        set_step_delay(speed);
       
        put();
        doroga();

      turn_off();
      return 0;
}
void turn_right(){
    turn_left();
    turn_left();
    turn_left();
}
void put(){
    put_beeper();
    while(front_is_clear()){
        step();
        if(no_beepers_present()){
            put_beeper();
        }
    }
    
    double_left();
    while(front_is_clear()){
    step();
    }
    double_left();

}
void double_left(){
    turn_left();
    turn_left();
}
void doroga(){
    while(front_is_clear()){
        if(left_is_clear()){
            turn_left();
            step();
            put_beeper();
            way();
        }
        else{
            step();
        }
    }

}
void way(){
if(front_is_clear()){
step();}
while(no_beepers_present()|| front_is_clear()){
     
if(right_is_clear()){
turn_right();
step();
}
else if(front_is_clear()){
    step();
    }
    else{
        while(front_is_blocked()){
            turn_left();
        }
    }
}
program();
}
void program(){
    double_left();
    step();
    if(beepers_present()){
        pick_beeper();
        double_left();
        step();
        turn_left();
    }
    if(no_beepers_present()){
        put_beeper();
        double_left();
        step();
        turn_left();
    }
    

}
