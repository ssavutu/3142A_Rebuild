#include "main.h"


pros::Controller master (pros::E_CONTROLLER_MASTER);

pros::Motor frontRight(9, pros::E_MOTOR_GEAR_600, false);

pros::Motor midRight(10, pros::E_MOTOR_GEAR_600, false);

pros::Motor backRight(8, pros::E_MOTOR_GEAR_600, false);

pros::Motor_Group rightSide({frontRight, midRight, backRight});


pros::Motor frontLeft(17, pros::E_MOTOR_GEAR_600, true);

pros::Motor midLeft(16, pros::E_MOTOR_GEAR_600, true);

pros::Motor backLeft(18, pros::E_MOTOR_GEAR_600, true);

pros::Motor_Group leftSide({frontLeft, midLeft, backLeft});


pros::IMU inertial(13);


pros::Motor fwheel(11, pros::E_MOTOR_GEAR_600, true);


pros::Motor intake(12, pros::E_MOTOR_GEAR_600, false);

bool fOn = false;

pros::ADIDigitalOut leftWing('E');

pros::ADIDigitalOut rightWing('A');

pros::ADIDigitalOut hang('C');


// drivetrain settings
lemlib::Drivetrain drivetrain(
    &leftSide, // left motor group
    &rightSide, // right motor group
    12, // 12 inch track width
    lemlib::Omniwheel::NEW_325, // using new 3.25" omnis
    400, // drivetrain rpm is 400
    8 // chase power is 2. If we had traction wheels, it would have been 8
);

// lateral motion controller
lemlib::ControllerSettings linearController(
    25, // proportional gain (kP)
    0, // integral gain (kI)
    40, // derivative gain (kD)
    3, // anti windup
    1, // small error range, in inches
    100, // small error range timeout, in milliseconds
    3, // large error range, in inches
    500, // large error range timeout, in milliseconds
    20 // maximum acceleration (slew)
);

// angular motion controller
lemlib::ControllerSettings angularController(
    2, // proportional gain (kP)
    0, // integral gain (kI)
    10, // derivative gain (kD)
    3, // anti windup
    1, // small error range, in degrees
    100, // small error range timeout, in milliseconds
    3, // large error range, in degrees
    500, // large error range timeout, in milliseconds
    0 // maximum acceleration (slew)
);

// sensors for odometry
// note that in this example we use internal motor encoders (IMEs), so we don't pass vertical tracking wheels
lemlib::OdomSensors sensors(
    nullptr, // vertical tracking wheel 1, set to null
    nullptr, // vertical tracking wheel 2, set to nullptr as we are using IMEs
    nullptr, // horizontal tracking wheel 1
    nullptr, // horizontal tracking wheel 2, set to nullptr as we don't have a second one
    &inertial // inertial sensor
);

// create the chassis
lemlib::Chassis chassis(drivetrain, linearController, angularController, sensors);

