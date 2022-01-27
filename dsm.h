#ifndef DSM_H
#define DSM_H

#include <vector>
#include "profile.h"

class DSM {
public:
	DSM() {
		this->profiles = new std::vector<Profile*>();
	};
	void OpenShell(int id);
	void AddProfile(Profile* profile);
	void RemoveProfile(int id);
	int ProfileCount();
	Profile* GetProfile(int i);

private:
	std::vector<Profile*>* profiles;
};

#endif
