#include "main.h"

ASSET(ram_txt);

void driverSkills(){

    pros::Task flywheelAuto(flywheel);
	flywheelAuto;
    fOn = true;
    chassis.setPose(-40,55,180);
    chassis.moveToPoint(-40, 40, 850);
    chassis.turnTo(-48, 50, 850, false);
    chassis.moveToPoint(-55, 45, 850, false);
    chassis.turnTo(50, 10, 850);
    rightWing.set_value(true);
    pros::delay(32000);
    fOn=false;
    rightWing.set_value(false);
    chassis.moveToPoint(-36, 60, 850);
    chassis.turnTo(0, 60, 850, false);
    /* LEGACY DRIVER SKILLS CODE
    pros::Task flywheelAuto(flywheel);
	flywheelAuto;
    fOn = true;
    chassis.setPose(0,0,0);
    chassis.moveToPoint(0, 3, 1500);
    chassis.turnTo(10, 3, 1500, true);
    chassis.moveToPoint(10, 3, 1500);
    chassis.turnTo(-12, 15, 1500);
    leftWing.set_value(true);
    pros::delay(30000);
    fOn = false;
    leftWing.set_value(false);
    */

}



void skills() {
    pros::Task flywheelAuto(flywheel);
	flywheelAuto;
    fOn = true;
    chassis.setPose(-40,55,180);
    chassis.moveToPoint(-40, 40, 850);
    chassis.turnTo(-48, 50, 850, false);
    chassis.moveToPoint(-55, 45, 850, false);
    chassis.turnTo(50, 10, 850);
    rightWing.set_value(true);
    //pros::delay(32000);
    fOn=false;
    rightWing.set_value(false);
    chassis.moveToPoint(-36, 60, 850);
    chassis.turnTo(0, 60, 850, false);
    chassis.moveToPoint(48, 60, 1000, false);
    chassis.moveToPoint(55, 50, 850, false);
    //chassis.turnTo(60, 36, 850, false);
    chassis.moveToPoint(60, 20, 850, false);
    chassis.moveToPoint(55, 50, 850);
    chassis.moveToPoint(60, 20, 850, false);
    chassis.moveToPoint(55, 50, 850);
    chassis.turnTo(36,36,850, false);
    chassis.moveToPoint(24,24, 850, false);
    


}

void close() {

    chassis.setPose(-40, -60, 125);
    chassis.moveToPoint(-62, -40, 850, false);
    //chassis.turnTo(-65, -60, 850);
   //chassis.moveToPoint(-62, -45, 850);
   chassis.turnTo(-62, 0, 850, false);
   chassis.moveToPoint(-62, -40, 850, false);
   chassis.moveToPoint(-62, -50, 850);
   chassis.moveToPoint(-62, -40, 850, false);
   chassis.moveToPoint(-60, -50, 850, false);
   chassis.turnTo(-45, -60, 850, false);
   chassis.moveToPoint(-45, -60, 850, false);
   chassis.waitUntil(1);
   leftWing.set_value(true);
   chassis.waitUntilDone();
   leftWing.set_value(false);

  

   
    
    
    //chassis.moveToPoint(-36, )
    /* LEGACY CLOSE CODE
    chassis.setPose(0,0,-45);
    intake.move(-127);
    chassis.moveToPoint(-25, 20, 1500);
    chassis.turnTo(-25, 40, 1500);
    intake.move(127);
    chassis.moveToPoint(-25, 10, 1500);
    chassis.turnTo(-25, 40, 1500, true);
    chassis.moveToPoint(-25, 30, 1500);
    chassis.moveToPoint(-24, 8, 1500);
    leftWing.set_value(true);
    chassis.turnTo(0,-15, 1500, true); 
    chassis.turnTo(0, -12, 1500, true);
    chassis.moveToPoint(-12, -8, 1500);
    chassis.turnTo(0,0, 1500, true);
    leftWing.set_value(false); 
    chassis.moveToPoint(0, -20, 1500);
    chassis.turnTo(24, -20, 1500, true);
    chassis.moveToPoint(32,-20,1500);
    rightWing.set_value(true);
    chassis.turnTo(26, -18, 1500);
    */

}

void far() {
    chassis.setPose(24, -60, -90);
    intake.move(-127);
    chassis.moveToPoint(3, -60, 850);
    chassis.moveToPoint(36, -60, 850, false);
    rightWing.set_value(true);
    chassis.turnTo(60, -48, 850, false);
    chassis.moveToPoint(62, -46, 850, false);
    chassis.waitUntil(12);
    leftWing.set_value(true);
    chassis.waitUntilDone();
    pros::delay(200);
    leftWing.set_value(false);
    chassis.turnTo(60, -20, 850, false);
    //chassis.moveToPoint(60, -20, 850, false);
   
   
    
    /*
    intake.move(127);
    chassis.moveToPoint(55, -20, 850);
    chassis.moveToPoint(55, -35, 850);
    chassis.turnTo(55, 400, 850, true);
    chassis.moveToPoint(55, -20, 850);
    chassis.moveToPoint(55, -40, 850);
    chassis.turnTo(0, -24, 850);
    chassis.moveToPose(0, -24, -45, 850);
    chassis.moveToPoint(24, -24, 850);
    chassis.turnTo(48, -12, 850);
    intake.move(127);
    chassis.turnTo(0, 0, 850);
    intake.move(-127);
    chassis.moveToPose(0, 0, 45, 850);
    chassis.turnTo(500, 0, 850, true);
    leftWing.set_value(true);
    rightWing.set_value(true);
    chassis.moveToPoint(48, 0, 850);
    chassis.moveToPose(24, -12, 90, 850);
    leftWing.set_value(false);
    rightWing.set_value(false);
    intake.move(127);
    chassis.moveToPoint(48, -12, 850);
    chassis.moveToPoint(24, -12, 850);

    */

    /* LEGACY FAR CODE
    chassis.setPose(24,0,-90);
    leftWing.set_value(true);
    chassis.moveToPoint(40, 12, 1500);
    pros::delay(200);
    chassis.turnTo(55, 20, 1500, true);
    leftWing.set_value(false); 
    chassis.moveToPoint(63, 15, 1500);
    chassis.turnTo(63, 30, 1500, true);
    chassis.moveToPoint(63, 30, 1500); 
    chassis.moveToPoint(63, 15, 1500);
    chassis.moveToPoint(63, 10, 1500);
    intake.move(-127); 
    chassis.turnTo(30, 25, 1500);
    chassis.moveToPoint(30, 25, 1500);
    chassis.moveToPoint(0, 25, 1500);
    chassis.moveToPoint(10, 25, 1500);
    chassis.turnTo(40, 40, 1500);
    intake.move(127);
    intake.move(-127);
    chassis.moveToPoint(15, 40, 1500);
    chassis.turnTo(15, 51, 1500);
    chassis.moveToPoint(15,51,1500);
    chassis.turnTo(40,51,1500,true);
    leftWing.set_value(true);
    rightWing.set_value(true);
    chassis.moveToPoint(40, 51, 1500);
    chassis.moveToPoint(35, 48, 1500);
    chassis.turnTo(40, 48, 1500);
    intake.move(127);
    chassis.moveToPoint(30, 48, 1500);
    chassis.moveToPoint(10, 48, 1500);
    */
   
}