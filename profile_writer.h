#ifndef PROFILE_WRITER_H
#define PROFILE_WRITER_H

#include "dsm.h"
#include "profile.h"
#include <iostream>

class ProfileWriter {
public:
	virtual ~ProfileWriter() {};
	virtual void Write(Profile* profile) {};
	virtual void Write(DSM* dsm) {};
};

#endif
