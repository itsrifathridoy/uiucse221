#include<stdio.h>
int main()
{
    int t_credit,trimester,alreadyPaid=0,pay_percent=25,advancePayAmount;
    float tuition_fee,scholar_percent,with_trimesterFee;
    char isScholarship,advancePay;

    printf("Which Trimester? : ");
    scanf("%d",&trimester);


    printf("\nTotal Credit:");
    scanf("%d",&t_credit);

    tuition_fee = t_credit*5000.00;

    printf("\nAre you have scholarship/Waiver?(Y/N): ");
    scanf(" %c",&isScholarship);

    if(isScholarship == 'Y' || isScholarship == 'y')
    {
        printf("%c",isScholarship);
        printf("\nScholarship/Waiver Percentance: ");
        scanf("%f",&scholar_percent);
        tuition_fee = tuition_fee - tuition_fee*scholar_percent/100;
    }
    printf("\nAlready Paid:");
    scanf("%d",&alreadyPaid);

    with_trimesterFee = tuition_fee + 5000;

    printf("\n----------------------------------------------");

    void green ()
    {
        printf("\033[0;32m");
    }
    void red ()
    {
        printf("\033[1;31m");
    }
    void reset () {
        printf("\033[0m");
    }
    red();
    printf("\nYour Total Tuition Fee(Without Trimester Fee): ");
    green();
    printf("%d",(int)tuition_fee);
    reset();

    red();
    printf("\nTotal Payable Amount: ");
    green();
    printf("%d",(int)with_trimesterFee);
    reset();

    printf("\n----------------------------------------------");

    if(trimester == 1)
        {
            alreadyPaid = alreadyPaid + 15000;
        }

    for(int i=1;i<=4;i++)
    {
        int pay,payable;

        payable = with_trimesterFee*pay_percent/100.00;
        if(alreadyPaid>=payable)
        {
            pay = 0;
        }
        else
        {
            pay = payable - alreadyPaid;
        }
        if(i==1)
        {
            printf("\n%dst installment: %d",i,pay);

        }
        else if(i==2)
        {
            printf("\n%dnd installment: %d",i,pay);
        }
        else if(i==3)
        {
            printf("\n%drd installment: %d",i,pay);
        }
        else if(i==4)
        {
            printf("\n%dth installment: %d",i,pay);
        }

        pay_percent+=25;
        alreadyPaid = alreadyPaid + pay;
    }




    return 0;
}
