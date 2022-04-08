#include "JournalCallParamDataInteger.h"
#include "JournalingInternal.h"
#include "JournalFile.h"

#include <iostream>

using namespace Journal;

JournalCallParamDataInteger::JournalCallParamDataInteger(std::string paramName,
    ParameterMetaType paramType, int value) :
    JournalCallParamData(paramName, paramType,
        JournalCallParamData::ParameterBasicType::INTEGER), m_value(value)
{

}

void JournalCallParamDataInteger::Journal()
{
    if (this->m_paramType == JournalCallParamData::ParameterMetaType::INPUT)
    {
        //There is a bug here, all \ in the string need to be replaced with \\
        // i.e. if d:\dir\some.prt  we need to actualy change this to 
        //         d:\\dir\\some.prt
        std::cout << "INTEGER HIT" << std::endl;
        std::string jnlString = std::to_string(m_value);
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