

#include "landbasedrobot.h"
#include<string.h>
#include<iostream>

/**
* @brief GoUp routine.  Robot moves in Up direction. 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedRobot::GoUp(int x_, int y_){
     std::cout << "LandBasedRobot::GoUp is Called" << std::endl;
}

/**
* @brief GODown routine. Robot moves in Down direction 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedRobot::GoDown(int x_,int y_){
     std::cout << "LandBasedRobot::GoDown is Called" << std::endl;
}

/**
* @brief TurnLeft routine. Robot moves in left direction 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedRobot::TurnLeft(int x_,int y_){
     std::cout << "LandBasedRobot::TurnLeft is Called" << std::endl;
}

/**
* @brief TurnRight routine. Robot moves in right direction 
* @param x,y  are coordinates
* @return Nothing
*/
void rwa3::LandBasedRobot::TurnRight(int x_,int y_){
     std::cout << "LandBasedRobot::TurnRight is Called" << std::endl;        
}

/**
* @brief PickUp routine.The arm actuates to pick up the object 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedRobot::PickUp(std::string){
     std::cout << "LandBasedRobot::PickUp is Called" << std::endl;        
}

/**
* @brief Release routine. The arm releases the object. 
* @param x,y  arecoordinates
* @return Nothing
*/
void rwa3::LandBasedRobot::Release(std::string){
     std::cout << "LandBasedRobot::Release is Called" << std::endl;        
}


