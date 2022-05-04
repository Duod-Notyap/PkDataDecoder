#ifndef _APPMAIN_H_INCLUDED
#define _APPMAIN_H_INCLUDED

#include "wx/wx.h"
#include "wx/notebook.h"

class AppMain : public wxFrame
{
public:
	AppMain();
	~AppMain();

	wxListBox* pListBox;

	wxDECLARE_EVENT_TABLE();
};

#endif