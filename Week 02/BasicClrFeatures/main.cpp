#using <System.dll>

using namespace System;

int main()
{
	int i = 50;
	double a = 3.14159;
	// Printing to screen
	// Console::Write("Execution Completed!"); // print something to the terminal with NO new line after
	Console::WriteLine("Execution Completed!"); // print something to the terminal with a new line after
	// Color control
	Console::ForegroundColor = ConsoleColor::Red;
	// Formatted printing
	do
	{
		Console::SetCursorPosition(10, 10); // keeps the output in the same position on the terminal
		Console::WriteLine("{0, 12:D}              {1, 12:F3}", i++, a);
	} while (!Console::KeyAvailable);
	Console::ForegroundColor = ConsoleColor::White; // set colour back to normal (good practice)

	// wait for a keypress
	Console::ReadKey();
	Console::ReadKey();
	return 0;
}