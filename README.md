# winter24-sft221-ZCC--b
SFT GROUP PROJECT

# Project Description

You have been hired by a local delivery company with three trucks delivering on three different routes in the city. The city map is represented as a 25 by 25 square grid. The trucks start from the offices at square 1A, initially following a common path and then branching out on blue, yellow, and green routes. Your task is to optimize the delivery process, considering truck capacity, distance to destination, and diversion limitations.

# Measuring Distance

The algorithm uses Euclidean distance, considering obstacles, to find the closest truck to the destination.

# Shortest Path Algorithm

The algorithm is employed to find the shortest path between two points, avoiding buildings.

# Algorithm Overview

The algorithm follows these steps:
1. Follow the route for each truck.
2. Calculate Euclidean distance to the destination for each square on each truck's route.
3. Select the minimum Euclidean distance for each truck.
4. Calculate the shortest path from the nearest point on the route to the destination.
5. If a truck cannot find a path to the destination, exclude it from the delivery.
6. Select the truck with the shortest path and attempt to add the package.
7. If the truck is full, try the next closest truck.
8. If no truck can take the package, store it at the depot for the next day.

# Sample Output

```plaintext
Seneca Deliveries
=================
Enter shipment weight, box size, and destination (0 0 x to stop): 20 .5 28x
Invalid destination
Enter shipment weight, box size, and destination (0 0 x to stop): 20 3 12L
Invalid size
Enter shipment weight, box size, and destination (0 0 x to stop): 1505 .5 12L
Invalid weight (must be 1-1500 Kg.)
Enter shipment weight, box size, and destination (0 0 x to stop): 20 .5 12L
Ship on BLUE LINE, no diversion
Enter shipment weight, box size, and destination (0 0 x to stop): 400 1.0 8Y
Ship on GREEN LINE, divert: 7T, 7U, 7V, 7W, 7X, 7Y, 8Y
Enter shipment weight, box size, and destination (0 0 x to stop): 700 1.0 8Y
Ship on GREEN LINE, divert: 7T, 7U, 7V, 7W, 7X, 7Y, 8Y
Enter shipment weight, box size, and destination (0 0 x to stop): 700 1.0 8Y
Ship on BLUE LINE, divert 18V, 17V, 16V, 15V, 14V, 13V, 12V, 11V, 10V, 9V, 8V, 7V, 7W, 7X, 7Y, 8Y
Enter shipment weight, box size, and destination (0 0 x to stop): 0 0 x
Thanks for shipping with Seneca!
```
# Deliverables

This project involves multiple milestones and follows an agile development process. Key tasks include using the Git repository, documenting code, creating Jira issues, and meeting regularly as a team.

# Group Members

Jeet Patel (Leader)

Yash Shah

Arthav Patel

Jeetkumar Patel

Sahil Khatri

Samarth Shah


