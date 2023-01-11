package CTAssignment;

import javax.swing.*;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Recharge {
    JFrame re;
    JButton Dn;
    JLabel ph,am,pas;
    JTextField tx1,tx2,tx3;
    JCheckBox ch;
    Recharge( String event) throws IOException {
        ArrayList<String> usersArray = new ArrayList<>();
        FileReader users = new FileReader("Assignments/CTAssignment/user.txt");
        FileWriter changeBalance = new FileWriter("Assignments/CTAssignment/user.txt");

        Scanner sc = new Scanner(users);
        while (sc.hasNext())
        {
            usersArray.add(sc.nextLine());
        }
        re=new JFrame ("Recharge/Cash-Out");

        ph=new JLabel("Phone Number");
        ph.setBounds(50,100,200,50);
        am=new JLabel("Amount");
        am.setBounds(50,150,200,50);
        pas=new JLabel("Password");
        pas.setBounds(50,200,200,50);
        tx1=new JTextField(30);
        tx2=new JTextField(30);
        tx3=new JTextField(30);
        tx1.setBounds(250,100,200,50);
        tx2.setBounds(250,150,200,50);
        tx3.setBounds(250,200,200,50);
        ch=new JCheckBox("Are you sure?");
        ch.setBounds(150,350,150,50);
        Dn=new JButton("Done");
        Dn.setBounds(150,400,100,50);
        Dn.addActionListener(e->{

            boolean isDone = false;
            String phone = tx1.getText();
            String pass = tx3.getText();

            for (String x: usersArray)
            {
                String[] phonePass = x.split(" ");
                if(phonePass[0].equals(phone) && phonePass[1].equals(pass)&&ch.isSelected())
                {
                    if(event.equals("Recharge"))
                    {

                    }

                    re.setVisible(false);

                    new Dashboard(phonePass[2],phonePass[0],phonePass[3]);
                    re = null;
                    isDone = true;
                    break;
                }

            }
            if(!isDone)
            {
                JOptionPane.showMessageDialog(re,"Failed");
            }
        });
        re.add(Dn);
        re.add(am);
        re.add(ph);
        re.add(pas);
        re.add(tx1);
        re.add(tx2);
        re.add(tx3);
        re.add(ch);

        re.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        re.setLayout(null);
        re.setSize(500,500);
        re.setVisible(true);

    }
}
