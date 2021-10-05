# R3-SoftwareTask1-SugenJeyakumar
https://www.tinkercad.com/things/cRXTbJnghMB-r3-a1/editel?sharecode=NYsJdqC7lsOzYAKfqXt9DV-SFapuhmwBU_mu_49RD4o
How it works?
The arduino reads the potentiometer value, maps it from 0-99. Then I divide that value by ten to get the tens digit and find the remainder for the ones digit. These numbers are converted to 4 bits each and sent through the segment chip to the seven segment display where each number is displayed.
The chips take in 4 bit values and convert them into the right on offs for the seven segment chip.
![R3-A1](https://user-images.githubusercontent.com/85145499/135941966-6a684568-a0db-4740-aa9e-9508b8790142.png)
