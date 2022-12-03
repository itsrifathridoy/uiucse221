package app;

import javax.swing.*;
import java.awt.*;

public class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setSize(1024,720);
        frame.setTitle("My Application");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        Image icon = Toolkit.getDefaultToolkit().getImage("D:\\uiucse221\\OOP\\GUI\\img.png");
        frame.setIconImage(icon);
    }
}
