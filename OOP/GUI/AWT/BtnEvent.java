package AWT;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class BtnEvent extends Frame implements ActionListener {
    Label l;
    Button btn;
    Button rset;
    int count=0;
    public BtnEvent() {
        super("Button Event");
        l = new Label(Integer.toString(count));
        btn = new Button("Click");
        rset = new Button("Reset");

        setLayout(new FlowLayout());

        add(l);
        add(btn);
        add(rset);
        btn.addActionListener(this);
        rset.addActionListener(this);


    }


    public static void main(String[] args) {
        BtnEvent fr = new BtnEvent();
        fr.setSize(300,300);
        fr.setVisible(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getActionCommand().equals(btn.getLabel()))
        {
            l.setText(Integer.toString(++count));
        }
        else if (e.getActionCommand().equals(rset.getLabel()))
        {
            l.setText("0");
        }

    }
}
