# sw-power
Software for the power board


I2C commands are the same for the two robots.

#Commandes I2C
| Name | Address | type |
|------|---------|------|
| START | 0x01 | start the odometry |
| REG_STATUS | 0x02 | uint8 error code : 0x00 Error, 0x01 Running, 0x1n Overflow on the register n |
| REG_LATCH | 0x03 | uint32 timestamp value since start in (ms) at the moment of the Latch |
| REG_DPOS | 0x04 | int16 delta position since the last latch in mm |
| REG_DANGLE | 0x05 | int16 delta angle since the last latch in 10th of degree |
| REG_POS | 0x06 | 2xuint16 absolute position on the table with uint16 position in X and uint16 position in Y |
| REG_ANGLE | 0x07 | uint16 position in 100th of deg (1 turn = 36000 100th of deg)|
| REG_SPEED | 0x08 | int16 instant speed in mm/s|
| REG_SETPOS | 0x09 | 2xuint16 absolute position in mm to reset the robot position |
| STOP | 0x10 | stop the calculation |
| REG_QEPL | 0x20 | return the value of the Qep Register (nbr of pulses). No need to latch|
| REG_QEPR | 0x21 | return the value of the Qep Register (nbr of pulses). No need to latch|

|Registre |     Description   |      Format |   Read/w |   Default|     Human|
|---------|
Micro :

0x00	        Device string	      String	  r	        CRH PWR			
0x01	        Device version	    Word	    r	        0x21	         
0x02	        Status		                    r				
							
Battery :							
							
0x03	        Voltage	            Word	    r		                  mV
0x04	        Current	            Word	    r		                  mA	
0x05	        Remaining capacity	Word	    r		                  %
0x06	        Run time to empty	  Word	    r		                  minutes	
0x07	        Cycle count	        Word	    r		                  /	
							
LTC :							
							
	Read Vin	word	r	/	V	0x5a	0x88
	Read Iin	word	r	/	A	0x5a	0x89
	Read Vout	word	r	/	V	0x5a	0x8b
	Read Iout	word	r	/	A	0x5a	0x8c
	Read temperature	word	r	/	°C	0x5a	0x8d
 
General :

            Estop                 bool      r                     1 = shut down Techno Soft 
  
  
  #Documentation
  
  
  



