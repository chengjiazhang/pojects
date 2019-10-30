<%--
  Created by IntelliJ IDEA.
  User: edz
  Date: 2019-10-27
  Time: 16:04
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
</head>
<body>
<%
    out.write((String) request.getAttribute("message"));
%>
<br>
<form action="drunkDrive" method="get">
    请输入用户名：<input type="text" name="userName" value="" id="userName_id"><br>   
    请输入扣分类型：<select name="type">
       
    <option value="1">1</option>
       
    <option value="2">2</option>
       
    <option value="3">3</option>
          </select>
    <br>
      
        <input type="submit" value="submit"/>
     
</form>


</body>
</html>
