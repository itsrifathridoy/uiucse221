package CTAssignment;

import javax.swing.*;
import java.awt.*;

public class Dashboard {
    String name,phone,balance;
    JFrame fr;
    JLabel l1,l2,l3;
    JButton btn1,btn2;


    public Dashboard(String name, String phone, String balance) {
        this.name = name;
        this.phone = phone;
        this.balance = balance;
        fr = new JFrame("DashBoard");
        l1 = new JLabel("Welcome "+ name);
        l2 = new JLabel("Phone: "+ phone);
        l3 = new JLabel("Balance: " + balance);
        btn1 = new JButton("Cash Out");
        btn2 = new JButton("Recharge");

        fr.add(l1);
        fr.add(l2);
        fr.add(l3);
        fr.add(btn1);
        fr.add(btn2);


        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setLayout(new FlowLayout());
        fr.setSize(500,500);
        fr.setVisible(true);


    }
}
