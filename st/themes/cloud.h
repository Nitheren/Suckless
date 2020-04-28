/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#222827", /* black   */
  [1] = "#d5a8e3", /* red     */
  [2] = "#9c75dd", /* green   */
  [3] = "#9898ae", /* yellow  */
  [4] = "#654a96", /* blue    */
  [5] = "#625566", /* magenta */
  [6] = "#a9d1df", /* cyan    */
  [7] = "#e6ebe5", /* white   */

  /* 8 bright colors */
  [8]  = "#5d6f74", /* black   */
  [9]  = "#cd749c", /* red     */
  [10] = "#63b0b0", /* green   */
  [11] = "#c0c0dd", /* yellow  */
  [12] = "#5786bc", /* blue    */
  [13] = "#3f3442", /* magenta */
  [14] = "#849da2", /* cyan    */
  [15] = "#d9d6cf", /* white   */

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
