#ifndef _CONFIGRATION_H_
#define _CONFIGRATION_H_


#define TOOL_NUM     2    //set in 1~6
#define EXTRUDER_NUM 1    //set in 1~6
#define FAN_NUM      1    //set in 1~6

#define HEAT_MAX_TEMP    {150,    275,       275,       275,       275,       275,       275}    //max temperature can be set
#define HEAT_SIGN_ID     {"B:",   "T0:",     "T1:",     "T2:",     "T3:",     "T4:",     "T5:"}
#define HEAT_DISPLAY_ID  {"Bed",  "T0",      "T1",      "T2",      "T3",      "T4",      "T5"}
#define HEAT_CMD         {"M140", "M104 T0", "M104 T1", "M104 T2", "M104 T3", "M104 T4", "M104 T5" };
#define HEAT_WAIT_CMD    {"M190", "M109 T0", "M109 T1", "M109 T2", "M109 T3", "M109 T4", "M109 T5" };

#define TOOL_CHANGE      {"T0",   "T1",      "T2",      "T3",      "T4",      "T5"}
#define EXTRUDER_ID      {"E0",   "E1",      "E2",      "E3",      "E4",      "E5"}

#define FAN_MAX_PWM      {255,       255,       255,       255,       255,       255}
#define FAN_ID           {"Fan0",    "Fan1",    "Fan2",    "Fan3",    "Fan4",    "Fan5"}
#define FAN_CMD          {"M106 P0", "M106 P1", "M106 P2", "M106 P3", "M106 P4", "M106 P5" };

#define DEFAULT_SPEED_MOVE      3000  //Move default speed  mm/min

#define EXTRUDE_SLOW_SPEED      60   //Extrude speed  mm/min
#define EXTRUDE_NORMAL_SPEED    600  //
#define EXTRUDE_FAST_SPEED      1200 //

//size of machine
#define X_MAX_POS 240
#define Y_MAX_POS 240
#define Z_MAX_POS 251


//don't modify
#define V1_0  0
#define V1_1  1
#define V1_2  2

#endif









