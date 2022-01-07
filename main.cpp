#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       car
//  action 1:   the car moves forward
car.moveForward();
//  action 2:   the car moves backward
car.moveBackward();
//  action 3:   the car plays radio
car.playRadio();

//  2) 
//  Noun:       kid
//  action 1:   the kid smiles
kid.smile();
//  action 2:   the kid cries
kid.cry();
//  action 3:   the kid sleeps
kid.sleep();

//  3)
//  Noun:       cat
//  action 1:   the cat purr
cat.purr();
//  action 2:   the cat scratches
cat.scratch();
//  action 3:   the cat jumps
cat.jump();

//  4)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog does tricks
dog.doTricks();
//  action 3:   the dog guards houses
dog.guardHouses();

//  5)
//  Noun:       cursor
//  action 1:   the cursor blinks
cursor.blink();
//  action 2:   the cursor moves to the left
cursor.moveToTheLeft();
//  action 3:   the cursor moves to the right
cursor.moveToTheRight();

//  6)
//  Noun:       Spider Man
//  action 1:   Spider Man climbs walls 
spiderMan.climbWalls();
//  action 2:   Spider Man shoots webs 
spiderMan.shootWebs();
//  action 3:   Spider Man senses danger
spiderMan.senseDanger();

//  7)
//  Noun:       black hole
//  action 1:   the black hole absorbs mass
blackHole.absorbMass();
//  action 2:   the black hole curves spacetime
blackHole.curveSpacetime();
//  action 3:   the black hole shrinks
blackHole.shrink();

//  8)
//  Noun:       smart watch
//  action 1:   the smart watch displays time
smartWatch.displayTime();
//  action 2:   the smart watch counts steps
smartWatch.countSteps();
//  action 3:   the smart watch detects heart rate
smartWatch.detectHeartRate();

//  9)
//  Noun:       Gmail user
//  action 1:   the Gmail user logs in
gmailUser.logIn();
//  action 2:   the Gmail user checks emails
gmailUser.checkEmails();
//  action 3:   the Gmail user logs out
gmailUser.logOut();

//  10)
//  Noun:       artificial satellite
//  action 1:   the artificial satellite changes orbit
artificialSatellite.changeOrbit();
//  action 2:   the artificial satellite sends signals
artificialSatellite.sendSignals();
//  action 3:   the artificial satellite returns to Earth
artificialSatellite.returnToEarth();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
