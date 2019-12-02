#define VERSION 1.0.0

//ESPMega Revision 2.0(a/b/c) Pin Map
#define A0 0
#define A1 1
#define A2 2
#define A3 3
#define A4 4
#define A5 5
#define A6 6

#include emdio.h //Digital IO Components - MCP23017
#include emadc.h //Analog ADC Components - ADS1115
#include emrom.h //On-Board EEPROM Components - HC16ES3F
#include empowerpak.h //Siwat INC PowerPAK(tm) Components (PPVoltaic/PPThermoElectric/PPCCharge/PPLiPo)
#include emcomm.h //NodeRED Communication Components (MQTT/Web Socket JS)
#include emrtos //Real Time OS Components (Thread/FreeRTOS)
