/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#111111", /* red     */
  [2] = "#222222", /* green   */
  [3] = "#333333", /* yellow  */
  [4] = "#444444", /* blue    */
  [5] = "#555555", /* magenta */
  [6] = "#666666", /* cyan    */
  [7] = "#777777", /* white   */

  /* 8 bright colors */
  [8]  = "#090909", /* black   */
  [9]  = "#181818", /* red     */
  [10] = "#272727", /* green   */
  [11] = "#393939", /* yellow  */
  [12] = "#484848", /* blue    */
  [13] = "#595959", /* magenta */
  [14] = "#707070", /* cyan    */
  [15] = "#818181", /* white   */

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
