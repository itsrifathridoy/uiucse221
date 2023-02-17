package CT3;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Calculator extends JFrame implements ActionListener {
    JTextField screen,result;
    JButton one,two,three,four,plus,min,equal;
    Calculator()
    {
        screen = new JTextField();
        result = new JTextField();

        one = new JButton("1");
        two = new JButton("2");
        three = new JButton("3");
        four = new JButton("4");
        plus = new JButton("+");
        min = new JButton("-");
        equal = new JButton("=");

        screen.setBounds(150,10,200,50);
        one.setBounds(150,100,50,50);
        two.setBounds(300,100,50,50);
        three.setBounds(150,200,50,50);
        four.setBounds(300,200,50,50);
        plus.setBounds(150,300,50,50);
        equal.setBounds(225,300,50,50);
        min.setBounds(300,300,50,50);
        result.setBounds(150,400,200,50);

        screen.setEditable(false);
        result.setEditable(false);


        add(screen);
        add(one);
        add(two);
        add(three);
        add(four);
        add(plus);
        add(equal);
        add(min);
        add(result);

        one.addActionListener(this);
        two.addActionListener(this);
        three.addActionListener(this);
        four.addActionListener(this);
        plus.addActionListener(this);
        min.addActionListener(this);
        equal.addActionListener(this);


        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(null);
        setVisible(true);
    }

    public static void main(String[] args) {
        Calculator c = new Calculator();
        c.setSize(500,600);
    }

    String display = "";
    Boolean isEqual = false;
    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getActionCommand().equals(one.getText()) || e.getActionCommand().equals(two.getText()) ||e.getActionCommand().equals(three.getText())|| e.getActionCommand().equals(four.getText()) || e.getActionCommand().equals(plus.getText()) || e.getActionCommand().equals(min.getText()))
        {
            if(isEqual)
            {
                display = "";
                screen.setText("");
                result.setText("");
                isEqual=false;
            }
            display+=e.getActionCommand();
            screen.setText(display);
        }
        else if(e.getActionCommand().equals(equal.getText()))
        {
            isEqual = true;
            String str = new String(screen.getText());
            if(str.contains("+")) {
                String firstPart = str.substring(0, str.indexOf("+"));
                String secondPart = str.substring(str.indexOf("+") + 1, str.length());
                int res = Integer.parseInt(firstPart) + Integer.parseInt(secondPart);
                result.setText(Integer.toString(res));
            }
            else if (str.contains("-"))
            {
                String firstPart = str.substring(0, str.indexOf("-"));
                String secondPart = str.substring(str.indexOf("-") + 1, str.length());
                int res = Integer.parseInt(firstPart) - Integer.parseInt(secondPart);
                result.setText(Integer.toString(res));
            }
        }

    }
}
