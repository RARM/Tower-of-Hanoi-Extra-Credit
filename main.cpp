// Tower of Hanoi (Extra Credit)
// Solution by: Rodolfo Andrés Rivas Matta
// Contact: rodolforivasmatta@gmail.com

// Note to the evaluator:
// I made two versions of the game, one that uses ncurses (a library that allows cross-platform terminal control) and an "Academic"
// version that works just as specified by the professor. I made a single engine for the game (attached) that works with both
// versions of the game. My original main.cpp was a initiator that would ask the user what version to run. This main.cpp file only
// calls the "Academic" version of the game through the academic_handler.cpp
// 
// Nothing else is needed for the evaluator. Just add all the files to a Visual Studio Community project, and it should compile
// smoothly. Files:
// - main.cpp (this file)
// - academic_handler.cpp
// - academic_handler.h
// - game_engine.cpp
// - game_engine.h
//
// I showed a different version to the professor in class. One that contains some graphics. The reason I didn't submit my original
// solution (using both versions, the graphical one and this one) is that ncurses cannot be easily compiled in Visual Studio
// Community. It needs extra configurations on the compiler. However, if the professor wants to see the source code of the original
// game, she can contact me directly.
//
// Another way to see my original code is by visiting the URL below (after the deadline for the extra-credit; it won't be visible
// before that). This is an online repository that contains my complete source code, documentation on the how I built it and how to
// compile it, and some history on the progress I was making as I built the game. I will make it a complete terminal game that
// works on the three major OSes (Windows, MacOS, and Linux).
//
// Online repository: https://github.com/RARM/toh_tui

#include "academic_handler.h"

int main(void) {
    run_academic(); // calling the academic version only...
    return 0;
}