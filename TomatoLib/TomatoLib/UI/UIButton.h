#pragma once
#ifndef __UIBUTTON_H__
#define __UIBUTTON_H__

#include "UILabel.h"

namespace TomatoLib {
	class UIButton : public UIBase {
		bool WasHovering;
		std::string Text;
	public:
		UIButton(UIBase* parent);

		virtual void Draw(Render& p) override;
		virtual void Update() override;

		virtual void InvalidateLayout() override;

		Color BorderColor;
		Color BackColor;
		Color HoverColor;
		Color DisabledColor;
		Color DisabledTextColor;
		Color TextColor;
		int BorderSize;

		void ResizeToContents();
		void SetText(const std::string& str);
		std::string GetText();
	};
}


#endif