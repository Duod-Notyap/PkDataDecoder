#include "AppMain.h""

wxBEGIN_EVENT_TABLE(AppMain, wxFrame)
wxEND_EVENT_TABLE()

AppMain::AppMain() : wxFrame(nullptr, wxID_ANY, "Window Test", wxPoint(30, 30), wxSize(800, 600))
{
	pListBox = new wxListBox(this, wxID_ANY, wxPoint(10, 10), wxSize(250, 500));
}

AppMain::~AppMain()
{
}