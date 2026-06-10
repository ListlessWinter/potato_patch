#include <pspgu.h>

void sceGuCopyImage(int psm, int sx, int sy, int width, int height, int srcw, void* src, int dx, int dy, int destw, void* dest)
{
	sceGuStart(GU_DIRECT, dest);
	sceGuCopyImage(psm, sx, sy, width, height, srcw, src, dx, dy, destw, dest);
	sceGuFinish();
}