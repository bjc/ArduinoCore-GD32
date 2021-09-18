#include "TestPlug.h"

#include <cstring>

TestPlug tp;

TestPlug::TestPlug() : arduino::PluggableUSBModule(1, 1, epType) {
  epType[0] = EP_TYPE_INTERRUPT_IN;
  PluggableUSB().plug(this);
}

int TestPlug::getInterface(uint8_t* interfaceNum) {
  // We’re only using one interface.
  *interfaceNum++;

  const uint8_t desc[] = {
    // bLength, bDescriptorType
    9, 4,

    // bInterfaceNumber, bAlternateSetting, bNumEndpoints
    0, 0, 1,

    // bInterfaceClass, bInterfaceSubClass, bInterfaceProtocol
    3, 1, 1,

    // iInterface
    0,

    /*
     * Endpoint 1
     */
    // bLength, bDescriptorType
    7, 5,

    // bEndpointAddress, bmAttributes, wMaxPacketSize, bInterval
    0b10000001, 0b00000011, 8, 0, 64,
  };
  return USB_SendControl(0, desc, sizeof(desc));
}

int TestPlug::getDescriptor(arduino::USBSetup& setup) {
  return 0;
}

// Not sure what this does.
bool TestPlug::setup(arduino::USBSetup& setup) {
  return false;
}

uint8_t TestPlug::getShortName(char* name) {
  const uint8_t nm[] = "test";
  memcpy(name, nm, sizeof(nm));
  return sizeof(nm);
}

char* TestPlug::foo() {
  static char rc[] = "TestPlug::foo()";
  return rc;
}
