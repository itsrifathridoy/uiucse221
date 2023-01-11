package CTAssignment;

import javax.swing.*;



public class CashOut {
    JFrame co;
    JButton Dn;
    JLabel ph,am,pas;
    JTextField tx1,tx2,tx3;
    JCheckBox ch;
    CashOut(){
        co=new JFrame("Cash Out");
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

        });
        co.add(Dn);
        co.add(am);
        co.add(ph);
        co.add(pas);
        co.add(tx1);
        co.add(tx2);
        co.add(tx3);
        co.add(ch);

        co.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        co.setLayout(null);
        co.setSize(500,500);
        co.setVisible(true);

    }
}
