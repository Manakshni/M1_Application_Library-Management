#TEST PLAN:
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
