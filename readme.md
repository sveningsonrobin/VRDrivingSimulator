# DATX02-16-10

##Important note

In the level *Open World* precomputed lightning and shadows have been disabled, and must be disabled when pushing the Level to Github. Github only allows 100MB large files and when enabling precomputed shadows the *Open World* level gets much larger than 100MB. The setting is called *Force No Precomputed Lightning* and is found under *World Settings* in the *Open World* Level. So when you want to run the simulator with shadows, make sure the setting is set to false and rebuild the project. And when you push to Github, make sure the setting is set to true and rebuild the project.


##Extract from User Manual

For the full manual, please take a look [here](https://github.com/sveningsonrobin/VRDrivingSimulator/Documentation);


###Hardware requirements

**Computer**

The computer used should at least have the minimum specs of Unreal Engine 4. You can read about the minimum specs of UE4 here:

https://docs.unrealengine.com/latest/INT/GettingStarted/RecommendedSpecifications/

We recommend using an advanced graphics card. During our development we have used a NVIDIA GeForce GTX 970 which has worked alright.

If you want to use VR with the simulator there are different system requirements for the different VR-HMD:s, the requirements for the Oculus Rift are found here:

https://www.oculus.com/en-us/blog/powering-the-rift/

OSVR doesn’t seem to have a specified minimum system requirements.


**Virtual Reality (optional)**

The simulator is designed to use a VR-headset, but it does work without one. We recommend using Oculus Rift DK2 which is plug and play with UE4. There are other VR-HMD:s that can be used, but they might not be plug and play.


**Steering Wheel and pedals (optional)**

A steering wheel and pedals is recommended for best simulator experience, but the simulator can be run with the keyboard. We have been using the Thrustmaster Ferrari Racing Wheel Red Legend Edition steering wheel and pedals. With the correct driver it works well with Unreal Engine 4.  Any steering wheel can be used as long as it is supported by your computer setup. The simulator uses the plugin JoystickPlugin in order to find the Wheel and Pedals. If you choose to use another set of pedals and wheel you will have to re-code a small part of the input system. You will have to create a new set of Axis Mappings for your setup and bind your wheel and pedals to those. Furthermore you will have to map those axis events to the correct output. The value of the Axis Mappings might be bugged (it was for the Thrustmaster wheel) and you will then have to use the Get Previous Joystick State function in order to retrieve the correct the axes values of your wheel and pedals. Those values then need to transformed to function properly.

The gas pedal should follow the pattern of [0,1] where 1 is maximum throttle and 0 is no throttle at all. The brake pedal should be transformed to follow the pattern of [0,x] where x is greater than 0, 0 is no braking and > 0 is full braking power. The wheel output should follow the pattern of [-1,1] where at -1 the wheel is at its leftmost position and vice versa. The wheel might already follow that pattern. 

Note: It’s important to identify which axes index corresponds to which pedal or wheel in the Axes array given by the Get Previous Joystick State function; this is easiest done by trial-and-error.


###Installation

Clone the code from this repository, the project is then opened by opening the file “VRDrivingSimulator\MyProject2\MyProject2.uproject” with Unreal Engine 4.


**Unreal Engine**

Unreal Engine 4 has been used during our development. We have been using UE4 version 4.10.4, but any version that can load the project can be used. Newer or older versions of UE4 might require you to convert the project to another version of UE4.


**Visual Studio**

Visual Studio c++ 2015 or a later version is required if you want to export the project to an executable application. You can however run the simulator directly from UE4 without having to install VS.


**Getting started**

When you are building the application yourself, you want to open up the UE4 project to begin with. The simulator can be played directly by pressing Play, it is recommended to build the project before running it by hitting the Build button. An executable may be created by using the built in function under “File\Package project” in Unreal Engine. On Unreal Engine’s website there are a lot of good tutorials for getting started with UE4.

https://docs.unrealengine.com/latest/INT/GettingStarted/index.html

To run the so called Open World, which is the city which allows you to freely drive around, you will have to open up the level Open World which is found under “VRDrivingSimulator\Maps\Open_world\”. In the folder “VRDrivingSimulator\Maps” you can also find example scenarios. To run the project with the user interface, open up the level StartingScene in the folder “VRDrivingSimulator\UI”.


##Keybinds

Reverse: R or SE+ST on wheel

Clutch (koppling): F or L3/11

Gear Up: B or R2/8

Gear Down: V or R3/9

Toggle Wheel+Pedals: F9

Toggle Automatic/Manual: F8


##Credits

Special thanks to Daniel Sjölie for his support during the project, to Rama for his [VictoryPlugin](https://github.com/EverNewJoy/VictoryPlugin	) and Ikarus76, samiljan and tsky1971 for the [JoystickPlugin](https://github.com/Ikarus76/UEJoystickPlugin).

Many textures are downloaded from http://texturelib.com/.

