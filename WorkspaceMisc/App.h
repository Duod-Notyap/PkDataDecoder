#ifndef _APP_H_INCLUDED
#define _APP_H_INCLUDED

#include "wx/wx.h"
#include "AppMain.h"

class App : public wxApp
{
public:
	App();
	~App();
	
	virtual bool OnInit();

private:
	AppMain* m_frame1 = nullptr;

};

#endif 