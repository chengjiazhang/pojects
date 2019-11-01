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
    int score=0;

    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String userName = req.getParameter("userName");
        String type = req.getParameter("type");
        List listData = getData(userName);
        Vector vectorScore = scoreRecord(userName, type);
        req.setAttribute("list", listData);
        req.setAttribute("vector", vectorScore);


        req.setAttribute("score", score);
        // System.out.println(score);
        req.getRequestDispatcher("ScoreRecord.jsp").forward(req, resp);
    }

    protected List getData(String userName) {
        List list = Data.getData(userName);
        return list;
    }

    protected Vector scoreRecord(String userName, String type) {
        List list = Data.getData(userName);
        String first = "1";
        String second = "2";

        String sTotalScore = (String) list.get(5);

        Integer totalScore = Integer.valueOf(sTotalScore);

        //System.out.println(totalScore);

        if (first.equals(type)) {
            score = -3;
        } else if (second.equals(type)) {
            score = -6;
        } else {
            score = -12;
        }

        totalScore += score;
        Data.modifyData(totalScore, userName);

        Data.insertData(userName, score, totalScore);

        Vector vectorScore = Data.getScoreData(userName);

//        System.out.println("listScore===" + vectorScore);

        //System.out.println("userName" + userName);
        //System.out.println("totalScore===" + totalScore);

        return vectorScore;

    }

}
