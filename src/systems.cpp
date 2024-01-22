#include "main.h"

int left;
int right;

bool normal = true;
bool matchloading;



void drive() {
    while (true) {
        //chassis.tank();
      
    if(normal){
        left = ((pow(master.get_analog(ANALOG_LEFT_Y), 3)) / (pow(128, 2)) + (pow(master.get_analog(ANALOG_RIGHT_X), 3)) / (pow(128, 2)));
        right = ((pow(master.get_analog(ANALOG_LEFT_Y), 3)) / (pow(128, 2)) - (pow(master.get_analog(ANALOG_RIGHT_X), 3)) / (pow(128, 2)));
        leftSide.move(left);
        rightSide.move(right);

    }   

    if(!normal){
        left = ((pow(master.get_analog(ANALOG_LEFT_Y), 3)) / (pow(128, 2)) - (pow(master.get_analog(ANALOG_RIGHT_X), 3)) / (pow(128, 2)));   
        right = ((pow(master.get_analog(ANALOG_LEFT_Y), 3)) / (pow(128, 2)) + (pow(master.get_analog(ANALOG_RIGHT_X), 3)) / (pow(128, 2)));
        leftSide.move(-left);
        rightSide.move(-right);
    }
    



    pros::delay(20);

    }
}

void flywheel(){
    while(true){
        if(fOn){
            if(fwheel.get_actual_velocity() < 550){
                fwheel.move(127);
            }
            if(fwheel.get_actual_velocity() >= 550){
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
            hang.set_value(true);
        }
        if (master.get_digital(DIGITAL_DOWN)){
            hang.set_value(false);
        }
        if (master.get_digital_new_press(DIGITAL_L1)){
            fOn = !fOn;
        }
        if (master.get_digital_new_press(DIGITAL_A)){
            matchloading = !matchloading;
        }
        if (master.get_digital_new_press(DIGITAL_Y)){
            driverSkills();
            normal = !normal;
        }
        if (master.get_digital_new_press(DIGITAL_X)){
            normal = !normal;
        }

    }
    pros::delay(20);
}