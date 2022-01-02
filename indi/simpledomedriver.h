#include "indibase/defaultdevice.h"
class SimpleDevice : public INDI::DefaultDevice
{
public:
    SimpleDevice();
protected:
    bool Connect();
    bool Disconnect();
    const char *getDefaultName();
};
