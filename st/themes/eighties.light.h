/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2d2d2d", /* black   */
  [1] = "#f2777a", /* red     */
  [2] = "#99cc99", /* green   */
  [3] = "#ffcc66", /* yellow  */
  [4] = "#6699cc", /* blue    */
  [5] = "#cc99cc", /* magenta */
  [6] = "#66cccc", /* cyan    */
  [7] = "#d3d0c8", /* white   */

  /* 8 bright colors */
  [8]  = "#747369", /* black   */
  [9]  = "#f2777a", /* red     */
  [10] = "#99cc99", /* green   */
  [11] = "#ffcc66", /* yellow  */
  [12] = "#6699cc", /* blue    */
  [13] = "#cc99cc", /* magenta */
  [14] = "#66cccc", /* cyan    */
  [15] = "#f2f0ec", /* white   */

  /* special colors */
  [256] = "#f2f0ec", /* background */
  [257] = "#515151", /* foreground */
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
