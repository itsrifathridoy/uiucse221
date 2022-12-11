package StudentPanel;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class UI extends JFrame implements ActionListener {
    Container searchStudent,main,admitStudent;
    JButton btn,reset,home,submit;
    JButton searchStu = new JButton("Search Student");
    JButton admission = new JButton("Admission");
    JTextField id,search,name,cgpa,mobile,address;

    JLabel idLabel,nameLabel,cgpaLabel,mobileLabel,addressLabel;

    ArrayList<Student> students =  new ArrayList<Student>();
//    Student [] students = {new Student("111","Rifat",3.32,"01752424377","Mirpur"),new Student("222","Supti",3.33,"0155565661","Dhaka")};

    public UI()
    {
        searchStudent  = new Container();
        main  = new Container();
        admitStudent = new Container();
        setHome();

    }
    public void displayAdmission()
    {
        setTitle("Admission");
        idLabel = new JLabel("ID: ");
        id = new JTextField(30);

        nameLabel = new JLabel("Name: ");
        name = new JTextField(30);

        cgpaLabel = new JLabel("CGPA: ");
        cgpa = new JTextField(30);

        mobileLabel = new JLabel("Mobile");
        mobile = new JTextField(30);

        addressLabel = new JLabel("Address: ");
        address = new JTextField(30);

        submit = new JButton("Submit");
        home = new JButton("Home");

        idLabel.setBounds(50,10,100,20);
        id.setBounds(100,10,150,20);


        nameLabel.setBounds(50,50,100,20);
        name.setBounds(100,50,300,20);

        cgpaLabel.setBounds(50,100,100,20);
        cgpa.setBounds(100,100,60,20);

        mobileLabel.setBounds(200,100,100,20);
        mobile.setBounds(250,100,150,20);

        addressLabel.setBounds(50,150,100,20);
        address.setBounds(100,150,300,30);

        submit.setBounds(200,200,100,30);
        home.setBounds(200,250,100,50);

        admitStudent.add(idLabel);
        admitStudent.add(id);
        admitStudent.add(nameLabel);
        admitStudent.add(name);
        admitStudent.add(cgpaLabel);
        admitStudent.add(cgpa);
        admitStudent.add(mobileLabel);
        admitStudent.add(mobile);
        admitStudent.add(addressLabel);
        admitStudent.add(address);
        admitStudent.add(submit);
        admitStudent.add(home);

        submit.addActionListener(this);
        home.addActionListener(this);

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setContentPane(admitStudent);
        setLayout(null);
        setVisible(true);
        setSize(500,500);
    }
    public void setHome()
    {

        main.setLayout(new FlowLayout());
        main.add(searchStu);
        main.add(admission);

        searchStu.addActionListener(this);
        admission.addActionListener(this);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setContentPane(main);
        setVisible(true);
        setSize(500,500);
    }
    public void setSearchStudent()
    {
        idLabel = new JLabel("ID: ");
        id = new JTextField(30);

        btn = new JButton("Search");

        nameLabel = new JLabel("Name: ");
        name = new JTextField(30);

        cgpaLabel = new JLabel("CGPA: ");
        cgpa = new JTextField(30);

        mobileLabel = new JLabel("Mobile");
        mobile = new JTextField(30);

        addressLabel = new JLabel("Address: ");
        address = new JTextField(30);

        reset = new JButton("Reset");
        home = new JButton("Home");

        idLabel.setBounds(50,10,100,20);
        id.setBounds(100,10,150,20);

        btn.setBounds(300,10,100,20);

        nameLabel.setBounds(50,50,100,20);
        name.setBounds(100,50,300,20);

        cgpaLabel.setBounds(50,100,100,20);
        cgpa.setBounds(100,100,50,20);

        mobileLabel.setBounds(200,100,100,20);
        mobile.setBounds(250,100,150,20);

        addressLabel.setBounds(50,150,100,20);
        address.setBounds(100,150,300,30);

        reset.setBounds(200,200,100,30);
        home.setBounds(200,250,100,50);

        searchStudent.add(idLabel);
        searchStudent.add(id);
        searchStudent.add(btn);
        searchStudent.add(nameLabel);
        searchStudent.add(name);
        searchStudent.add(cgpaLabel);
        searchStudent.add(cgpa);
        searchStudent.add(mobileLabel);
        searchStudent.add(mobile);
        searchStudent.add(addressLabel);
        searchStudent.add(address);
        searchStudent.add(reset);
        searchStudent.add(home);

        name.setEditable(false);
        cgpa.setEditable(false);
        mobile.setEditable(false);
        address.setEditable(false);

        btn.addActionListener(this);
        reset.addActionListener(this);
        home.addActionListener(this);

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setContentPane(searchStudent);
        setLayout(null);
        setVisible(true);
        setSize(500,500);
    }
    public void setReset()
    {
        name.setText("");
        cgpa.setText("");
        mobile.setText("");
        address.setText("");
    }
    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getActionCommand().equals(searchStu.getText()))
        {
            setSearchStudent();
        }
        else if(e.getActionCommand().equals("Home"))
        {
            setHome();
        }
        else if(e.getActionCommand().equals(admission.getText()))
        {
            displayAdmission();
            System.out.println(students.size());
        }
        else if (e.getActionCommand().equals("Submit"))
        {
             students.add(new Student(id.getText(), name.getText(), Double.parseDouble(cgpa.getText()), mobile.getText(), address.getText()));
                id.setText("");
                setReset();
                JOptionPane.showMessageDialog(this,"Submit");

            System.out.println(students.size());
        }
        else {

            try {

                if (e.getActionCommand().equals(btn.getText())) {
                    System.out.println(students.size());
                    System.out.println(students.get(0).id);
                    System.out.println(id.getText());
                    setReset();
//                    for (Student stu : students) {
//                        if (stu.id.equals(search.getText())) {
//                            name.setText(stu.name);
//                            cgpa.setText(Double.toString(stu.cgpa));
//                            mobile.setText(stu.mobileNo);
//                            address.setText(stu.address);
//                        }
//                    }
                    for(int i=0;i<students.size();i++)
                    {

                        if(students.get(i).id.equals(id.getText()))
                        {
                            name.setText(students.get(i).name);
                            cgpa.setText(Double.toString(students.get(i).cgpa));
                            mobile.setText(students.get(i).mobileNo);
                            address.setText(students.get(i).address);
                        }
                    }
                    if (name.getText().isEmpty()) {
                        JOptionPane.showMessageDialog(this, "No Data Found");
                    }
                } else if (e.getActionCommand().equals(reset.getText())) {
                    search.setText("");
                    setReset();
                }
            } catch (Exception err) {
                JOptionPane.showMessageDialog(this, err.getMessage(), "Warning", JOptionPane.WARNING_MESSAGE);
            }
        }
    }
}
