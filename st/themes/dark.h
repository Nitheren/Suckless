/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#cc0000", /* red     */
  [2] = "#00cc00", /* green   */
  [3] = "#bd5e01", /* yellow  */
  [4] = "#0000cc", /* blue    */
  [5] = "#cc00cc", /* magenta */
  [6] = "#00cccc", /* cyan    */
  [7] = "#aaaaaa", /* white   */

  /* 8 bright colors */
  [8]  = "#333333", /* black   */
  [9]  = "#ff0000", /* red     */
  [10] = "#00ff00", /* green   */
  [11] = "#ffff00", /* yellow  */
  [12] = "#0000ff", /* blue    */
  [13] = "#ff00ff", /* magenta */
  [14] = "#00ffff", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ffffff", /* foreground */
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

