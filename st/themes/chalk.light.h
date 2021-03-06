/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#151515", /* black   */
  [1] = "#fb9fb1", /* red     */
  [2] = "#acc267", /* green   */
  [3] = "#ddb26f", /* yellow  */
  [4] = "#6fc2ef", /* blue    */
  [5] = "#e1a3ee", /* magenta */
  [6] = "#12cfc0", /* cyan    */
  [7] = "#d0d0d0", /* white   */

  /* 8 bright colors */
  [8]  = "#505050", /* black   */
  [9]  = "#fb9fb1", /* red     */
  [10] = "#acc267", /* green   */
  [11] = "#ddb26f", /* yellow  */
  [12] = "#6fc2ef", /* blue    */
  [13] = "#e1a3ee", /* magenta */
  [14] = "#12cfc0", /* cyan    */
  [15] = "#f5f5f5", /* white   */

  /* special colors */
  [256] = "#f5f5f5", /* background */
  [257] = "#303030", /* foreground */
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
