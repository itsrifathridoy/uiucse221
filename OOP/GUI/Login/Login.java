package Login;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.HashMap;
import java.util.Map;

public class Login extends JFrame implements ActionListener {
    Map<String,String> credentials = new HashMap<>();


    JLabel l1;
    JLabel l2;
    JLabel l3,l4;

    JTextField userName;
    JPasswordField passWord;
    JTextField user;
    JPasswordField pass;
    JButton btn;

    JButton bt;
    JLabel l = new JLabel();
    public Login()
    {

        super("Login");
        l1 = new JLabel("Username");
        l2 = new JLabel("Password");
        user = new JTextField(50);
        pass = new JPasswordField(50);
        btn = new JButton("Login");

        l3 = new JLabel("Username");
        l4 = new JLabel("Password");
        userName = new JTextField(50);
        passWord = new JPasswordField(50);
        bt = new JButton("Register");

        l1.setBounds(50,10,100,20);
        user.setBounds(150,10,100,20);
        l2.setBounds(50,50,100,20);
        pass.setBounds(150,50,100,20);
        btn.setBounds(150,100,100,50);
        l.setBounds(150,150,100,100);
        l3.setBounds(50,200,100,20);
        userName.setBounds(150,200,100,20);
        l4.setBounds(50,250,100,20);
        passWord.setBounds(150,250,100,20);
        bt.setBounds(150,300,100,50);

        add(l1);
        add(user);
        add(l2);
        add(pass);
        add(btn);
        add(l);
        add(l3);
        add(l4);
        add(userName);
        add(passWord);
        add(bt);
        btn.addActionListener(this);
        bt.addActionListener(this);


        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setLayout(null);
        setVisible(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getActionCommand().equals(btn.getText())) {
            if (user.getText().isEmpty() || new String(pass.getPassword()).isEmpty())
            {
                JOptionPane.showMessageDialog(this,"Username and Password should not empty.");
            }
            else {

                boolean auth = false;
                for (Map.Entry m : credentials.entrySet()) {
                    if (user.getText().trim().equals(m.getKey()) && new String(pass.getPassword()).trim().equals(m.getValue())) {
                        auth = true;
                        JOptionPane.showMessageDialog(this, "Successful");
                    }
                }

                if (!auth) {
                    JOptionPane.showMessageDialog(this, "Failed", "Error", JOptionPane.ERROR_MESSAGE);

                }
            }

        }
        else if(e.getActionCommand().equals(bt.getText()))

        {
            if (new String(passWord.getPassword()).isEmpty() || userName.getText().isEmpty())
            {
                JOptionPane.showMessageDialog(this,"Username and Password should not empty.");
            }
            else {
                credentials.put(userName.getText(), new String(passWord.getPassword()));
                JOptionPane.showMessageDialog(this, "Account Created Successfully");
            }
        }
    }

    public static void main(String[] args) {
        Login fr = new Login();
        fr.setSize(500,500);
    }
}
