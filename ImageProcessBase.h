
// ImageProcessBase.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CImageProcessBaseApp:
// �� Ŭ������ ������ ���ؼ��� ImageProcessBase.cpp�� �����Ͻʽÿ�.
//

class CImageProcessBaseApp : public CWinApp
{
public:
	CImageProcessBaseApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CImageProcessBaseApp theApp;
