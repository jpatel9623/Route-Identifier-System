#ifndef INIT_H
#define INIT_H
#include "truck.h"
#include "shipment.h"
#include "mapping.h"

struct Map* baseMap;
struct Truck trucks[3];

void init(void);

#endif
