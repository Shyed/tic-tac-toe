# Tic-Tac-Toe: GUI C++ Game Project

A C++ Windows GUI version of the classic **Tic-Tac-Toe** game. Developed as a coursework project, this version of the game includes game logic, user interface components, and system messages—all written using C++ and resource scripting.

---

## Features

- Two-player **turn-based gameplay**
- Clear win/loss/draw outcome messaging
- System messages and user prompts
- GUI-based rendering using `.rc` resource script
- Organized code structure with multiple source/header files

---

## Folder Structure
TicTacToe/
├── Debug/ # Compiled outputs (debug)
├── ExecuteMenu.cpp / .h # Menu logic
├── Game.cpp / Game.h # Game core logic
├── Player.cpp / Player.h # Player classes
├── SystemMessages.cpp / .h # UI and system messages
├── resource.h # UI element definitions
├── TTT_PROJECT_FINAL.cpp # Main source file
├── TTT_PROJECT_FINAL.rc # GUI resource script
├── TTT_PROJECT_FINAL.vcxproj* # Visual Studio project files


---

## Technologies Used

- **Language**: C++
- **IDE**: Microsoft Visual Studio (VC++)
- **UI**: Windows API resource scripting (`.rc`)
- **Project Type**: GUI-based application

---

## How to Build & Run

### With Visual Studio
1. Open the `.vcxproj` file in **Visual Studio**.
2. Set build configuration to **Debug** or **Release**.
3. Build the project (`Ctrl + Shift + B`).
4. Run the app (`F5` or click Start).

### Notes:
- If you encounter missing dependencies, ensure Windows SDK is installed.
- The GUI is defined in `TTT_PROJECT_FINAL.rc` and `resource.h`.

---

## Academic Purpose

This game was developed as part of a **coursework project** to demonstrate proficiency in:
- Object-oriented design in C++
- Handling UI via Windows API
- Modular coding with multiple classes
- Event-driven programming logic

---

## License

© 2019 **Sheila Demonteverde**  
All rights reserved.  
Developed as part of academic coursework.

---




