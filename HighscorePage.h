#pragma once

#include "GlobalData.h"
#include <vector>
#include "TextObject.h"
#include "DataProvider.h"
#include "Page.h"


class HighscorePage : public Page
{
public:
	HighscorePage(GamePage pageType);
	void update() override;
	void render() override;
	void initPage() override;
private:
	DataProvider provider;
};



