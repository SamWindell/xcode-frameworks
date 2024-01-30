//
//  IOUSBHostControllerInterfaceHelpers.h
//  IOUSBHostFamily
//
//  Created by Dan Wilson on 4/23/20.
//

#ifndef IOUSBHostControllerInterfaceHelpers_h
#define IOUSBHostControllerInterfaceHelpers_h

#if KERNEL
#include <IOKit/usb/IOUSBHostControllerInterfaceDefinitions.h>
#include <IOKit/usb/IOUSBHostFamily.h>
#else
#include <IOUSBHost/IOUSBHostControllerInterfaceDefinitions.h>
#include <IOKit/usb/IOUSBHostFamilyDefinitions.h>
#endif

#define IOUSBHostCIMessageTypeFromMessage(message) ((IOUSBHostCIMessageType)(((message)->control & IOUSBHostCIMessageControlType) >> IOUSBHostCIMessageControlTypePhase))

#define IOUSBHostCIMessageStatusFromMessage(message) ((IOUSBHostCIMessageStatus)(((message)->control & IOUSBHostCIMessageControlStatus) >> IOUSBHostCIMessageControlStatusPhase))

#ifdef  __cplusplus
extern "C"
{
#endif

IOReturn IOUSBHostCIMessageStatusToIOReturn(IOUSBHostCIMessageStatus status);

IOUSBHostCIMessageStatus IOUSBHostCIMessageStatusFromIOReturn(IOReturn status);

bool IOUSBHostCILinkStateEnabled(const IOUSBHostCILinkState linkState);

const char* IOUSBHostCIMessageTypeToString(IOUSBHostCIMessageType type);

const char* IOUSBHostCIMessageStatusToString(IOUSBHostCIMessageStatus status);

const char* IOUSBHostCILinkStateToString(IOUSBHostCILinkState linkState);

const char* IOUSBHostCIDeviceSpeedToString(IOUSBHostCIDeviceSpeed speed);

#ifdef  __cplusplus
}   // extern "C"
#endif

#endif /* IOUSBHostControllerInterfaceHelpers_h */
