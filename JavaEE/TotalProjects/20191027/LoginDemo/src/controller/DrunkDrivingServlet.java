package controller;

import mapper.Data;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.util.List;
import java.util.Vector;

/**
 * @author zcj
 */
@WebServlet("/drunkDrive")
public class DrunkDrivingServlet extends HttpServlet {

    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String userName = req.getParameter("userName");
        String type = req.getParameter("type");

       Vector vectorScore= test(userName, type);

        req.setAttribute("vector",vectorScore);
        req.getRequestDispatcher("ScoreRecord.jsp").forward(req, resp);
    }

    protected Vector test(String userName, String type) {
        List list = Data.getData(userName);
        Integer score = 0;
        String first = "1";
        String second = "2";

        String sTotalScore= (String) list.get(5);

        Integer totalScore=Integer.valueOf(sTotalScore);
        System.out.println(totalScore);

        if (first.equals(type)) {
            score = -3;
        } else if (second.equals(type)) {
            score = -6;
        } else {
            score = -12;
        }

        totalScore += score;
        Data.modifyData(totalScore, userName);

        Data.insertData(userName,score,totalScore);

        Vector vectorScore=Data.getScoreData(userName);

        System.out.println("listScore==="+vectorScore);

        System.out.println("userName" + userName);
        System.out.println("totalScore===" + totalScore);

        return vectorScore;

    }
}
