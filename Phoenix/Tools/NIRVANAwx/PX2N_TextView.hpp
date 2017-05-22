// PX2N_TextView.hpp

#ifndef PX2N_TEXTVIEW_HPP
#define PX2N_TEXTVIEW_HPP

#include "PX2N_Pre.hpp"
#include "PX2N_ProjTree.hpp"
#include "PX2EditParams.hpp"
#include "PX2wxAui.hpp"
using namespace PX2;

namespace NA
{

	class PX2wxAuiToolBar;

	class TextView : public wxWindow
	{
		DECLARE_DYNAMIC_CLASS(ProjView)

	public:
		TextView(wxWindow *parent);
		virtual ~TextView();

		wxTextCtrl *GetTextCtrl();

	protected:
		DECLARE_EVENT_TABLE()

		TextView();

		PX2wxAuiToolBar *mProjTreeBar;
		wxTextCtrl *mTextCtrl;
	};

}

#endif