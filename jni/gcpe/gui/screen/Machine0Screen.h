#pragma once

#include <memory>
#include <string>

#include "mcpe/client/gui/screen/Screen.h"
#include "mcpe/client/gui/PackedScrollContainer.h"
#include "mcpe/client/gui/ImageButton.h"

class PackedScrollContainer;
class Button;

class Machine0Screen : public Screen
{
	protected:
		std::shared_ptr<GuiElement> Background;
		std::shared_ptr<GuiElement> CloseImage;
		std::shared_ptr<ImageButton> CloseButton;
		std::shared_ptr<Button> ItemButton;
	public:
		Machine0Screen(MinecraftClient&);
		virtual void init();
		virtual void render(int,int,float);
		virtual void _buttonClicked(Button&);
		virtual bool renderGameBehind() const;
};
