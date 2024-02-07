#include "main.h"


void driverSkills(){
    hang.set_value(false);
    pros::Task flywheelAuto(flywheel);
	flywheelAuto;
    fOn = true;
    chassis.setPose(-40,55,180);
    //intake.move(-127);
    chassis.moveToPoint(-40, 40, 850);
    chassis.turnTo(-48, 50, 850, false);
    chassis.moveToPoint(-55, 45, 850, false);
    chassis.turnTo(50, 10, 850);
    leftWing.set_value(true);
    
    pros::delay(22000);
    fOn=false;
    fwheel.brake();
    
    leftWing.set_value(false);

}


void sabotage(){
    chassis.setPose(0,0,180);
    chassis.moveToPoint(5, 24, 850, false); // move up
    chassis.moveToPoint(5, 50, 850, false); //move into position
    chassis.waitUntil(15); // wings on
    leftWing.set_value(true);
    rightWing.set_value(true);
    chassis.waitUntilDone();
    chassis.moveToPoint(30, 50, 850, false); // sab
    leftWing.set_value(false); // wings off
    rightWing.set_value(false);
    chassis.moveToPoint(-15, 15, 850); // move to de-score
    chassis.turnTo(0,0, 850, false);
    leftWing.set_value(true); // wing on
    chassis.moveToPoint(-5, 5, 850, false); // de-score
    chassis.waitUntil(8); // wing off
    leftWing.set_value(false);
    chassis.waitUntilDone();
    chassis.turnTo(26, 0, 850, false); // turn to elevation bar
    chassis.moveToPoint(26, 5, 850, false); // move to elevation bar
    rightWing.set_value(true); // wing in
    chassis.turnTo(40, -5, 850, false); // touch elevation bar
}


void skills() {
    
    chassis.moveToPoint(-36, 60, 850); // move into alley
    chassis.turnTo(0, 65, 850, false); // straighten out
    chassis.moveToPoint(45, 60, 1000, false); // move to match-loader
    chassis.waitUntil(28);
    leftWing.set_value(true); // scrape with wing 

    chassis.waitUntilDone();

    chassis.moveToPoint(55, 40, 850, false); // start curving

    
    chassis.moveToPoint(60, 20, 850, false); // ram 1
    chassis.waitUntil(1);
    leftWing.set_value(false); // wing up before goal
    //rightWing.set_value(false);
    chassis.waitUntilDone();
    chassis.moveToPoint(55, 45, 850); // move to ram again
    chassis.moveToPoint(60, 20, 850, false); // ram 2
    chassis.moveToPoint(55, 45, 850); // move to ram
    chassis.moveToPoint(65, 20, 850, false); // ram 3
    chassis.moveToPoint(55, 45, 850); // move to ram
    chassis.turnTo(20,20,850, false); // turn to leave
    leftWing.set_value(true);
    rightWing.set_value(true);
    chassis.moveToPoint(20, 20, 850, false); // leave ramming area
    chassis.turnTo(30, 15, 850, false); // turn to create curve
    chassis.moveToPoint(70, 0, 850, false); // ram goal
    chassis.moveToPoint(20, 0, 850, true); // move back
    chassis.waitUntil(5); // bring up wings after exiting goal
    leftWing.set_value(false);
    rightWing.set_value(false);
    chassis.waitUntilDone(); // wings on again
    /*
    leftWing.set_value(true);
    rightWing.set_value(true);
    chassis.moveToPoint(20, -20, 850, false, 50); // move further down the field
    chassis.moveToPoint(60, 0, 850, false); // ram inwards
    chassis.moveToPoint(20, -10, 850, true); // move back
    chassis.waitUntil(5); // bring up wings after exiting goal
    leftWing.set_value(false);
    rightWing.set_value(false);
    chassis.waitUntilDone();
    chassis.turnTo(30, -24, 850, false); // turn to corner
    leftWing.set_value(true); // wings on
    rightWing.set_value(true);
    chassis.moveToPoint(30, -24, 850, false); // move to corner
    chassis.turnTo(55, -20, 850, false);  // turn to ram
    leftWing.set_value(false); // wings off
    rightWing.set_value(false);
    chassis.moveToPoint(55, -20, 850, false); // ram
*/
}

void close() {

    chassis.setPose(0,0,0);
    chassis.moveToPoint(-15, 15, 850);
    chassis.turnTo(0,0, 850, false);
    leftWing.set_value(true);
    chassis.moveToPoint(-5, 5, 850, false);
    chassis.waitUntil(8);
    leftWing.set_value(false);
    chassis.waitUntilDone();
    chassis.turnTo(26, 0, 850, false);
    chassis.moveToPoint(26, 5, 850, false);
    rightWing.set_value(true);
    chassis.turnTo(40, -5, 850, false);

}

void far() {
    
    chassis.setPose(-4, 0, -90);
    intake.move(-127);
    chassis.moveToPoint(-6, 0, 850, true);
    chassis.moveToPoint(24, 0, 850, false);
    chassis.turnTo(55, 24, 850, false);
    leftWing.set_value(true);
    chassis.moveToPoint(55, 24, 850, false);
    chassis.waitUntil(16);
    leftWing.set_value(false);
    chassis.turnTo(50, 40, 850, false);
    chassis.turnTo(55, 40, 850, false);
    chassis.moveToPoint(55, 35, 850, false);
    chassis.moveToPoint(55, 10, 850, false);
    chassis.turnTo(55, 40, 850, true);
    intake.move(127);
    chassis.moveToPoint(55, 10, 850, true);
    /*
    chassis.turnTo(65, 35, 850, false);
    chassis.moveToPoint(55, 35, 850, false);
    chassis.moveToPoint(55, 10, 850, false);
    */
    /*
    chassis.turnTo(0, 48, 850, true);
    intake.move(-127);
    chassis.moveToPoint(0, 30, 850, true);\
    */
    //chassis.turnTo(60, 50, 850, true);
    //intake.move(127);

   
}