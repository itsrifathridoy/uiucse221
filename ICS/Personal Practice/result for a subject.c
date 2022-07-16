#include <stdio.h>

int main() {

    float att,ass,mid,ct,ct_total,avg_ct,pres=0,fnal,total;
    int att_from,att_to,ass_from,ass_to,mid_from,mid_to,n_ct,ct_from,ct_to,pres_from,pres_to=0,fnal_from,fnal_to,total_percentace;
    char isPresentation;


    printf("Enter Your Attendance Marks: ");
    scanf("%f",&att);

    printf("\nAttendance Marks will be converted from __ to __: ");
    scanf("%d %d",&att_from,&att_to);

    printf("\nEnter Your Assignment Marks: ");
    scanf("%f",&ass);

    printf("\nAssignment Marks will be converted from __ to __: ");
    scanf("%d %d",&ass_from,&ass_to);

    printf("\nEnter Your Mid-Term Marks: ");
    scanf("%f",&mid);

    printf("\nMid-Term Marks will be converted from __ to __: ");
    scanf("%d %d",&mid_from,&mid_to);

    printf("\nNumber of CT will be Count: ");
    scanf("%d",&n_ct);


    for(int i=1;i<=n_ct;i++)
    {
        printf("\nEnter Your Best CT-%d Marks: ",i);
        scanf("%f",&ct);
        ct_total = ct_total + ct;
    }
    avg_ct = ct_total/n_ct;

    printf("\nCT Marks will be converted from __ to __: ");
    scanf("%d %d",&ct_from,&ct_to);

    printf("\nIs there any Presentation(Y/N): ");
    scanf(" %c",&isPresentation);

    if(isPresentation == 'Y' || 'y')
    {
        printf("\nEnter Your Presentation Marks: ");
        scanf("%f",&pres);
        printf("\nPresentation's Marks will be converted from __ to __: ");
        scanf("%d %d",&pres_from,&pres_to);
    }

    printf("\nEnter Your Final Exam Marks: ");
    scanf("%f",&fnal);

    printf("\nFinal Marks will be converted from __ to __: ");
    scanf("%d %d",&fnal_from,&fnal_to);


    float convertMarks( float obtain_marks, int from_convert, int to_convert)
    {
        float c_marks;
        c_marks = (obtain_marks*to_convert)/from_convert;
        return c_marks;

    }

    float c_att = convertMarks(att,att_from,att_to);
    float c_ass = convertMarks(ass,ass_from,ass_to);
    float c_mid = convertMarks(mid,mid_from,mid_to);
    float c_ct = convertMarks(avg_ct,ct_from,ct_to);
    float c_pres = convertMarks(pres,pres_from,pres_to);
    float c_fnal = convertMarks(fnal,fnal_from,fnal_to);


    total = c_att + c_ass + c_mid + c_ct + c_pres + c_fnal;
    total_percentace = att_to + ass_to + mid_to + ct_to + pres_to + fnal_to;



    printf("Total %.2f Out of %d",total,total_percentace);

  return 0;
}

