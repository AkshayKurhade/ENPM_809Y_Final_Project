/**
* @file main.cpp
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
* @section DESCRIPTION
*
* This project is a C++ implementation of 'Mobile robotic arms that can drive through a maze and pick up objects'.
*/

#include "landbasedwheeled.h"
#include "landbasedtracked.h"
#include <vector>
#include <iostream>

//--prototype
void FollowActionPath(  rwa3::LandBasedRobot *robot, const std::vector<std::string> &vec, std::string obj);

void FollowActionPath(rwa3::LandBasedRobot *robot, const std::vector<std::string> &vec,std::string obj){
    int x{robot->get_x()};//--should be 1 for wheeled and 2 for tracked
    int y{robot->get_y()};//--should be 4 for wheeled and 3 for tracked
    for (auto s: vec){
        if (s.compare("up")==0)
            robot->GoUp(x,y);
        else if (s.compare("down")==0)
            robot->GoDown(x,y);
        else if (s.compare("right")==0)
            robot->TurnRight(x,y);
        else if (s.compare("left")==0)
            robot->TurnLeft(x,y);
        else if (s.compare("pickup")==0)
            robot->PickUp(obj);
        else if (s.compare("release")==0)
            robot->Release(obj);
    }
}

int main(){
    //rwa3::LandBasedRobot base_robot("none",1,2);--//error:LandBasedRobot is an abstract class
    rwa3::LandBasedRobot *wheeled = new rwa3::LandBasedWheeled("Husky",1,4);
    std::vector<std::string> action_path_wheeled {"up","right","pickup","left","down","release"};
    FollowActionPath(wheeled,action_path_wheeled,"book");
    std::cout << "--------------------------------------------------------------------" << std::endl;
    rwa3::LandBasedRobot *tracked = new rwa3::LandBasedTracked("LT2-F",2,3);
    std::vector<std::string> action_path_tracked {"up","left","pickup","down","right","release"};
    FollowActionPath(tracked,action_path_tracked,"cube");
    
    delete wheeled;
    delete tracked;
    
    return 0;
}