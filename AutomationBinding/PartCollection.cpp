#include "PartCollection.h"
#include "Part.h"
#include "PartBuilder.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"
#include "..\AppPartOps\PartOps.h"

#include <iostream>

using namespace AutomationAPI;

AutomationAPI::PartCollection::PartCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::PartCollection::~PartCollection()
{

}

AutomationAPI::PartBuilder* AutomationAPI::PartCollection::CreatePartBuilder(AutomationAPI::Part* part)
{
	AutomationAPI::PartBuilder* partBuilder = Journaling_CreatePart(part);

	return nullptr;
}