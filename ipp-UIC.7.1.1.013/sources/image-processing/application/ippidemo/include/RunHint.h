/*
//
//               INTEL CORPORATION PROPRIETARY INFORMATION
//  This software is supplied under the terms of a license agreement or
//  nondisclosure agreement with Intel Corporation and may not be copied
//  or disclosed except in accordance with the terms of that agreement.
//        Copyright(c) 1999-2012 Intel Corporation. All Rights Reserved.
//
*/

// RunHint.h: interface for the CRunHint class.
// CRunHint class processes image by ippIP functions listed in
// CallIppFunction member function.
// See CRun & CippiRun classes for more information.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RUNHINT_H__461342FF_15B1_46E6_BD33_7208A4E21B63__INCLUDED_)
#define AFX_RUNHINT_H__461342FF_15B1_46E6_BD33_7208A4E21B63__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ippiRun.h"

class CRunHint : public CippiRun
{
public:
   CRunHint();
   virtual ~CRunHint();
protected:
   virtual CParamDlg* CreateDlg();
   virtual void UpdateData(CParamDlg* pDlg, BOOL save = TRUE);
   virtual IppStatus CallIppFunction();
   virtual CString GetHistoryParms();

   IppHintAlgorithm m_hint;
};

#endif // !defined(AFX_RUNHINT_H__461342FF_15B1_46E6_BD33_7208A4E21B63__INCLUDED_)