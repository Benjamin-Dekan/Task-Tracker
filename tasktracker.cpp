#include <iostream>
#include <string>

class CLI {
    public:
    int id;
    std::string description;
    std::string status;
    std::string createdAt;
    std::string updatedAt;
};

int main () {



    while(1) {
        std::string userInput;
        std::getline(std::cin, userInput);

        // Checks if userInput is an "add", "update" or "delete" command
        if (userInput[0] == 'a') {
            std::string addInput;
            int checkFormat = 0;
            for (int i = 0; i < userInput.length(); i++) {
                if (userInput[i] == '"') {
                    int j = 0;
                    int checkInfinite = 0;
                    checkFormat = 1;
                    addInput.clear();
                    while (userInput[i + j] != '"' && (i + j) < userInput.length()) {
                        addInput += userInput[i + j];
                        j++;
                        if (checkInfinite > 10000) {
                            std::cout << "Add command used incorrectly. Please ensure proper quotations around the message you wish to add, i.e: add \"Buy Milk\"." << std::endl;
                        }
                    }

                    if ((i + j) >= userInput.length() || userInput[i + j] !='"') {
                        std::cout << "Add command used incorrectly. Missing closing quotation mark." << std::endl;
                    }
                    break;
                }
            }
            if (checkFormat <= 0) {
                std::cout << "Add command used incorrectly. Please ensure proper quotations around the message you wish to add, i.e: add \"Buy Milk\"."<< std::endl;
            }




        } else if(userInput[0] == 'u') {

        } else if (userInput[0] == 'd') {

        } else {
            std::cout << "Unrecognized command. Please enter a valid command" << std::endl;
        }

    }

    return 0;
}