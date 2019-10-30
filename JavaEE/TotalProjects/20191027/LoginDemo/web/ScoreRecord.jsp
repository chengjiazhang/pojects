<%@ page import="java.util.Vector" %>
<%--
  Created by IntelliJ IDEA.
  User: edz
  Date: 2019-10-28
  Time: 13:22
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<html>
<head>
    <title>Title</title>
</head>
<body>
<table border="1">
    <tr>
        <th>序号</th>
        <th>姓名</th>
        <th>扣分情况</th>
        <th>剩余分数</th>
        <th>扣分时间</th>
    </tr>

    <%
        Vector v = (Vector) request.getAttribute("vector");
        for (int i = 0; i < v.size(); i++) {
    %>
    <tr>
        <%
            Vector v1 = (Vector) v.get(i);
            for (int j = 0; j < v1.size(); j++) {
        %>

        <td><%=v1.get(j)%>
        </td>

        <%
            }
        %>
    </tr>
    <%
        }
    %>
</table>
</body>
</html>
