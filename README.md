This project was made as fulfillment for the course Technical Answers to Real-World Problems(TARP). 

This consists of an Arduino code that takes the value of the flex sensors, converts it to the bend angle which is then used to compute the sign for each alphabet based on the American Sign Language.

There is also an excel file that consists of the data collected by computing the bend angle of each finger to analyse and get the exact value to estimate the band angle for each alphabet.

Components:

Arduino Uno Micro Controller:
It is a micro controller board based on ATmega328P. it consists of 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header and a reset button. 

![WhatsApp Image 2023-04-11 at 16 56 38](https://user-images.githubusercontent.com/83921032/231147857-dec0a298-1c23-4f40-8efe-e7e5e5f7de2f.jpg)


Flex Sensors:
It is a sensor that measures the amount of deflection or bending. This helps convert the bending of the fingers into angles to assess the alphabet being signed. These will be connected to a resistor (10k ohm in this case). A total of 5 sensors will be attached to a glove inorder to construct this setup.

![WhatsApp Image 2023-04-11 at 16 56 23](https://user-images.githubusercontent.com/83921032/231148033-e9bd957d-f342-4156-836c-e267640602de.jpg)


Resistors:
10K ohms resistors are used for this project. As mentioned above, the resistor helps create a voltage barrier. The variable voltage can be read by the analog-to-digital converter of the micro controller.

![image](https://user-images.githubusercontent.com/83921032/231141737-5f8b81a2-8318-4f83-b52d-1b87e4fa7bd6.png)

The flex sensors are soldered to core wires and stitched to a glove to construct a data glove. These core wires are then connected to the arduino along with the resistors.

![WhatsApp Image 2023-04-11 at 16 56 37](https://user-images.githubusercontent.com/83921032/231148221-0e533a27-96eb-45f2-9262-b09afb20ab45.jpg)



Initially, the angles made for each alphabet are recorded multiple times to analyse the right range of angles for each finger while signing the alphabet. This data has been added to the repository. Once it is assessed, combinations of ranges of the angles made by each finger for every alphabet is analysed. Conditions for communicating that alphabet have then been added to the arduino code.

![WhatsApp Image 2023-04-11 at 17 01 18](https://user-images.githubusercontent.com/83921032/231149434-991b7599-f7fb-460d-ad68-e320241d4afe.jpg) ![WhatsApp Image 2023-04-11 at 17 01 18](https://user-images.githubusercontent.com/83921032/231149530-55da1978-f8c6-484a-a5d6-e812a8ab3d3e.jpg) ![WhatsApp Image 2023-04-11 at 17 01 19](https://user-images.githubusercontent.com/83921032/231149779-116bbe0e-60ae-43e6-960a-98ac4c25ef7c.jpg)


