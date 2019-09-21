/**
 * 
 */
package com.banyuan.pss.view;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.Color;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

/**
 * @zcj 
 *
 *2019年9月20日
 *
 * 下午3:36:54
 */
public class SellFrame extends JFrame
{

	private JPanel contentPane;
	private JTable table;
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;
	private JTextField textField_3;
	private JTextField textField_4;
	private JTextField textField_5;

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
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 584, 400);
		contentPane = new JPanel();
		contentPane.setForeground(Color.WHITE);
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JPanel panel = new JPanel();
		panel.setBounds(6, 132, 549, 226);
		contentPane.add(panel);
		panel.setLayout(null);
		
		JScrollPane scrollPane = new JScrollPane();
		scrollPane.setBounds(0, 6, 542, 215);
		panel.add(scrollPane);
		
		table = new JTable();
		scrollPane.setColumnHeaderView(table);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBounds(6, 6, 549, 117);
		contentPane.add(panel_1);
		panel_1.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("商品编号");
		lblNewLabel.setBounds(6, 6, 61, 16);
		panel_1.add(lblNewLabel);
		
		textField = new JTextField();
		textField.setBounds(74, 1, 59, 26);
		panel_1.add(textField);
		textField.setColumns(10);
		
		JLabel label = new JLabel("付款方式");
		label.setBounds(145, 6, 61, 16);
		panel_1.add(label);
		
		textField_1 = new JTextField();
		textField_1.setBounds(206, 1, 61, 26);
		panel_1.add(textField_1);
		textField_1.setColumns(10);
		
		JLabel lblNewLabel_1 = new JLabel("销售时间");
		lblNewLabel_1.setBounds(293, 6, 61, 16);
		panel_1.add(lblNewLabel_1);
		
		textField_2 = new JTextField();
		textField_2.setBounds(356, 1, 130, 26);
		panel_1.add(textField_2);
		textField_2.setColumns(10);
		
		JLabel label_1 = new JLabel("销售员");
		label_1.setBounds(6, 54, 61, 16);
		panel_1.add(label_1);
		
		textField_3 = new JTextField();
		textField_3.setBounds(76, 49, 52, 26);
		panel_1.add(textField_3);
		textField_3.setColumns(10);
		
		JLabel label_2 = new JLabel("货物总量");
		label_2.setBounds(145, 54, 61, 16);
		panel_1.add(label_2);
		
		textField_4 = new JTextField();
		textField_4.setBounds(216, 49, 51, 26);
		panel_1.add(textField_4);
		textField_4.setColumns(10);
		
		JLabel label_3 = new JLabel("货物金额");
		label_3.setBounds(293, 54, 61, 16);
		panel_1.add(label_3);
		
		textField_5 = new JTextField();
		textField_5.setBounds(366, 49, 120, 26);
		panel_1.add(textField_5);
		textField_5.setColumns(10);
		
		JButton btnNewButton = new JButton("添加");
		btnNewButton.setBounds(28, 82, 117, 29);
		panel_1.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("销售");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			}
		});
		btnNewButton_1.setBounds(193, 82, 117, 29);
		panel_1.add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("取消销售");
		btnNewButton_2.setBounds(369, 82, 117, 29);
		panel_1.add(btnNewButton_2);
	}

}
