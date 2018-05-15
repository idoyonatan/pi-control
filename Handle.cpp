#include "Handle.h"
void Handle::menu()
{
	bool flag = TRUE;
	int choice;
	while (flag)
	{
		cout << "choose:" << endl << "1- for therminal" << endl << "2- for wirking on files" << endl << "3 to exit the progrram" << endl;
		switch (choice)
		{
		case 1:
			Terminal();
			break;
		case 2:
			File();
			break;
		case 3:
			!flag;
			break;
		default:
			break;
		}
	}
}
//read terminal commands and send them to server and write the results until presing certian workd(idea=closeT or something like that)
void Handle::Terminal()
{
	//write(sockfd, buffer, strlen(buffer));
	//read(sockfd, buffer, 255);
}
//get file, open it in a text editor, whene finished, entering save in the client and it sent it back to the server and delet the file in the client
void Handle::File()
{

}
