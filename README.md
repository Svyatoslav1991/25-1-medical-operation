# 25-1-medical-operation

Implement a simple simulation of a medical operation on a patient.
The user acts as a surgeon who requests instruments from an assistant and applies them according to the situation.
The user interacts with the program using commands.
Commands do not have complex built-in logic: they simply take the necessary data as arguments and print messages to the console about execution.
Command data is one or two two-dimensional points in double format with X and Y coordinates, respectively.
The scalpel command takes as input two 2D coordinates for the start and end of a cut or clipping line.
When executed, a message is displayed in the console stating that a cut has been made between the entered coordinates.
The hemostat command accepts as input one point at which it is required to make a clamp, which is also reported to the console.
The tweezers command - tweezers, like the clamp, accept one point to apply.
A message about this is displayed in the console.
The suture command is a surgical needle that makes a suture between two specified points.
The operation always starts with the scalpel command and ends with the suture command.
To terminate the program, their parameters-points must match.
The program needs to be implemented with exactly one header file and one source code file (CPP).
The header file should contain tool functions.
In the main file - the main logic of the program, processing user input.
