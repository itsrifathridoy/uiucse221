package suptiAunty;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUI implements ActionListener {
    JFrame fr = new JFrame("Hello");
    JLabel l2 = new JLabel("Swing");
    public GUI()
    {



        fr.setBounds(50,100,500,500);
        fr.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        ImageIcon icon = new ImageIcon("D:\\uiucse221\\OOP\\GUI\\app\\img2.png");
        fr.setIconImage(icon.getImage());
        fr.setResizable(false);



//        JLabel l1 = new JLabel(new ImageIcon("D:\\uiucse221\\OOP\\GUI\\app\\img.png"));

//        l1.setBounds(50,0,50,50);
        l2.setHorizontalAlignment(SwingConstants.LEFT);
        System.out.println(l2.getHorizontalAlignment());
        l2.setBounds(0,0,500,500);

        fr.getContentPane().setBackground(new Color(0x387979));
//        fr.add(l1);
        fr.add(l2);
        JButton jb = new JButton("Button");
        jb.setBounds(50,50,100,100);
        fr.add(jb);
        jb.setBackground(new Color(0xf344));
        jb.addActionListener(this);


        fr.setLayout(null);
        fr.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        JOptionPane.showMessageDialog(fr,"Bye","Box",JOptionPane.WARNING_MESSAGE,new ImageIcon("D:\\uiucse221\\OOP\\GUI\\app\\img2.png"));
    }
}
