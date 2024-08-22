{
<%- model.getClasses().each{ element->-%>
  "<%=element.name.toClassName()%>": {
	"isModelGroupChoice": <%- if (element.isModelGroupChoice()){-%>true<%}else {-%>false<%-}-%>,
	"properties": {			
		    <%- List properties = element.umlProperties-%>
        <%-properties.each{ property ->-%>
	  "<%=property.name.toMemberName()%>": {
		"isSimpleContentProperty": <%- if (property.isSimpleContentProperty()){-%>true<%}else {-%>false<%-}-%>,			
		"isList": <%- if (property.isList()){-%>true<%}else {-%>false<%-}-%>,			
		"isOptional": <%- if (property.isOptional()){-%>true<%}else {-%>false<%-}-%>,			
		"isOptionalUnboundList": <%- if (property.isOptionalUnboundList()){-%>true<%}else {-%>false<%-}-%>,			
		"isParameterizableProperty": <%- if (property.isParameterizableProperty()){-%>true<%}else {-%>false<%-}-%>,			
		"isPrimitiveAttribute": <%- if (property.isPrimitiveAttribute()){-%>true<%}else {-%>false<%-}-%>,			
		"isProxy": <%- if (property.isProxy()){-%>true<%}else {-%>false<%-}-%>,			
		"isWrappedList": <%- if (property.isWrappedList()){-%>true<%}else {-%>false<%-}-%>,			
		"isTransient": <%- if (property.isTransient()){-%>true<%}else {-%>false<%-}-%>,			
		"isUnwrappedList": <%- if (property.isUnwrappedList()){-%>true<%}else {-%>false<%-}-%>,			
		"isXorElement": <%- if (property.isXorElement()){-%>true<%}else {-%>false<%-}-%>,			
		"type.name": "<%- if (property.type.isPrimitiveType()) {-%><%=property.type.name.toMemberName()%><%-}else { -%><%=property.type.name.toClassName()%><%-}-%>",	
		"type.isPrimitiveType": <%- if (property.type.isPrimitiveType()){-%>true<%}else {-%>false<%-}-%>,			
		"type.isEnumeration": <%- if (property.type.isEnumeration()){-%>true<%}else {-%>false<%-}-%>	
				
	  }<%- if (properties.indexOf(property) == (properties.size() -1)) { -%><%-} else { -%>,<%-}-%> 
			
			<%-}-%>			
	}	
  }<%- if (model.getClasses().indexOf(element) == (model.getClasses().size() -1)) { -%><%-} else { -%>,<%-}-%> 
	
    <%-}-%>
}