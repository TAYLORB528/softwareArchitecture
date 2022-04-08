#include "JournalCallParamDataBoolean.h"
#include "JournalingInternal.h"
#include "JournalFile.h"

#include <iostream>

using namespace Journal;

JournalCallParamDataBoolean::JournalCallParamDataBoolean(std::string paramName,
    ParameterMetaType paramType, bool value) :
    JournalCallParamData(paramName, paramType,
        JournalCallParamData::ParameterBasicType::BOOLEAN), m_value(value)
{

}

void JournalCallParamDataBoolean::Journal()
{
    if (this->m_paramType == JournalCallParamData::ParameterMetaType::INPUT)
    {
        //There is a bug here, all \ in the string need to be replaced with \\
        // i.e. if d:\dir\some.prt  we need to actualy change this to 
        //         d:\\dir\\some.prt
        std::cout << "BOOLEAN HIT" << std::endl;
        std::string jnlString = "";
        if (m_value) {
            jnlString = "true, ";
        }
        else
        {
            jnlString = "false, ";
        }

        GetActiveJournalFile()->WriteToFile(jnlString);
    }
    else if (this->m_paramType == JournalCallParamData::ParameterMetaType::OUTPUT)
    {
        throw std::exception("NIY ");
    }
    else // RETURN
    {
        throw std::exception("NIY");
    }


}