#include <stdlib.h>
#include "profile.h"
#include <iostream>
#include <string>
#include <cstring>
#include "dsm.h"
#include "command_line_writer.h"

void DSM::AddProfile(Profile* profile)
{
	this->profiles->push_back(profile);	
}

void DSM::RemoveProfile(int id)
{
	this->profiles->at(id);	
}

int DSM::ProfileCount()
{
	return this->profiles->size();
}

Profile* DSM::GetProfile(int i)
{
	return this->profiles->at(i);
}

void DSM::OpenShell(int id)
{
	Profile p = *(this->profiles->at(id));
	std::string out = "ssh ";
	out += p.GetUser();
	out += "@";
	out += p.GetHost();
	system(out.c_str());	
}

int main()
{
	DSM* d = new DSM();

	// Add profile 1
	Profile* profile_1 = new Profile();
	profile_1->SetName("VOLE");
	profile_1->SetUser("mahan109");
	profile_1->SetHost("cse.umn.edu");

	// Add profile 2
	Profile* profile_2 = new Profile();
	profile_2->SetName("Node 1");
	profile_2->SetUser("mahan");
	profile_2->SetHost("127.0.0.1");
 
	d->AddProfile(profile_1);
	d->AddProfile(profile_2);
	CommandlineWriter cw = CommandlineWriter();
	cw.Write(d);
	//d.OpenShell(0);
	return 0;
}
