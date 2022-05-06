# sw-power
Software for the power board


Les commandes i2c sont exactements les mêmes pour les deux robots. 

#Commandes I2C

Registre      Description         Format    Read/w    Default     Human

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
  
  
  



