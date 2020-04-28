/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1d1f21", /* black   */
  [1] = "#cc342b", /* red     */
  [2] = "#198844", /* green   */
  [3] = "#fba922", /* yellow  */
  [4] = "#3971ed", /* blue    */
  [5] = "#a36ac7", /* magenta */
  [6] = "#3971ed", /* cyan    */
  [7] = "#c5c8c6", /* white   */

  /* 8 bright colors */
  [8]  = "#969896", /* black   */
  [9]  = "#cc342b", /* red     */
  [10] = "#198844", /* green   */
  [11] = "#fba922", /* yellow  */
  [12] = "#3971ed", /* blue    */
  [13] = "#a36ac7", /* magenta */
  [14] = "#3971ed", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#f7f9fb", /* background */
  [257] = "#373b41", /* foreground */
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
