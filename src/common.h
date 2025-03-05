#ifndef COMMON_H
#define COMMON_H

typedef enum ForwardInformation ForwardInformation;

enum ForwardInformation {
    ForwardLeft = 1,
    ForwardRight = 2,
    ForwardSelf = 3 
};

typedef struct FederatedData FederatedData;

struct FederatedData {
    int source;
    int value;
};

#endif //COMMON_H