/**
* @file landbasedrobot.h
* @author GROUP 1
* @version 1.0
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
*/

#pragma once

#include<iostream>


/** @brief Namespace::rwa3*/

namespace rwa3
{

	/**
* @brief This is an abstract class containing attributes and methods for landbased navigation and handling of objects 
* @param name_: Name of the robot. 
* @param speed_: Driving speed of the robot.
* @param width_: Width of the base of the robot. 
*@param length_: Length of the base of the robot.
* @param height_: Height of the base of the robot.
* @param capacity_: Payload of the arm. 
* @param int x_: X coordinate of the robot in the maze. 
*@param int y_: Y coordinate of the robot in the maze. 
*/
class LandBasedRobot
{
	public:
/**
* @brief This is the default constructor for land based tracked robot
* @param name Name is set to None.
* @param x x co-ordinate is set to 0.
* * @param y x co-ordinate is set to 0.
 */
    LandBasedRobot(std::string name="none", int x=0, int y=0)
    : name_{name}, x_{x}, y_{y}{
        //std::cout << "3-param constructor LandBasedRobot " << std::endl;
        };
    virtual ~LandBasedRobot(){
        //std::cout << "Destructor LandBasedRobot" << std::endl;
        };
        
    virtual void GoUp(int,int)=0;
    virtual void GoDown(int,int);
    virtual void TurnLeft(int,int);
    virtual void TurnRight(int,int);
    virtual void PickUp(std::string);
    virtual void Release(std::string);
    
    /**
     * @brief Gets x co-ordinate
     * @return x co-ordinate
     */
     int get_x() const{
        return x_;
    }
    
	/**
     * @brief Gets y co-ordinate
     * @return y co-ordinate
     */
    int get_y() const{
        return y_;
    }
    
protected:
    std::string name_;
    double speed_; //Driving speed of the robot.
    double width_; //Width of the base of the robot. 
    double length_; //Length of the base of the robot.
    double height_; //Height of the base of the robot.
    double capacity_; // Payload of the arm. 
    int x_; //X coordinate of the robot in the maze. 
    int y_; //Y coordinate of the robot in the maze.
};

}

