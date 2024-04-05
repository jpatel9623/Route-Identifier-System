#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#define MAX_CARGO_WEIGHT 1000
#define MAX_CARGO_VOL 36    
#include "mapping.h"


struct Truck
{
    int cargoWeight;
    double cargoVol;
    struct Route* route;
    
};

int AssignTruck(struct Shipment s);

float calculateUtilizationScore(int weight, double vol);

#endif
