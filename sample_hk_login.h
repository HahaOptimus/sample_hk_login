
// sample_hk_login.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Csample_hk_loginApp:
// �йش����ʵ�֣������ sample_hk_login.cpp
//

class Csample_hk_loginApp : public CWinApp
{
public:
	Csample_hk_loginApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Csample_hk_loginApp theApp;