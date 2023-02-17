package LoginReg;

import javax.swing.*;

public class Login {
    JFrame login;
    JLabel email;
    JLabel pass;
    JTextField emailText;
    JTextField passText;
    JButton regBtn;
    JButton loginBtn;
    Login()
    {
        login = new JFrame("Reg");

        email = new JLabel("Email");
        emailText = new JTextField(50);
        pass = new JLabel("Password: ");
        passText = new JTextField(50);
        regBtn = new JButton("Reg");
        loginBtn = new JButton("Login");

        login.add(email);
        login.add(emailText);
        login.add(pass);
        login.add(passText);
        login.add(regBtn);
        login.add(loginBtn);


        email.setBounds(50,50,50,50);
        emailText.setBounds(100,50,100,50);
        pass.setBounds(50,100,100,50);
        passText.setBounds(100,100,100,50);
        regBtn.setBounds(150,150,100,50);
        loginBtn.setBounds(150,200,50,50);

        loginBtn.addActionListener(e -> {

            for (User x:Reg.users) {
                if(emailText.getText().equals(x.email) && passText.getText().equals(x.pass))
                {
                    JOptionPane.showMessageDialog(login,x.name);
                }
                else
                {
                    JOptionPane.showMessageDialog(login,"User Not Found");
                }
            }

        });
        regBtn.addActionListener(e -> {
            login.setVisible(false);
            new Reg();
        });
        login.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        login.setBounds(100,100,500,500);

        login.setLayout(null);
        login.setVisible(true);
    }
}
