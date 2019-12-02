  class ADC {
    public:
        ADC();
        ADC(uint8_t address);
        void initialize();
        int analogRead(int pin);
    private:
        uint8_t address;
};
