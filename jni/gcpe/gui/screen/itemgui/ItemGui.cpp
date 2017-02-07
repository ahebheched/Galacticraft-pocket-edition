#include "ItemGui.h"
#include "mcpe/item/ItemInstance.h"
#include "mcpe/client/renderer/ItemRenderer.h"
#include "mcpe/util/Util.h"

#include "../Machine0Screen.h"

ItemInstance *jj;
ItemInstance *jjj[35];

void ItemGui::Machine0Item(MinecraftClient *mcClient, std::shared_ptr<GuiElement> Background){
	jj=NULL;
	delete jj;
	jj=new ItemInstance(119,1,1);
	for(int iii=0;iii<=35;iii++){
		jjj[iii] = mcClient->getLocalPlayer()->getInventoryMenu()->getSlot(iii);
	}
	for(int ii=0;ii<3;ii++){
		for(int i=0;i<9;i++){
			static int k=0;
			k++;
			if(k>=27){
				k=0;
			}
			if(jjj[8+k]==NULL){
				delete jjj[8+k];
				jjj[8+k] = new ItemInstance(119,0,0);
			}
			ItemRenderer::instance->renderGuiItemNew(jjj[8+k],0,Background->xPosition+8+18*i+1/*33*/,Background->yPosition+84+18*ii/*34*/-1,10,jjj[8+k]->count<1?0:1,jjj[8+k]->count<1?0:1,false);
			if(jjj[8+k]->count>1){
				mcClient->getFont()->drawShadow(Util::toString(jjj[8+k]->count),Background->xPosition+8+18*i+1+(jjj[8+k]->count>9?5:10),Background->yPosition+84+18*ii+10-1,Color::WHITE,false,0);
			}
		}
	}
	for(int i=0;i<9;i++){
		if(jjj[i]==NULL){
			delete jjj[i];
			jjj[i] = new ItemInstance(119,0,0);
		}
		ItemRenderer::instance->renderGuiItemNew(jjj[i],0,Background->xPosition+8+18*i+1/*33*/,Background->yPosition+84+54+4-1/*34*/,10,jjj[i]->count<1?0:1,jjj[i]->count<1?0:1,false);
		if(jjj[i]->count>1){
			mcClient->getFont()->drawShadow(Util::toString(jjj[i]->count),Background->xPosition+8+18*i+1+(jjj[i]->count>9?5:10),Background->yPosition+84+58+10-1,Color::WHITE,false,0);
		}
	}
}
