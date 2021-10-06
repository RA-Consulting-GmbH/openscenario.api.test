package de.rac.generator.main.util;

public class DefaultValueHelper {

	private Map defaultValues;

	public DefaultValueHelper(Map defaultValues) {
		super();
		this.defaultValues = defaultValues;
	}
	
	
	public boolean hasDefaultValue(String className, String memberName)
	{
		Map  classMap = defaultValues[className];
		if (classMap )
		{
			Map memberMap =  classMap[memberName];
			return memberMap != null && memberMap["default"] != "None";
		}
		return false;

	}
	
	public void addType(String className, String memberName, String typeName)
	{
		Map  classMap = defaultValues[className];
		if (classMap )
		{
			Map memberMap =  classMap[memberName];
			if (memberMap != null)
			{
				memberMap["typeName"] = typeName;
			}
		}

	}
	public boolean hasNoneAsDefault(String className, String memberName)
	{
		Map  classMap = defaultValues[className];
		if (classMap )
		{
			Map memberMap =  classMap[memberName];
			return memberMap != null && memberMap["default"] == "None";
		}
		return false;

	}
	public String getDefaultValue(String className, String memberName)
	{
		Map  classMap = defaultValues[className];
		String result = "";
		if (classMap )
		{
			Map memberMap = classMap[memberName];
			if (memberMap)
			{
				String value = memberMap["default"];
				if (value != "None")
				{
					if (isPrimitiveType(memberMap["typeName"]))
					{
						result = value;
					}else
					{
						String typeName = memberMap["typeName"];
						result =  "${typeName}::${typeName}Enum::${value.toUpperNameFromMemberName()}";
					}
				}
			}
			
			
		}
		return result;

	}
	
	private boolean isPrimitiveType(String type)
	{
		return type == "string" ||
			type == "unsignedInt" ||
			type == "unsignedShort" ||
			type == "dateTime" ||
			type == "boolean" ||
			type == "int" ||
			type == "double";
	}
	
}
