#ifndef COMMANDLINE_WRITER_H
#define COMMANDLINE_WRITER_H

#include "profile_writer.h"
#include "profile.h"
#include <iostream>

class CommandlineWriter : public ProfileWriter {
public:
	void Write(Profile* profile);
	void Write(DSM* dsm);
	static void PrintHorizontalLine(int width);
};

#endif
