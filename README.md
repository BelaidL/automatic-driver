# Automatic driver

## Description
    This project is a SCADE node that implement an automatic driver for the Lego car. 
The project contains the following :
● the specification of the full software using SCADE System;
● the code for the environment of the automatic driver environment (car simulator, city simulator) developed using SCADE and C;
● the graphical panel for simulation built using Rapid Prototyper;
● Videos: nine videos showing the behaviour of the automatic driver on each
city map provided (documentationScade/movies/*.mp4).

The code is documented and the documentation extracted using the SCADE reporte is provided in file "documentationScade/report.htm" (and "documentationScade/SynCContest_img"). The following notes highlight some specific parts of this documentation. 

![alt text](https://github.com/BelaidL/automatic-driver/tree/master/documentationScade/images/Untitled.png)

## SCADE Code
__Robot__:​ The parameters of the robot and of roads are declared as SCADE constants. 
1. B: distance between wheels
2. DELTA: distance from wheels axis and the bottom color sensor (S1)
3. D: diameter of wheels

__*Important​ ​remark​ ​on​ ​S1*__:​ ​ ​whenever this sensor is close to a boundary between two colors on the ground, it observes a mixture thereof (move the virtual robot close to a road and watch it sensors or see the code in MapADT.c)

__Roads__:​
The road has a central blue (color constant BLUE in SCADE) line of 2 cm width. The left part of the road is colored in CYAN (color constant CYAN in SCADE) and the right part in MAGENTA (color constant MAGENTA in SCADE). The region outside the road is colored in GREY (color constant GREY in SCADE). The road contains two kinds of points represented by transversal ribbons of
width 2 cm:
● waypoints, colored in GREEN, indicate start of stages in the itinerary. The driver has to consult the itinerary when it detects a waypoint;
● stop points, colored in RED, indicate the presence of a traffic light. The color of the traffic light is given by the frontal color sensor S2.

__Maps__:​ Fifteen maps with the development kit. All maps are read at the initialization. The map to be used shall be fixed by the id input of the MapADT operator. The simplest map is 00.map, maps from 07 to 14 are more complex. The image of each map is provided in the inputs directory. Roads are represented by blue lines, waypoints by yellow points, stops by red points and traffic lights by orange points.
Arrows on roads point out the direction of the road.

__Itineraries__:​ Fifteen itineraries. They are read at the initialization. The itinerary to
be used is fixed by the id parameter of the operator Robot::readIti. An itinerary is a sequence of actions with a real parameter. Actions are:
● go : for follow the road until the next waypoint while respecting the traffic lights indications; the parameter is the speed to be used.
● turn : for turn with the angle given as parameter in the counterclock direction then
read the next indication.
● stop : arrived.
New itineraries may be added using files in the inputs directory; the names of files shall be nn.iti such that nn < 50.

__Obstacles__:​ an obstacle file 00.obs describes up to 10 obstacles, each of them is characterized by two coordinates, start time and end times (the times are relative to robot launch by GO button).

## C Code
Some SCADE operators are implemented using C code:
● MapADT: initialize and query maps
● readIti: initialize itineraries
● readObstacles: initialize obstacles
Two operators (testIti and testMap) provide means for unit testing of the operators implemented using C code. Simulation and Testing The simulation of each SCADE operator can be done as usual. To ease the simulation of the automatic driver in the selected city and for the selected itinerary, a Rapid Prototyper environment is provided. To access this simulation environment, the co-simulation shall be set in Project > Code Generation > Setting > Graphical Panel. After the launching of the graphical panel, the simulation is started as usual.

## Graphical Panel
The environment provides a simple graphical interface to simulate the full system. The use of this interface is shown in the videos. The following notes highlight some particular cases not shown by these videos.


__Monitoring__:​ The interface displays all the events (of type eventTy) that are detected by the environment concerning the car: running of the road, running in wrong directions, traffic light run, speed excess.
__Scoring__:​ The two scores are determined by:
● penalties for the monitored events (respecting rules is better)
● driving quality (smoother is better)
__Simulation​ ​speed__:​ ​For machines with a processor of poor performances, it is recommended to increase the latency of the simulation to more than 10 ms.

## Authors
* Belaid LAGHA
* Tiziri GUELLAL
