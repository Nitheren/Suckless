/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#571dc2", /* red     */
  [2] = "#14db49", /* green   */
  [3] = "#403d70", /* yellow  */
  [4] = "#385a70", /* blue    */
  [5] = "#384894", /* magenta */
  [6] = "#4f3a5e", /* cyan    */
  [7] = "#999999", /* white   */

  /* 8 bright colors */
  [8]  = "#38372c", /* black   */
  [9]  = "#7c54b0", /* red     */
  [10] = "#a2e655", /* green   */
  [11] = "#9c6f59", /* yellow  */
  [12] = "#323f5c", /* blue    */
  [13] = "#5e6c99", /* magenta */
  [14] = "#667d77", /* cyan    */
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
