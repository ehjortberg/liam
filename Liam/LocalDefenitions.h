
#define CUTTER_MOTOR_TYPE NIDEC

#define BATTERY_TYPE NIMH

#define DEBUG_ENABLED true 

const int NUMBER_OF_SENSORS = 2;  // Number of BWF sensors can be 1-4 depending on shield default 2 left and right front.

// Wheel motor
// 130 default
#define WHEELMOTOR_OVERLOAD   150
#define WHEELMOTOR_SMOOTHNESS 300

// Turning details
#define TURN_INTERVAL         15000
#define REVERSE_DELAY         2
#define TURNDELAY           10 //Reduce for smaller turning angle


#define BWF_DETECTION_ALWAYS      false

// BWF Code for inside and outside
#define INSIDE_BWF          85
#define OUTSIDE_BWF         5

#define GO_BACKWARD_UNTIL_INSIDE


#define __Bumper__

// If you have a lift sensor connection to front wheel (connected to pin9), uncomment this line
#define __Lift_Sensor__

#define MAX_GO_BACKWARD_TIME  10 // try to get inside for max x seconds, then stop and error.
