#ifndef SHIPMENT_H
#define SHIPMENT_H

#define SMALL_BOX_VOL 0.25
#define MED_BOX_VOL 0.50
#define LARGE_BOX_VOL 1.0
struct Shipment
{
    double vol;
    int weight;
    struct Point destination;
};

int validate(double size, int weight, struct Point destination);

void read();


#endif
