#ifndef SHIPMENT_MODULE_H
#define SHIPMENT_MODULE_H

#define SMALL_BOX_VOL 0.25
#define MED_BOX_VOL 0.50
#define LARGE_BOX_VOL 1.0
struct Shipment
{
    double vol;
    int weight;
    struct Point destination;
};


#endif