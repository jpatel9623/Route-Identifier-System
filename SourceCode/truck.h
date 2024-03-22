#ifndef TRUCK_H
#define TRUCK_H
#define MAX_CARGO_VOL 36      
#define MAX_CARGO_WEIGHT 1000 

struct Truck
{
    struct Route* route;
    int cargoWeight;
    double cargoVol;
};

#endif
