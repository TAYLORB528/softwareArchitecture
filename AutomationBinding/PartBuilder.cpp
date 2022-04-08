#include "PartBuilder.h"
#include "CADObject.h"



AutomationAPI::CADObject* AutomationAPI::PartBuilder::Commit()
{
	return nullptr;
}

void AutomationAPI::PartBuilder::SetType(PartBuilderTypes type)
{
}

AutomationAPI::PartBuilder::PartBuilderTypes AutomationAPI::PartBuilder::GetType()
{
	return AutomationAPI::PartBuilder::TypesOriginAndEdgeLengths;
}

void AutomationAPI::PartBuilder::SetHeight(int h)
{
}

int AutomationAPI::PartBuilder::GetHeight()
{
	return 0;
}

void AutomationAPI::PartBuilder::SetWidth(int w)
{
}

int AutomationAPI::PartBuilder::GetWidth()
{
	return 0;
}

void AutomationAPI::PartBuilder::SetDepth(int d)
{
}

int AutomationAPI::PartBuilder::GetDepth()
{
	return 0;
}

void AutomationAPI::PartBuilder::SetOrigin(int x, int y, int z)
{
}

void AutomationAPI::PartBuilder::GetOrigin(int& x, int& y, int& z)
{
}
