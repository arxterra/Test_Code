//USB Host Compatibility Test for Arxterra Software//
//*************************************************//
//This ino is to test your phones compatibility for usb communicaton
//Required Hardware: Arduino UNO R3, OTG Cable, Android v3.1+
//Additional help and instructions can be found at www.arxterra.com
//Android App is available at:
//https://github.com/arxterra/Arxterra-Arduino-Uno-Communicator/blob/master/ArduinoCommunicatorActivity.apk



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("This Phone will Work!");
  delay(2000);
}
