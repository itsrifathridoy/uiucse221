package CTAssignment;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Scanner;

public class Login implements ActionListener {
    JFrame fr;
    JLabel label1;
    JLabel label2;
    JTextField textField1;
    JTextField textField2;
    JButton btn;

    public Login() throws FileNotFoundException {
        ArrayList<String> usersArray = new ArrayList<>();
        FileReader users = new FileReader("Assignments/CTAssignment/user.txt");
        Scanner sc = new Scanner(users);


        fr = new JFrame("Log-In Panel");
        label1 = new JLabel("Phone Number");
        label2 = new JLabel("Password");
        textField1 = new JTextField(30);
        textField2 = new JTextField(30);
        btn = new JButton("Login");

        label1.setBounds(50,50,100,30);
        textField1.setBounds(180,50,150,30);
        label2.setBounds(50,100,100,30);
        textField2.setBounds(180,100,150,30);
        btn.setBounds(200,150,75,40);
        fr.add(label1);
        fr.add(textField1);
        fr.add(label2);
        fr.add(textField2);
        fr.add(btn);
        while (sc.hasNext())
        {
            usersArray.add(sc.nextLine());
        }

        btn.addActionListener(e->{
            boolean isLogin = false;
            String phone = textField1.getText();
            String pass = textField2.getText();
            for (String x: usersArray)
            {
                String[] phonePass = x.split(" ");
                if(phonePass[0].equals(phone) && phonePass[1].equals(pass))
                {

                    fr.setVisible(false);
                    new Dashboard(phonePass[2],phonePass[0],phonePass[3]);
                    fr = null;
                    isLogin = true;
                    break;
                }

            }
            if(!isLogin)
            {
                JOptionPane.showMessageDialog(fr,"Login Failed");
            }
        });


        fr.setLayout(null);
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setSize(500,500);
        fr.setVisible(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {

    }
}
