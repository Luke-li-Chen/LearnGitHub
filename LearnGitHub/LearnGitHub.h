
// LearnGitHub.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
    #error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CLearnGitHubApp:
// �йش����ʵ�֣������ LearnGitHub.cpp
//

class CLearnGitHubApp : public CWinApp
{
public:
    CLearnGitHubApp();

// ��д
public:
    virtual BOOL InitInstance();

// ʵ��

    DECLARE_MESSAGE_MAP()
};

extern CLearnGitHubApp theApp;