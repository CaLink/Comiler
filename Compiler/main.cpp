#include "APolishTranslator.h"
#include "APolishTranslator2.h"
#include "TreeBuilder.h"


///////////////////////////////////////////////////////////////
void ShowTranslate(APolishTranslator &T,const char *text)
{
    const char *result=T.Translate(text);
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<\r\n");
    printf("source:\t%s\r\n",text);
    printf("result:\t%s\r\n",result);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>\r\n");
}
///////////////////////////////////////////////////////////////
int main()
{
    APolishTranslator T;
    APolishTranslator2 TT;
    /*
    ShowTranslate(T,"A * B + C * D");
    ShowTranslate(T,"A +B*C+ D");
    ShowTranslate(T,"( A + B ) * C - ( D - E ) * ( F + G )");
    ShowTranslate(T,"Ab+Bc*Cd-(Dd-Ec)*(Fast+G)/X^2");
    ShowTranslate(TT,"Ab+Bc*Cd-(Dd-Ec)*(Fast+G)/X^2");
    ShowTranslate(T,"sin X + 5 + a ++");
    ShowTranslate(TT,"sin X + 5 + a ++");
    */

    ShowTranslate(TT,"cos(3.1415/6)*14.3+34*(2+6.7)"); //308.184273684835
    
    TreeBuilder TreeB(TT.GiveRWing());
    TreeB.Print();
    
    
    //ShowTranslate(TT,"print 5;print(cos(3.1415/6)*14.3+34*(2+6.7) );"); //308.184273684835

    return 0;
}
///////////////////////////////////////////////////////////////
