// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
// DDPIActiveXPropPage.cpp : Implementation of the CDDPIActiveXPropPage property page class.

#include "stdafx.h"
#include "DDPIActiveX.h"
#include "DDPIActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CDDPIActiveXPropPage, COlePropertyPage)

// Message map

BEGIN_MESSAGE_MAP(CDDPIActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CDDPIActiveXPropPage, "MFCACTIVEXCONT.DDPIActiveXPropPage.1",
	0x18c217bd,0xe726,0x4fde,0xbf,0x5a,0xd4,0x82,0xdd,0x7b,0x20,0x43)

// CDDPIActiveXPropPage::CDDPIActiveXPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CDDPIActiveXPropPage

BOOL CDDPIActiveXPropPage::CDDPIActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_DDPIACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CDDPIActiveXPropPage::CDDPIActiveXPropPage - Constructor

CDDPIActiveXPropPage::CDDPIActiveXPropPage() :
	COlePropertyPage(IDD, IDS_DDPIACTIVEX_PPG_CAPTION)
{
}

// CDDPIActiveXPropPage::DoDataExchange - Moves data between page and properties

void CDDPIActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CDDPIActiveXPropPage message handlers
