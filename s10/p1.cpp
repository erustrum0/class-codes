//logic loop, beginning
//make number
//start loop
//  get input
//  compare
//  if higher
//    feedback
//    continue
//  if lower
//    feedback
//    continue
//  player wins, end (go to beginning)



#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {
    std::cout << "Game starting. ";
    while(true) {
        //start game here
        std::cout << "Choosing a number.";

        //get a random number
        srand(time(NULL));
        int num = std::rand() % 100;

        //num of attempts
        int turns = 0;

        //setup mainloop
        bool still_guessing = true;
        while(still_guessing) {
            turns++;
            //get user input
            std::cout << "\nGuess the number: ";
            int attempt;
            std::cin >> attempt;
            if (attempt > num){
                std::cout << "Too high.";
                continue;
            }
            else if (attempt < num) {
                std::cout << "Too low.";
                continue;
            }
            std::cout << "You got it! The number was indeed " << num << ". It took you " << turns << " attempts.\n\n\nNew game! ";
            still_guessing = false;
        }
    }
}