#include <windows.h>
#include <stdio.h>
int main()
{
    ///絕對路徑
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\do.wav", NULL, SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\re.wav", NULL, SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\mi.wav", NULL, SND_SYNC);

    ///目錄可用兩個反斜線\\ 或一個斜線/
    PlaySound("do-re-mi/do.wav", NULL, SND_SYNC);
    ///相對路徑

    printf("Hello World\n");
}
