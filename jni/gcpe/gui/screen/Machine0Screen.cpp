#include <iostream>
#include <fstream>
#include <stdlib.h>  
#include <sstream>
#include <string>

#include "Machine0Screen.h"
#include "mcpe/client/gui/GuiElement.h"
#include "mcpe/client/renderer/ItemRenderer.h"
#include "mcpe/util/Util.h"
#include "mcpe/item/Item.h"

#include "itemgui/ItemGui.h"

using namespace std;

int kg = 0;

Machine0Screen::Machine0Screen(MinecraftClient&mc) : Screen(mc)
{
	
}

void Machine0Screen::init()
{
	int width=mcClient->getGuiData()->getScreenWidth();
	int height=mcClient->getGuiData()->getScreenHeight();
	
	std::shared_ptr<GuiElement> darkBackground=std::make_shared<GuiElement>(false,false,0,0,0,0);
	darkBackground->xPosition=0;
	darkBackground->yPosition=0;
	darkBackground->width=width;
	darkBackground->height=height;
	darkBackground->setBackground(Color(0.0F,0.0F,0.0F,0.65F));
	tabElementList.push_back(darkBackground);
	
	Background=std::make_shared<GuiElement>(false,false,0,0,0,0);
	Background->width=176;
	Background->height=166;
	Background->xPosition=width/2-88;
	Background->yPosition=height/2-83;
	Background->setBackground(mcClient,"images/gui/gcui/coal_generator.png",{0,0,176,166},0,0);
	tabElementList.push_back(Background);
	
	CloseImage=std::make_shared<GuiElement>(false,false,0,0,0,0);
	CloseImage->width=16;
	CloseImage->height=16;
	CloseImage->xPosition=Background->xPosition+Background->width-16;
	CloseImage->yPosition=Background->yPosition;
	CloseImage->setBackground(mcClient,"textures/gui/newgui/X",{0,0,16,16},0,0);
	tabElementList.push_back(CloseImage);
	
	CloseButton=std::make_shared<ImageButton>(0,"");
	CloseButton->width=16;
	CloseButton->height=16;
	CloseButton->xPosition=Background->xPosition+Background->width-16;
	CloseButton->yPosition=Background->yPosition;
	buttonList.push_back(CloseButton);
	for(int ii=0;ii<3;ii++){
	for(int i=0;i<9;i++){
		static int i1 = 9;
		i1++;
		if(i1>36)i1=10;
		ItemButton=std::make_shared<Button>(i1,Util::toString(i1),true);
		ItemButton->width=18;
		ItemButton->height=18;
		ItemButton->xPosition=Background->xPosition+8+18*i-1;
		ItemButton->yPosition=Background->yPosition+84-1+18*ii;
		ItemButton->setVisible(false);
		buttonList.push_back(ItemButton);
	}
	}
	for(int i=0;i<9;i++){
		static int i1=0;
		i1++;
		if(i1>9)i1=1;
		ItemButton=std::make_shared<Button>(i1,Util::toString(i1),true);
		ItemButton->width=18;
		ItemButton->height=18;
		ItemButton->xPosition=Background->xPosition+8+18*i-1;
		ItemButton->yPosition=Background->yPosition+84+54+4-1;
		ItemButton->setVisible(false);
		buttonList.push_back(ItemButton);
	}
}

void Machine0Screen::render(int i1, int i2, float f)
{
	Screen::render(i1, i2, f);
	ItemGui::Machine0Item(mcClient, Background);
	//ItemRenderer::instance->renderGuiItemNew(jj,0,Background->xPosition+33,Background->yPosition+34,10,1,1,false);
	//mcClient->getFont()->drawShadow(Util::toString(kg),Background->xPosition+33+5,Background->yPosition+34+10,Color::WHITE,false,0);
	ItemInstance *gs = mcClient->getLocalPlayer()->getInventoryMenu()->getSlot(kg-1);
	if(gs){
		if(gs->item==Item::mItems[263]){
			//const int kg1=kg;
			const int item = gs->getId();
			const int aux = gs->getAuxValue();
			const int count = gs->count;
			ItemInstance gs1 = ItemInstance(263,count,aux);
			ItemRenderer::instance->renderGuiItemNew(&gs1,0,Background->xPosition+33+1,Background->yPosition+34-1,10,1,1,false);
			mcClient->getFont()->drawShadow(Util::toString(gs1.count),Background->xPosition+33+(gs1.count>9?5:10),Background->yPosition+34+10,Color::WHITE,false,0);
			mcClient->getLocalPlayer()->getInventoryMenu()->setSlot(kg-1,ItemInstance());
		}
	}
}

void Machine0Screen::_buttonClicked(Button&b)
{
	ofstream outf("/storage/emulated/0/logs/gcpe.txt");
	outf.close();
	ofstream ocout;
	ItemInstance *gs = mcClient->getLocalPlayer()->getInventoryMenu()->getSlot(b.id-1);
	switch(b.id){
		case 0:
			mcClient->schedulePopScreen(1);
		break;
	}
	if(b.id>0&&b.id<37){
		if(gs){
			if(gs->item==Item::mItems[263]){
				//mcClient->schedulePopScreen(2);
				ItemRenderer::instance->renderGuiItemNew(gs,0,Background->xPosition+33,Background->yPosition+34,10,1,1,false);
				mcClient->getFont()->drawShadow(Util::toString(gs->count),Background->xPosition+33+(gs->count>9?5:10),Background->yPosition+34+10,Color::WHITE,false,0);
				kg=b.id;
			}
		}
		else{
			//mcClient->schedulePopScreen(1);
			ocout.open("/storage/emulated/0/logs/gcpe.txt",ios::app);
			ocout<<"实验"<<"\n"<<"人类啊！";
			ocout.close();
		}
	}
}

bool Machine0Screen::renderGameBehind() const
{
	return true;
}
