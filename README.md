# sw-power
Software for the power board


I2C commands are the same for the two robots.

#Commandes I2C


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

							
						
  #Documentation
  
  
  



