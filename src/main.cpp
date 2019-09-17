#include<Arduino.h>

int segmentToPort[]={3,4,5,6,7,8,9};

bool ledBits[10][7]={
     {1,1,1,0,1,1,1},  //0
     {1,0,0,0,0,0,1},  //1
     {0,1,1,1,0,1,1},  //2
     {1,1,0,1,0,1,1},  //3
     {1,0,0,1,1,0,1},  //4
     {1,1,0,1,1,1,0},  //5
     {1,1,1,1,1,1,0},  //6
     {1,0,0,0,0,1,1},  //7
     {1,1,1,1,1,1,1},  //8
     {1,1,0,1,1,1,1},};//9

void setup(){  
     for (int i=0;i<=sizeof(segmentToPort);i++) {  
          pinMode(segmentToPort[i],OUTPUT);  
     }  
}  
void printLEDDigit(int v){  
     for (int i=0;i<=sizeof(segmentToPort);i++) {  
          digitalWrite(segmentToPort[i],ledBits[v][i]);  
     }  
}  
void loop(){  
     for (int i=0;i<=9;i++){  
          printLEDDigit(i);  
          delay(400);  
     }  
}
