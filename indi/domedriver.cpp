#include "config.h"
  
bool MyDriver::initProperties()
{
      char skelPath[MAX_PATH_LENGTH];
      const char *skelFileName = "indi_thurayadomedriver_sk.xml";
      snprintf(skelPath, MAX_PATH_LENGTH, "%s/%s", INDI_DATA_DIR, skelFileName);
      struct stat st;
  
      char *skel = getenv("INDISKEL");
      if (skel)
          buildSkeleton(skel);
      else if (stat(skelPath,&st) == 0)
          buildSkeleton(skelPath);
      else
          IDLog("No skeleton file was specified. Set environment variable INDISKEL to the skeleton path and try again.\n");
  
      return true;
}
