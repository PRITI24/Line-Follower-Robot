# Line-Follower-Robot
White Line Following on black path using IR sensors(Gives 1-black, 0-white)
# LINE FOLLOWER USING TWO IR SENSORS
# 1.What is line follower robot?
Line follower robot is something which follows a particular line ,it may be black on white background (or)white on black background.Here we are using white on black background.

# 2.How it works?

It works in the way such that directions are shown by sensors input and according to that motor speed is changed.It has to foolow white  line hence it is neccessary to know what values does sensor give on white and black line.

# 3.What are ir sensors?
IR sensors are called infrared sensors they emit infrared radiation through emitter placed on ir sensors and signals are received through receiver placed on ir sensors.Received values depends on obtacle in path of infrared radiation. 
idth.
![alt text](https://i1.wp.com/henrysbench.capnfatz.com/wp-content/uploads/2015/06/Arduino-IR-Collision-Detection-Module-Pin-Outs.png)
# 4.How IR sensors are interfaced and what is interfacing?
Interfacing an ir sensors with arduino means operating ir sensors using arduino codes.Interfacing is important to get the sensors value on white and black colour sinnce different sensors give differentt values on black and white.we first tried to understand that how many pins are there on ir sensors and what are their functions.we got to know that that 3 pins and....
1.output
2.vcc=5V
3.gnd
Now connect these pins to arduino and digitalread output value and expose sensors to black and white colour.

# 5.How ir sensors transmits and receive signal?
Infrared radiations are emitted from transmitter,they received by receiver .....here white and black are totally contrast to each other hence we use digital pins,,,,otherwise use lsa08 for multiple colours on multiple background.

# 6.What are sensor alignments?
Sensor Alignment here means that how we are placing sensors to detect perfect values for perfect positions.HERE:
1.One sensor on black and one on white.
2.Both sensor on White.
3.Both sensor on black.
We are considering 1st option.

# 7.What are motor drivers?
A motor driver is a little current amplifier; the function of motor drivers is to take a low-current control signal and then turn it into a higher-current signal that can drive a motor.

# 8.Why motor drivers are needed?
a.)Driver can deliver high voltage and current to the motor. A usual microcontroller can't deliver that much of current unless it is specifically designed to drive those kind of loads.
b.)A properly designed driver circuit includes protection circitry so that it suppress the back-EMF and doesn't send it back to the logic side.
# 9.What is pwm?
 Pulse Width Modulation, or PWM, is a technique for getting analog results with digital means. Digital control is used to create a square wave, a signal switched between on and off. This on-off pattern can simulate voltages in between full on (5 Volts) and off (0 Volts) by changing the portion of the time the signal spends on versus the time that the signal spends off. The duration of "on time" is called the pulse width. To get varying analog values, you change, or modulate, that pulse width. If you repeat this on-off pattern fast enough with an LED for example, the result is as if the signal is a steady voltage between 0 and 5v controlling the brightness of the LED.

# 10.What is duty cycle? 
 In the graphic below, the green lines represent a regular time period. This duration or period is the inverse of the PWM frequency. In other words, with Arduino's PWM frequency at about 500Hz, the green lines would measure 2 milliseconds each. A call to analogWrite() is on a scale of 0 - 255, such that analogWrite(255) requests a 100% duty cycle (always on), and analogWrite(127) is a 50% duty cycle (on half the time) for example.

Once you get this example running, grab your arduino and shake it back and forth. What you are doing here is essentially mapping time across the space. To our eyes, the movement blurs each LED blink into a line. As the LED fades in and out, those little lines will grow and shrink in length. Now you are seeing the pulse width.
![alt text](https://www.arduino.cc/en/uploads/Tutorial/pwm.gif)
