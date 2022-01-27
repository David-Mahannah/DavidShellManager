#ifndef PROFILE_H
#define PROFILE_H

#include <string>

class Profile {
public:
	std::string GetKey() { return ssh_key; }
	std::string GetUser() { return user; }
	std::string GetHost() { return host; }
	std::string GetName() { return name; }
	
	void SetKey(std::string path);
	void SetUser(std::string user) { this->user = user; }
	void SetHost(std::string host) { this->host = host; }
	void SetName(std::string name) { this->name = name; }
	
private:
	std::string ssh_key;
	std::string user;
	std::string host;
	std::string name;
};

#endif
