std::unique_ptr simpleDevice(new SimpleDevice());
/**************************************************************************************
** Return properties of device.
***************************************************************************************/
void ISGetProperties (const char *dev)
{
 simpleDevice->ISGetProperties(dev);
}
/**************************************************************************************
** Process new switch from client
***************************************************************************************/
void ISNewSwitch (const char *dev, const char *name, ISState *states, char *names[], int n)
{
 simpleDevice->ISNewSwitch(dev, name, states, names, n);
}
/**************************************************************************************
** Process new text from client
***************************************************************************************/
void ISNewText (const char *dev, const char *name, char *texts[], char *names[], int n)
{
 simpleDevice->ISNewText(dev, name, texts, names, n);
}
/**************************************************************************************
** Process new number from client
***************************************************************************************/
void ISNewNumber (const char *dev, const char *name, double values[], char *names[], int n)
{
 simpleDevice->ISNewNumber(dev, name, values, names, n);
}
/**************************************************************************************
** Process new blob from client
***************************************************************************************/
void ISNewBLOB (const char *dev, const char *name, int sizes[], int blobsizes[], char *blobs[], char *formats[], char *names[], int n)
{
    simpleDevice->ISNewBLOB(dev, name, sizes, blobsizes, blobs, formats, names, n);
}
/**************************************************************************************
** Process snooped property from another driver
***************************************************************************************/
void ISSnoopDevice (XMLEle *root)
{
  INDI_UNUSED(root);
}










SimpleDevice::SimpleDevice()
{
}
/**************************************************************************************
** Client is asking us to establish connection to the device
***************************************************************************************/
bool SimpleDevice::Connect()
{
    DEBUG(INDI::Logger::DBG_SESSION, "Dome Driver has connected successfully!");
    return true;
}
/**************************************************************************************
** Client is asking us to terminate connection to the device
***************************************************************************************/
bool SimpleDevice::Disconnect()
{
    DEBUG(INDI::Logger::DBG_SESSION, "Dome Driver has disconnected successfully!");
    return true;
}
/**************************************************************************************
** INDI is asking us for our default device name
***************************************************************************************/
const char * SimpleDevice::getDefaultName()
{
    return "Dome Driver Is HERE";
}
