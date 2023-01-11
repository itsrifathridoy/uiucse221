package CTAssignment;

import javax.swing.*;
import java.awt.*;
import java.io.FileNotFoundException;
import java.io.IOException;

public class Dashboard {
    String name,phone,balance,password;
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

        l1.setFont(new Font("Dialog", Font.BOLD, 50));
        l1.setBounds(50,50,500,100);
        l2.setBounds(50,150,150,50);
        l3.setBounds(50,175,150,50);
        btn1.setBounds(50,275,100,25);
        btn2.setBounds(250,275,100,25);
        fr.add(l1);
        fr.add(l2);
        fr.add(l3);
        fr.add(btn1);
        fr.add(btn2);
        btn1.addActionListener(e->{
            fr.setVisible(false);
            new CashOut();
        });
        btn2.addActionListener(e->{
            fr.setVisible(false);
            System.out.println(e.getActionCommand());
            try {
                new Recharge(e.getActionCommand());
            } catch (FileNotFoundException ex) {
                throw new RuntimeException(ex);
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });


        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setLayout(null);
        fr.setSize(500,500);
        fr.setVisible(true);


    }
}
