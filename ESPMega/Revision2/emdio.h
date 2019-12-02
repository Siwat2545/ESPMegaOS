#include <Adafruit_MCP23017.h>
class DigitalIO {
    public:
        DigitalIO();
        DigitalIO(uint8_t address);

        void initialize();
        void pullup(int pin);
        int digitalRead(int pin);
        void digitalWrite(int pin,int value);
    private:
        uint8_t devAddr;
};
