#ifndef ArdXbee_h
#define ArdXbee_h

#include <Arduino.h>

// se define las funciones
class XbeeLocal
{
public:
	XbeeLocal();
	void setAdress(int[8]);
	//definicion del objeto enviar datos
    bool sendData(char[]);
	bool sendData(int[8],char[]);
	//definicion de objeto recibir datos
    int recData();
	char* recData(bool);
    //definicion de objeto obtener direcciones
	int* nodeDiscover();
	int getDevices();
	char inputBuffer[20];
	int inputAdress[8];
private:
	int OuputAdress[8];
	int attachedDevices;
};

class XbeeRemote
{
public:
	XbeeRemote(int[8]);
	int* getAdress();
private:
	int adress[8];
};
#endif
