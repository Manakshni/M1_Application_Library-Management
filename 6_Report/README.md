# MINI PROJECT

# M1_Application_Vehicle speed detector

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/08ed109f5c674146ab5b2e18587acbcc)](https://www.codacy.com/gh/Manakshni/M1_Application_Vehicle-speed-detector/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Manakshni/M1_Application_Vehicle-speed-detector&amp;utm_campaign=Badge_Grade)

[![Code Quality - Static Code - Cppcheck](https://github.com/Manakshni/M1_Application_Vehicle-speed-detector/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Manakshni/M1_Application_Vehicle-speed-detector/actions/workflows/cppcheck.yml)

[![Contribution Check - Git Inspector](https://github.com/Manakshni/M1_Application_Vehicle-speed-detector/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Manakshni/M1_Application_Vehicle-speed-detector/actions/workflows/gitinspector.yml)

![codiga](https://api.codiga.io/project/29939/score/svg)

![codiga](https://api.codiga.io/project/29939/status/svg)

## Folder Structure

Folder        | Description
--------------| ----------------------------------------------
`1_Requirements`         |  Requirements explained in Detail
`2_Architecture`         |  Diagrammatic representations of project
`3_Implementation`        | Implemented inc,src,test and unity with code content
`4_TestPlanAndOutput`       | Tested code and their results
`5_Images`                  |project output image file uploaded
`6_Report`                  |All README.md content updated

# Requirements

## INTRODUCTION

This project is about a method that traffic police use for measuring the speed of moving objects using Distance,CCTV and IR sensors.Municipalities around the world use it to detect speeders and generate revenue,These are used to detect the speed of moving object,speed checker will come handy for the highway traffic police as it will not only provide a digital display in accordance with a vehicle's speed but sound an alarm if the vehicle exceeds the permissible speed for the high way.There are definite rules laid out by authorities about driving vehicle on roads. The most common rule in any country is speed limit in certain roads i.e. you will be in violation of the law if your vehicle speed exceeds this limit.

In order to detect the speed of a moving vehicle, the patrolling officers usually depend on a handheld gun that works on Radar Technology or Lidar Technology. This is a tedious process as the officer has to manually check for over speeding for each vehicle.

What if the vehicle Speed Detection is made automatic? A simple automatic detection of speed of a vehicle is designed in vehicle Speed Detector project, where you can place the system in one place and view the results instantly without any human intervention.

## ADVANTAGES

They reduce the risk of accidents.

It is easy to implement.

It reduces the man effort.

## DISADVANTAGES

Sometimes the circuit got failure and cause various problems.

Infrared detector are extremely expensive which limits their use in many sectors.

## Research

1. A CCTV Camera can be placed on the highway. If any vehicle has crossed the maximum speed limit then this camera will be triggerred to take a picture of the vehicle.

2. We can add voice announcement system. It will intimate the driver that he/she has crossed the over speed condition.

3. We can implement the GSM technology. So that the nearest highway security authorities will be informed about the vehicle which has over speed.

# SWOT analysis

## Strength

creating an SMS facilities to send Vehicle speed limit notification to control cell.

## Weakness

Circuit may get failure.

## Opportunities

Tracking/Sensing the crossing speed between two sensing tool and immediately send message to control room and can save a person from accident.

## Threats

May be the sensor and cctv get damage .

Security issues.

Encryption of data may not be present.

# 4W's and 1 H

## WHO

To traffic control room's and police authorities.

## WHAT

To detect the moving speed of vehicle.

## WHEN

All the time specially @ night time for the safety.

## WHERE

High ways and main roads.

## HOW

Fully automated.

# High level requirements

           1. ID          : HLR_01
            
               DESCRIPTION : Visual Studio code platform.
               
               PLATFORM    : Software.
               
            2. ID          : HLR_02
            
               DESCRIPTION : Window 10 or Linux
               
               PLATFORM    : Software.
               
            3. ID          : HLR_03
            
               DESCRIPTION : Arduino
               
               PLATFORM    : Software
               
# Low level requirements

            1. ID          : LLR_01
            
               DESCRIPTION : sent
               
            2. ID          : LLR_02
            
               DESCRIPTION : not sent

## Cost :

         The cost for implementing a project involving vehicle speed detector is minimal . But the extension of this project to various state of the art domains like identify vehicle colour,speed, movement direction are to be implement. 

## Features:

           1.Can access for 24 x 7.

           2.Protected with password.

           3.Easy to operate.

# Architecture

## Behavioural

## Low Level Diagram:

![flow](https://user-images.githubusercontent.com/94229525/143297984-6bd41e03-7549-457f-a897-7b1cbfe92134.jpg)

## Structural

## High Level Diagram:

![structural diagram](https://user-images.githubusercontent.com/94229525/143298376-236fd7b8-62af-456c-937a-dd76b003d0a2.jpeg)

# Implementation

## Folder Structure
Folder        | Description
--------------| ----------------------------------------------
`inc`         |  header files
`src`         | Source code files for solvinng Arthimetic operations
`test`        | All source code and data for testing purposes
`unity`       | Files for unit testing

# TEST PLAN:

### High Level Test plan:

| ID    | Description                             | Expected O/P | Actual O/P | Type of Test |
|-------|-----------------------------------------| ------------ | ---------- | ------------ |
| H_01  |Record moving vehicle                    |Recording     |SUCCESS     | Requirement  |
| H_01  |Verify number board details              |Details       |SUCCESS     | Scenario     |
| H_03  |Identify licence                         |PASSED        |SUCCESS     | Boundary     |


### Low Level Test Plan:

| ID    | Description                 | Expected O/P | Actual O/P | Type of Test | 
|-------|-----------------------      | ------------ | -----------| ------------ |
| L_01  |Identify and sense vehicle   | Record       |SUCESS      | Requirement  |
| L_02  |Display over speeding        | Alarm        |SUCESS      | Scenario     |
| L_03  |send complaint to controlroom| send/notsend |SUCCESS     | Boundary     |

# Images and video

## project output image

![project output](https://user-images.githubusercontent.com/94229525/143300038-b267109c-1b80-4c5c-ac2b-1455fd6d7d7c.jpg)

## program output image

![program output](https://user-images.githubusercontent.com/94229525/143300082-d8ff2753-0786-46ec-bb45-f5fbff7232a4.png)

## project output video

![project video](https://user-images.githubusercontent.com/94229525/143300242-eb3b0dfd-9373-4ac5-be7b-fc7bb96bd333.gif)

