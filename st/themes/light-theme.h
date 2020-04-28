/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [7] = "#333333", /* black   */
  [1] = "#825b69", /* red     */
  [2] = "#69825b", /* green   */
  [3] = "#82755b", /* yellow  */
  [4] = "#5b6982", /* blue    */
  [5] = "#755b82", /* magenta */
  [6] = "#5b8275", /* cyan    */
  [0] = "#e5e5e5", /* white   */

  /* 8 bright colors */
  [15]  = "#333333", /* black   */
  [9]  = "#825b69", /* red     */
  [10] = "#69825b", /* green   */
  [11] = "#82755b", /* yellow  */
  [12] = "#5b6982", /* blue    */
  [13] = "#755b82", /* magenta */
  [14] = "#5b8275", /* cyan    */
  [8] = "#e5e5e5", /* white   */

  /* special colors */
  [256] = "#d9d5ba", /* background */
  [257] = "#333333", /* foreground */
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
