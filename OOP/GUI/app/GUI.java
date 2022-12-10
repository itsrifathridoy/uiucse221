package app;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUI implements ActionListener {
    JFrame jf = new JFrame();
    JButton jb = new JButton();
    JTextField j1 = new JTextField();
    JTextField j2 = new JTextField();
    JLabel jl = new JLabel();
    GUI()
    {
        jf.setTitle("Hello");
        jf.setSize(500,500);
        jf.setLocation(100,100);

        j1.setBounds(50,50,100,50);

        j2.setBounds(50,200,100,50);
        jb.setBounds(50,300,100,50);

        jb.setText("Button");
        jb.addActionListener(this);


        jl.setBounds(50,400,100,50);
        jf.add(jl);
        jf.add(j1);
        jf.add(j2);
        jf.add(jb);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       // jf.getContentPane().setBackground(new Color(255,0,0,99));
        jf.setLayout(null);
        jf.setVisible(true);
    }

    public void actionPerformed(ActionEvent e)
    {
        if(j1.getText().trim().equals("") && j2.getText().trim().equals(""))
        {
            ImageIcon icon = new ImageIcon("D:\\uiucse221\\OOP\\GUI\\img2.png");
            JOptionPane.showMessageDialog(jf,"Please Input","Alert",JOptionPane.PLAIN_MESSAGE,icon);
        }
        else if(j1.getText().equals("abc") && j2.getText().equals("def"))
        {
            JOptionPane.showMessageDialog(jf,"Successful");
        }
        else
        {
            JOptionPane.showMessageDialog(jf,"Failed");
        }
    }
}
