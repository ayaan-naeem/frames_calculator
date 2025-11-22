## Frames Calculator

This is a simple C++ program that calculates the total number of frames in a video based on the duration in minutes and the frames per second (FPS).

The program demonstrates the use of:

Functions (greet())

Loops (while)

Basic arithmetic calculations

## How It Works

The program asks the user to enter:

Number of minutes

Frames per second (FPS)

It calculates the total frames using the formula:

Total Frames
=
minutes
×
60
×
frames per second
Total Frames=minutes×60×frames per second

The program prints the total number of frames for the video.

Using a while loop, the program repeats this calculation 5 times (you can modify this count as needed).

## How to Run
## Step 1: Compile the code

Open a terminal or command prompt, navigate to the folder containing frames_calculator.cpp, and run:

g++ frames_calculator.cpp -o frames_calculator


This will create an executable named frames_calculator.

## Step 2: Run the program

On the terminal, execute:

./frames_calculator


or on Windows:

frames_calculator.exe

## Step 3: Enter values

Input the number of minutes

Input the frames per second

The program will display the total number of frames. This repeats 5 times.

## Sample Input/Output
Enter Number of Minutes: 2
Enter Frames Per Second: 30
Total Number of Frames will be: 3600

Enter Number of Minutes: 5
Enter Frames Per Second: 24
Total Number of Frames will be: 7200

## Purpose

This project helps beginners practice:

Using functions in C++

Implementing loops (while)

Performing arithmetic calculations

Handling user input and output
