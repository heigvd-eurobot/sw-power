# sw-power
Software for the power board


I2C commands are the same for the two robots.

###Commandes I2C


| Registre | Description | Format | Read/w | Default | Human |
|----------|-------------|--------|--------|---------|-------|
| 0x00 | Device string | String	| r | CRH PWR | |	
| 0x01 | Device version | Word	| r | 0x21 | 2.1 |
| 0x02 | Status | uint_8 | r |  |  |	
| 0x03 | Voltage | Word | r |  | mV |
| 0x04 | Current | Word | r |  | mA |
| 0x05 | Remaining capacity | Word | r |  | % |
| 0x06 | Run time to empty | Word | r |  | minutes |
| 0x07 | Cycle count | Word | r |  | / |

							
						
  ###Documentation
  
  https://github.com/o-gs/dji-firmware-tools/issues/196
  https://github.com/o-gs/dji-firmware-tools/blob/master/comm_sbs_chips/BQ40z307.py
  
  DJI example code : https://github.com/czipis/mavic-mini-battery-info/blob/master/mavic-mini-battery-info.ino
  
  LTC datasheet : https://www.analog.com/media/en/technical-documentation/data-sheets/ltc3886-3886-1.pdf
  
  ###I2C 
  
  Two bus, an extern one which can be connected through QWIIC connectors and an intern one which connects the DJI battery and the LTC. On the new power board, we can directly be connected from the exterior to the intern bus.
  
  
  



