# OpenLoopPod
The Code that will go on the Pod's processor

The Processor for the Pod has not been determined.

Possible quick-to-implement options include:

	Raspberry Pi (some variant)
	Arduino (some variant)
	STM32 Processor (some variant)

An Intel Core i5 would be phenomenal to use, however I have no knowledge on how to program it.
An simple embedded systems approach would be best. Optimization is key.

# Code Breakdown

# OpenLoopPod Class
Contains the code for overall control.
Makes use of the Kalman Filter, breaks down the matrix components, then does actuation based on what control is needed.
TODO: PID Class needs to be written for use in the OpenLoopPod Class

# Plant Class
The Skates, Brakes, and Pistons are all subsets of this class. Declared these three as Plant variables in the OpenLoopPod Class.
Makes it simple to visualize by making them all Plants and then constructing them as individual classes.
Can be good for information feedback when the Plant being actuated is not known.

# Kalman Class
Kalman Filter Algorithm Goes Here.
Envision a function to "add layer of correction" per sensor input/control input given to the kalman filter

# TODO
Sensor Input Class
PID Class
Implementations for actuation
Platform Specific Code (GPIO Inits, A&D Pin Controlling, etc)

# Misc. Information
https://docs.google.com/document/d/1_rqh8oc4oqWg-S2dRrCMGjVM9x6YdRUE-v4gRO-VCp0/edit?usp=sharing