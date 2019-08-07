/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0e0e16", /* black   */
  [1] = "#e9546b", /* red     */
  [2] = "#c5c7bf", /* green   */
  [3] = "#d4c96c", /* yellow  */
  [4] = "#8099e2", /* blue    */
  [5] = "#aa6ebc", /* magenta */
  [6] = "#80e9d4", /* cyan    */
  [7] = "#8a9aa9", /* white   */

  /* 8 bright colors */
  [8]  = "#1c1c2d", /* black   */
  [9]  = "#dc6a7d", /* red     */
  [10] = "#c5c7bf", /* green   */
  [11] = "#c7dc97", /* yellow  */
  [12] = "#99bad2", /* blue    */
  [13] = "#c79bd6", /* magenta */
  [14] = "#97f3e0", /* cyan    */
  [15] = "#c4c4c4", /* white   */

  /* special colors */
  [256] = "#030303", /* background */
  [257] = "#abb2bf", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;
/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
