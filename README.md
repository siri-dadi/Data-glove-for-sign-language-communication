This project was made as fulfillment for the course Technical Answers to Real-World Problems(TARP). 

This consists of an Arduino code that takes the value of the flex sensors, converts it to the bend angle which is then used to compute the sign for each alphabet based on the American Sign Language.

There is also an excel file that consists of the data collected by computing the bend angle of each finger to analyse and get the exact value to estimate the band angle for each alphabet.

Components:

Arduino Uno Micro Controller:
It is a micro controller board based on ATmega328P. it consists of 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header and a reset button. 

![tarp1](https://user-images.githubusercontent.com/83921032/231151326-f38fac58-f8ee-48a5-9547-ad595523a1f1.jpg)



Flex Sensors:
It is a sensor that measures the amount of deflection or bending. This helps convert the bending of the fingers into angles to assess the alphabet being signed. These will be connected to a resistor (10k ohm in this case). A total of 5 sensors will be attached to a glove inorder to construct this setup.

![tarp2](https://user-images.githubusercontent.com/83921032/231151596-1b760cab-adaa-4bec-bc1f-4b783b08edd7.jpg)


Resistors:
10K ohms resistors are used for this project. As mentioned above, the resistor helps create a voltage barrier. The variable voltage can be read by the analog-to-digital converter of the micro controller.

![image](https://user-images.githubusercontent.com/83921032/231141737-5f8b81a2-8318-4f83-b52d-1b87e4fa7bd6.png)

The flex sensors are soldered to core wires and stitched to a glove to construct a data glove. These core wires are then connected to the arduino along with the resistors.

![tarp3](https://user-images.githubusercontent.com/83921032/231151884-d3172e83-12b3-46c6-896c-d50e4fba9797.jpg)

Initially, the angles made for each alphabet are recorded multiple times to analyse the right range of angles for each finger while signing the alphabet. This data has been added to the repository. Once it is assessed, combinations of ranges of the angles made by each finger for every alphabet is analysed. Conditions for communicating that alphabet have then been added to the arduino code.

![tarp4](https://user-images.githubusercontent.com/83921032/231152178-3e5d6df6-242a-4e90-ab97-61b8856d171d.jpg) ![tarp5](https://user-images.githubusercontent.com/83921032/231152335-7c24eae7-0694-47a0-af3e-6cd3b6fd921f.jpg) ![tarp6](https://user-images.githubusercontent.com/83921032/231152592-8f6e3365-8645-486c-a9b6-784ba81aeeeb.jpg) ![tarp7](https://user-images.githubusercontent.com/83921032/231152878-2bc0ccd6-8ea1-42f7-aa8b-aaf171d2cba6.jpg)






