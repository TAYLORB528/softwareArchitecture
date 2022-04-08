#pragma once
#include "AutomationBindingExports.h"
#include "..\Core\GuidObject.h"
namespace AutomationAPI
{
	class PartBuilder;
	class Part;

	class AUTOMATIONBINDING_API PartCollection
	{
	public:
		PartCollection(int guid);

		virtual ~PartCollection();


		/// <summary>
		/// This API creates a PartBuilder.
		/// </summary>

		/// <remarks>
		///  For this API, the user passes in a pointer to a part. In turn, the method outputs a journaling call using the CreatePart method.
		/// </remarks>
		PartBuilder* CreatePartBuilder(Part* part);

	private:
		int m_guid;
	};
}
