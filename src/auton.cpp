#include "main.h"


void driverSkills(){

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

    /* LEGACY SKILLS CODE
    pros::Task flywheelAuto(flywheel);
	flywheelAuto;
    fOn = true;
    chassis.setPose(0,0,0);
    chassis.moveToPoint(0, 3, 1500);
    chassis.turnTo(12, 3, 1500, true);
    chassis.moveToPoint(12, 3, 1500);
    chassis.turnTo(-15, 15, 1500);
    leftWing.set_value(true);
    pros::delay(32000);
    fOn = false;
    leftWing.set_value(false);
    chassis.turnTo(0, -10, 1500, true);
    chassis.moveToPoint(0, -10, 1500);
    chassis.turnTo(-85, -10, 1500, true);
    chassis.moveToPoint(-85, -10, 1500);
    rightWing.set_value(true);
    chassis.turnTo(-100, 5, 1500, true);
    chassis.moveToPoint(-100, 8, 1500);
    rightWing.set_value(false);
    chassis.moveToPoint(-100, 24, 1500);
    chassis.moveToPoint(-100, 0, 1500);
    chassis.moveToPoint(-100, 30, 1500);
    chassis.moveToPoint(-100, 0, 1500);
    chassis.turnTo(0, 10, 1500, true);
    leftWing.set_value(true);
    rightWing.set_value(true);
    chassis.moveToPoint(-60 , 25, 1500);
    chassis.turnTo(-96, 40, 1500, true);
    chassis.moveToPoint(-96, 40, 1500);
    leftWing.set_value(false);
    rightWing.set_value(false);
    chassis.moveToPoint(-60, 40, 1500);
    chassis.turnTo(-60, 72, 1500, true);
    
    chassis.moveToPoint(-60, 72, 1500);
    chassis.turnTo(-96, 55, 1500, true);
    leftWing.set_value(true);
    rightWing.set_value(true);
    chassis.moveToPoint(-96, 55, 1500);
    chassis.moveToPoint(-60, 55, 1500);
    chassis.turnTo(-60, 72, 1500, true);
    leftWing.set_value(false);
    rightWing.set_value(false);
    chassis.moveToPoint(-60, 72, 1500);
    */

}

void close() {

    chassis.setPose(-36, -60, 90);
    intake.move(127);
    chassis.turnTo(-800, -60, 850);
    chassis.moveToPose(-48, -48, -45, 850);
    leftWing.set_value(true);
    chassis.moveToPose(-36, -60, -90, 850);
    leftWing.set_value(false);
    chassis.moveToPoint(0, -60, 850);
    rightWing.set_value(true);
    
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
    chassis.setPose(36, -60, -90);
    intake.move(-127);
    chassis.moveToPoint(0, -60, 850);
    chassis.moveToPoint(36, -60, 850);
    leftWing.set_value(true);
    rightWing.set_value(true);
    chassis.moveToPose(55, -48, 0, 850);
    leftWing.set_value(false);
    rightWing.set_value(false);
    chassis.turnTo(55, 400, 850);
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
    chassis.moveToPose(24, -12, 90);
    leftWing.set_value(false);
    rightWing.set_value(false);
    intake.move(127);
    chassis.moveToPoint(48, -12, 850);
    chassis.moveToPoint(24, -12, 850);

    

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