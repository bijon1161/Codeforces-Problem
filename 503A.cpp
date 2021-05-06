#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tower,flor,low,high,queri;

    while(scanf("%d %d %d %d %d", &tower, &flor, &low, &high, &queri) != EOF)
    {
        while(queri--)
        {
            int ta,fa,tb,fb;
            scanf("%d %d %d %d",&ta, &fa, &tb, &fb);

            int time;
            int i,mf,fdm,ex = INT_MAX;

            if(ta != tb)
            {
                if(fa <= low)
                {
                    ex = low - fa;
                    mf = low;
                }
                else if(fa >= high)
                {
                    ex = fa - high;
                    mf = high;
                }
                else
                {
                    ex = 0;
                    mf = fa;
                }
                int ext = abs(ta-tb);
                int exf = abs(fb - mf);

                time = ex + ext + exf;

            }
            else time = abs(fa - fb);

            printf("%d\n",time);
        }
    }
    return 0;
}

