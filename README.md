This is simple shell project created by johntymuriithi and Nimoh53
Task 0 Write a beautiful code that passes the Betty checks
Task 1 
Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)
Task 2 Handle command lines with arguments
Task 3 
Handle the PATH
fork must not be called if the command doesn’t exist
Task 4
Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit
Task 5 Implement the env built-in, that prints the current environment
Task 6
Write your own getline function
Use a buffer to read many chars at once and call the least possible the read system call
You will need to use static variables
You are not allowed to use getline
You don’t have to:
be able to move the cursor
Task 7 You are not allowed to use strtok
Task 8
handle arguments for the built-in exit
Usage: exit status, where status is an integer used to exit the shell
