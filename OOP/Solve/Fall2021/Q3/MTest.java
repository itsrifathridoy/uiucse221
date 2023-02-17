package Fall2021.Q3;
class Exam {
    int id;
    double mark;
}
class MTest {
    void testFnc1(Exam m1, Exam m2) {
        Exam temp = m1;
        m1 = m2;
        m2 = temp;
    }

    void testFnc2(Exam m1, Exam m2) {
        int tempId = m2.id;
        double tempMark = m1.mark;
        m1.id = m2.id;
        m1.mark = m2.mark;
        m2.id = tempId;
        m2.mark = tempMark;
    }

    public static void main(String[] args)
    {
        MTest testObj = new MTest();
        Exam e1 = new Exam();
        Exam e2 = new Exam();
        e1.id = 10;
        e1.mark = 70;
        e2.id = 20;
        e2.mark = 85;
        System.out.println(e1.id + " " + e1.mark);
        testObj.testFnc1(e1, e2);
        System.out.println(e1.id +  " " + e1.mark);
        testObj.testFnc2(e1, e2);
        System.out.println(e1.id + " " + e1.mark);
        System.out.println(e2.mark);
        e1 = new Exam();
        e2 = new Exam();
    }
}
