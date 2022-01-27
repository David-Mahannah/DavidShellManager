#include "command_line_writer.h"
#include <sys/ioctl.h> //ioctl() and TIOCGWINSZ
#include <stdio.h>
#include <unistd.h> // for STDOUT_FILENO
#include <stdlib.h>

// Print out a text box of the current profile
void CommandlineWriter::Write(Profile* profile) {
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

	std::string out = "";
	PrintHorizontalLine(w.ws_col);
	out += " Name: " + profile->GetName() + "\n";
	out += " User: " + profile->GetUser() + "\n";
	out += " Host: " + profile->GetHost() + "\n";
	out += " SSH Key: " + profile->GetKey();
	std::cout << out << std::endl;
}

void CommandlineWriter::PrintHorizontalLine(int width)
{
	std::cout << "#";
	for (int j = 0; j < width -2; j++)
	{
		std::cout << "-";
	}
	std::cout << "#" << std::endl;
}


// Loop over all profiles and call Write
void CommandlineWriter::Write(DSM* dsm) {
	system("clear");
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	
	CommandlineWriter::PrintHorizontalLine(w.ws_col);
	
	for (int j = 0; j < (w.ws_col - 7)/2; j++)
	{
		std::cout << " ";
	}
	std::cout << "Profiles";

	for (int j = 0; j < (w.ws_col - 7)/2; j++)
	{
		std::cout << " ";
	}
	std::cout << "\n";
	//CommandlineWriter::PrintHorizontalLine(w.ws_col);
	for (int i = 0; i < dsm->ProfileCount(); i++)
	{
		this->Write(dsm->GetProfile(i));
	}
	CommandlineWriter::PrintHorizontalLine(w.ws_col);
}
