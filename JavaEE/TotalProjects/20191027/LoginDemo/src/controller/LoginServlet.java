package controller;

import mapper.Data;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.util.List;

/**
 * @author edz
 */


@WebServlet(value = "/login")
public class LoginServlet extends HttpServlet {

    @Override
    protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
        String userName = req.getParameter("userName");
        String userPassword = req.getParameter("userPassword");
        Boolean flag = false;
        flag = assembleUser(userName, userPassword);
        if (flag == true) {
            String message = "您好，" + userName + "!";
            req.setAttribute("message", message);
            req.getRequestDispatcher("DrunkDriving.jsp").forward(req, res);
        } else {
            String message = "Sorry," + "请重新输入！" + "用户名："+userName+"或密码：*****"+"输入错误！";
            req.setAttribute("message", message);
            req.getRequestDispatcher("error.jsp").forward(req, res);
        }
    }

    private Boolean assembleUser(String userName, String userPassword) {
        Boolean flag = false;
        List list = Data.getData(userName);
        if (list.get(1).equals(userName) && list.get(2).equals(userPassword)) {
            flag = true;
            System.out.println(list.get(1));
            System.out.println(list.get(2));
            System.out.println(userName);
            System.out.println(userPassword);
        }
        System.out.println(flag);
        return flag;

    }


}
