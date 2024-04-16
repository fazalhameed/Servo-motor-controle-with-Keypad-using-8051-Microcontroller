# Servo-motor-controle-with-Keypad-using-8051-Microcontroller


## Overview:
This project focuses on controlling the position of a servo motor using an 8051 microcontroller in conjunction with a 4x4 keypad, a 16x2 LCD, and a buzzer. The system allows users to input a desired angle for the servo motor's arm via the keypad. The current angle is displayed on the LCD screen, and feedback is provided through short beeps on the buzzer for successful key presses and long beeps for input errors (e.g., angles outside the 0-180 degree range).

## Features:
1. **User Interface:** Utilizes a 4x4 keypad for angle input and a 16x2 LCD for displaying the current angle and accepting new angle inputs.
2. **Angle Range Validation:** Accepts angles within the range of 0-180 degrees for servo motor positioning.
3. **Error Handling:** Ignores input outside the specified angle range and produces long beeps to indicate errors.
4. **Auditory Feedback:** Provides short beeps on the buzzer to confirm valid angle inputs and long beeps for error feedback.
5. **Non-blocking Operation:** Implements timer interrupts and flags to generate beeps without blocking the main code execution.

## Components Used:
1. 8051 microcontroller
2. 4x4 keypad for input
3. 16x2 LCD for display and input confirmation
4. Servo motor for arm positioning
5. Buzzer for auditory feedback

## Implementation Steps:
1. Initialize the 8051 microcontroller, keypad, LCD, servo motor, and buzzer.
2. Configure interrupt-driven routines for keypad input and timer-based beep generation.
3. Read keypad input for desired angles within the 0-180 degree range.
4. Update the LCD display with the current angle and allow input for a new angle.
5. Use flags to handle beep generation without blocking the main code execution.
6. Provide short beeps for valid inputs and long beeps for error feedback (out-of-range angles).
7. Continuously monitor keypad input and adjust the servo motor position accordingly.

## Expected Outcome:
The completed project will feature a robust and user-friendly system where users can accurately control the servo motor's arm position using the 4x4 keypad. The LCD will display real-time angle information, and audible feedback through the buzzer will confirm successful inputs and alert users to any errors. The implementation will ensure smooth operation without blocking code execution, thanks to interrupt-driven techniques.
