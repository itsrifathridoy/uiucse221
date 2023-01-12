package LoginReg;

import javax.swing.*;
import java.util.ArrayList;

public class Reg {
    JFrame reg;
    JLabel name;
    JLabel email;
    JLabel pass;
    JTextField nameText;
    JTextField emailText;
    JTextField passText;
    JButton regBtn;
    JButton loginBtn;
    static ArrayList<User> users = new ArrayList<>();
    Reg()
    {
        reg = new JFrame("Reg");
        name = new JLabel("Name: ");
        nameText = new JTextField(50);
        email = new JLabel("Email");
        emailText = new JTextField(50);
        pass = new JLabel("Password: ");
        passText = new JTextField(50);
        regBtn = new JButton("Reg");
        loginBtn = new JButton("Login");

        reg.add(name);
        reg.add(nameText);
        reg.add(email);
        reg.add(emailText);
        reg.add(pass);
        reg.add(passText);
        reg.add(regBtn);
        reg.add(loginBtn);

        name.setBounds(50,10,100,50);
        nameText.setBounds(50,10,100,50);
        email.setBounds(50,50,50,50);
        emailText.setBounds(100,50,100,50);
        pass.setBounds(50,100,100,50);
        passText.setBounds(100,100,100,50);
        regBtn.setBounds(150,150,100,50);
        loginBtn.setBounds(150,200,50,50);

        regBtn.addActionListener(e -> {
            if(nameText.getText().isEmpty() || emailText.getText().isEmpty() || passText.getText().isEmpty())
            {
                JOptionPane.showMessageDialog(reg,"Please Enter Your Information");
            }
            else {
                users.add(new User(nameText.getText(), emailText.getText(), passText.getText()));
                JOptionPane.showMessageDialog(reg,"Reg Successfull");
            }

        });
        loginBtn.addActionListener(e -> {
            reg.setVisible(false);
            new Login();
        });

        reg.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        reg.setBounds(100,100,500,500);
        reg.setLayout(null);
        reg.setVisible(true);
    }


}
