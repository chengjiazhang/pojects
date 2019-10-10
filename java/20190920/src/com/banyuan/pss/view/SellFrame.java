/**
 * 
 */
package com.banyuan.pss.view;

import java.awt.Color;
import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Vector;
import java.util.regex.Pattern;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.border.EmptyBorder;
import javax.swing.table.DefaultTableModel;

import com.banyuan.pss.entity.Sell;
import com.banyuan.pss.service.SellService;
import com.banyuan.pss.util.MyFactory;
import javax.swing.JComboBox;

/**
 * @zcj
 *
 *      2019年9月20日
 *
 *      下午3:36:54
 */
public class SellFrame extends JFrame
{

	SellService service = (SellService) MyFactory.getInstance("sellService");
	private JPanel contentPane;
	private JTextField tf_ComId;
	private JTextField tf_Operator;
	private JTable table;
	private DefaultTableModel tm;
	private Vector data;
	private JLabel lbl_Money;

	private JLabel lbl_Num;

	// SellService ss = new SellService();

	/**
	 * Launch the application.
	 */
	public static void main(String[] args)
	{
		EventQueue.invokeLater(new Runnable()
		{
			public void run()
			{
				try
				{
					SellFrame frame = new SellFrame();
					frame.setVisible(true);
				} catch (Exception e)
				{
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public SellFrame()
	{
		System.out.println("==SellFrame()===");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 584, 400);
		contentPane = new JPanel();
		contentPane.setForeground(Color.WHITE);
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);

		JPanel panel = new JPanel();
		panel.setBounds(6, 135, 549, 226);
		contentPane.add(panel);
		panel.setLayout(null);

		JScrollPane scrollPane = new JScrollPane();
		scrollPane.setBounds(0, 6, 542, 215);
		panel.add(scrollPane);

		Vector colname = new Vector();
		colname.add("商品名称");
		colname.add("商品编号");
		// colname.add("单位");
		colname.add("销售时间");
		colname.add("数量");
		colname.add("单价");
		// colname.add("保质期");
		colname.add("操作员");
		colname.add("销售编号");

		// data = getData();
		data = new Vector();

		Vector v = new Vector();

//		v.add(sale1);
//		v.add(sale2);

		Vector v2 = new Vector();

//		v.add(sale1);
//		v.add(sale2);

		tm = new DefaultTableModel(data, colname);

		table = new JTable(tm);
		scrollPane.setViewportView(table);

		// this.getData();

		JPanel panel_1 = new JPanel();
		panel_1.setBounds(6, 6, 549, 117);
		contentPane.add(panel_1);
		panel_1.setLayout(null);

		JLabel lbl = new JLabel("商品编号");
		lbl.setBounds(6, 6, 61, 16);
		panel_1.add(lbl);

		tf_ComId = new JTextField();
		tf_ComId.setBounds(74, 1, 59, 26);
		panel_1.add(tf_ComId);
		tf_ComId.setColumns(10);

		JLabel label = new JLabel("付款方式");
		label.setBounds(145, 6, 61, 16);
		panel_1.add(label);

		JLabel lblNewLabel_1 = new JLabel("销售时间");
		lblNewLabel_1.setBounds(317, 6, 61, 16);
		panel_1.add(lblNewLabel_1);

		JLabel label_1 = new JLabel("销售员");
		label_1.setBounds(6, 54, 61, 16);
		panel_1.add(label_1);

		tf_Operator = new JTextField();
		tf_Operator.setBounds(76, 49, 61, 26);
		panel_1.add(tf_Operator);
		tf_Operator.setColumns(10);

		JLabel label_2 = new JLabel("货物总量");
		label_2.setBounds(145, 54, 61, 16);
		panel_1.add(label_2);

		JLabel label_3 = new JLabel("货物金额");
		label_3.setBounds(293, 54, 61, 16);
		panel_1.add(label_3);

//		SimpleDateFormat df = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");//设置日期格式
//        System.out.println(df.format(new Date()));// new Date()为获取当前系统时间
		lbl_Money = new JLabel("0.0");
		lbl_Money.setBounds(373, 54, 113, 16);
		panel_1.add(lbl_Money);

		lbl_Num = new JLabel("0");
		lbl_Num.setBounds(214, 54, 53, 16);
		panel_1.add(lbl_Num);

		// Sell sell = new Sell();
		// sell.setCommodityid(Integer.valueOf(tf_ComId.getText()));
		// Vector v2 = service.getDataById(sell);
		// System.out.println(sell);
		// System.out.println("v2="+v2);

		Sell sell = new Sell();
		JButton btn_Add = new JButton("添加");

		btn_Add.addActionListener(new ActionListener()
		{
//			int j = 0;
//			int i = -1;
//			double sum = 0;

			// int sum2=0;
			int i = 0;

			public void actionPerformed(ActionEvent e)
			{

				String tf = tf_ComId.getText();

				if (tf.trim().length() == 0)
				{
					String message = "请不要非空";
					JOptionPane.showMessageDialog(null, message);// 输入空格或无输入弹出提示框
				} else
				{
					boolean flag = tf.matches("\\d{1,10}");// 匹配输入字符是否是数字
					if (!flag)
					{
						String message = "请输入数字";
						JOptionPane.showMessageDialog(null, message);// 输入不是数字会弹出提示框
					} else
					{
						sell.setCommodityid(Integer.valueOf(tf_ComId.getText()));
						Vector v5 = service.getDataById(sell);
						v5 = (Vector) v5.get(0);
						System.out.println("v5.get(3);" + v5.get(3));

						v5.set(6, i++);
						tf_Operator.setText((String) v5.get(5));
						data.add(v5);

						tm.setDataVector(data, colname);
						System.out.println("==" + v5.get(4) + "==");

						float sum = 0;
						int sum2 = 0;
						for (Object obj : data)
						{
							Vector v = (Vector) obj;
							sum += (double) v.get(4) * Integer.parseInt((String) v.get(3));
							sum2 += Integer.parseInt((String) v.get(3));
						}
						System.out.println("sum=" + sum);
						System.out.println("sum2=" + sum2);

						lbl_Money.setText(Double.toString(sum));
						lbl_Num.setText(Integer.toString(sum2));
					}
				}
			}
		});
		btn_Add.setBounds(28, 82, 117, 29);
		panel_1.add(btn_Add);

		JButton btn_SellAll = new JButton("销售");
		btn_SellAll.addActionListener(new ActionListener()
		{

			public void actionPerformed(ActionEvent e)
			{
				for (int i = 1; i <= data.size(); i++)
				{
					service.insertData(sell);

				}
				data = new Vector();
				tm.setDataVector(data, colname);

			}
		});
		btn_SellAll.setBounds(193, 82, 117, 29);
		panel_1.add(btn_SellAll);

		JButton btn_DelSellAll = new JButton("取消销售");
		btn_DelSellAll.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{
				data = new Vector();
				tm.setDataVector(data, colname);

			}
		});
		btn_DelSellAll.setBounds(369, 82, 117, 29);
		panel_1.add(btn_DelSellAll);

		JLabel lbl_Date = new JLabel("");
		lbl_Date.setBounds(390, 6, 153, 16);
		panel_1.add(lbl_Date);
		Date date = new Date(System.currentTimeMillis());
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
		String datestr = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(date);
		lbl_Date.setText(datestr);

		JComboBox comboBox = new JComboBox();
		comboBox.setBounds(202, 2, 103, 27);
		comboBox.addItem("现金");
		comboBox.addItem("支付宝");
		comboBox.addItem("微信");

		panel_1.add(comboBox);

		System.out.println(datestr);
		// 每一秒刷新下时间
		try
		{
			Thread.sleep(1000);// sleep是以ms为单位
		} catch (InterruptedException e)
		{
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
