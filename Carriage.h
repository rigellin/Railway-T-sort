class Carriage
{
    bool type;
    int number;
    
    public:
    // Constructors
        // Default constructor
        Carriage();
        // Constructor with parameters
        Carriage(bool newType, int newNumber);
        // Copy constructor
        Carriage(const Carriage &newCarriage);
        
    // Methods
        bool getType();
        void setType(bool newType);
        int getNumber();
        void setNumber(int newNumber);
};
