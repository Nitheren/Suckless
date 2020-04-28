/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#293b3b", /* black   */
  [1] = "#bf5357", /* red     */
  [2] = "#41a551", /* green   */
  [3] = "#aea64f", /* yellow  */
  [4] = "#416ea5", /* blue    */
  [5] = "#bf6053", /* magenta */
  [6] = "#714da5", /* cyan    */
  [7] = "#CECECE", /* white   */

  /* 8 bright colors */
  [8]  = "#344040", /* black   */
  [9]  = "#bf6367", /* red     */
  [10] = "#51a55f", /* green   */
  [11] = "#aea75d", /* yellow  */
  [12] = "#5177a5", /* blue    */
  [13] = "#bf6e63", /* magenta */
  [14] = "#7859a5", /* cyan    */
  [15] = "#E8E8E8", /* white   */

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
