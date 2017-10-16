import roombaide.io.*;
MCP4725 dac;

void setup() {
  //printArray(I2C.list());
  dac = new MCP4725(I2C.list()[0], 0x60);
}

void roboLoop() {
  background(map(mouseX, 0, width, 0, 255));
  dac.setAnalog(map(mouseX, 0, width, 0.0, 1.0));
}
