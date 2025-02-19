struct dog{
    public:
        std::string name;
        int age;

        void displayAge(){
            std::cout << age << std::endl;
        }

        std::string supername(){
            std::string result{};
            for (char C: name){
                result += C;
                result += " ";
            }
            return result;
        }

};