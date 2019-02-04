static const char *colorname[] = {

				  /* 8 normal colors */
				[0] = "#1d2330", /* black   */
				[1] = "#645377", /* red     */
				[2] = "#ad69af", /* green   */
				[3] = "#b1b5c8", /* yellow  */
				[4] = "#92969d", /* blue    */
				[5] = "#645377", /* magenta */
				[6] = "#ad69af", /* cyan    */
				[7] = "#b1b5c8", /* white   */

				/* 8 bright colors */
				[8]  = "#4b5665", /* black   */
				[9]  = "#84598d", /* red     */
				[10] = "#7b8290", /* green   */
				[11] = "#d1d7e1", /* yellow  */
				[12] = "#4b5665", /* blue    */
				[13] = "#84598d", /* magenta */
				[14] = "#7b8290", /* cyan    */
				[15] = "#d1d7e1", /* white   */

				/* special colors */
				[256] = "#1d2330", /* background */
				[257] = "#c0c5ce", /* foreground */
};

/*
 *  * Default colors (colorname index)
 *   * foreground, background, cursor
 *    */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;

/*
 *  * Colors used, when the specific fg == defaultfg. So in reverse mode this
 *   * will reverse too. Another logic would only make the simple feature too
 *    * complex.
 *     */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
