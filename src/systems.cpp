#include "main.h"

int left;
int right;

bool normal = true;
bool matchloading;



void drive() {
    while (true) {        
        //chassis.tank(left, right, 10);
      
 
        left = ((pow(master.get_analog(ANALOG_LEFT_Y), 3)) / (pow(128, 2)) + (pow(master.get_analog(ANALOG_RIGHT_X), 3)) / (pow(128, 2)));
        right = ((pow(master.get_analog(ANALOG_LEFT_Y), 3)) / (pow(128, 2)) - (pow(master.get_analog(ANALOG_RIGHT_X), 3)) / (pow(128, 2)));
        leftSide.move(left);
        rightSide.move(right);

    
    



    pros::delay(20);

    }
}

void flywheel(){
    
    while(true){
        if(fOn){
        

           // master.clear();
            //master.set_text(0, 0, speed);
            int setpoint = 500;
            
            if(fwheel.get_actual_velocity() < setpoint){
                fwheel.move(127);
            }
            if(fwheel.get_actual_velocity() >= setpoint){
                fwheel.move(100);
            }
            
        }
        else{
            fwheel.brake();
        }
        pros::delay(20);
    }
}

void subsystems() {
    while (true) {

        if ((master.get_digital(DIGITAL_R2)) && !(master.get_digital(DIGITAL_R1))) {
            intake.move(127);
        }

        if ((master.get_digital(DIGITAL_R1)) && !(master.get_digital(DIGITAL_R2))) {
            intake.move(-127);
        }

        if (!(master.get_digital(DIGITAL_R1)) && !(master.get_digital(DIGITAL_R2))) {
            intake.brake();
        }
        if(!matchloading){
            if (master.get_digital(DIGITAL_L2)) {
                leftWing.set_value(true);
                rightWing.set_value(true);
            }
            if (!(master.get_digital(DIGITAL_L2))){
                leftWing.set_value(false);
                rightWing.set_value(false);
            }   
        }
        else{
            leftWing.set_value(true);
            rightWing.set_value(false);
        }
        if (master.get_digital(DIGITAL_UP)){
            hang.set_value(false);
        }
        if (master.get_digital(DIGITAL_DOWN)){
            hang.set_value(true);
        }
        if (master.get_digital_new_press(DIGITAL_L1)){
            fOn = !fOn;
        }
        if (master.get_digital_new_press(DIGITAL_A)){
            matchloading = !matchloading;
        }
        if (master.get_digital(DIGITAL_B)){
            driverSkills();
        }

    }
    pros::delay(20);
}