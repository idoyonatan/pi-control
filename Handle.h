#pragma once
using namespace std;
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <winsock2.h>
#include <ws2tcpip.h>
#define TERMINAL "terminal"
#define FILE "file"
#define IOFILE "tmp.txt"

class Handle {
public:

	SOCKET ClientSocket;

private:
	void menu();
	void Terminal();//working with the terminal
	void File();// working with files
};