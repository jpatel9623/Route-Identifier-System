#ifndef UTILS_H
#define UTILS_H

#include "mapping.h"
#include "Shipment.h"
#include "Truck.h"

void getAllTruckPaths(struct Shipment s, struct Truck truck, const struct Map* map, struct Route* routes[MAX_ROUTE], int* size);

int getBestRoute(struct Route routes[MAX_ROUTE], int s0, struct Shipment s);

int containsDestination(struct Route* route, struct Shipment s);

void printRoute(struct Route route, struct Shipment s);

int isBuilding(const struct Route r, const struct Map* map);

#endif
