/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#444444", /* black   */
  [1] = "#825b69", /* red     */
  [2] = "#69825b", /* green   */
  [3] = "#82755b", /* yellow  */
  [4] = "#5b6982", /* blue    */
  [5] = "#755b82", /* magenta */
  [6] = "#5b8275", /* cyan    */
  [7] = "#cacaca", /* white   */

  /* 8 bright colors */
  [8]  = "#333333", /* black   */
  [9]  = "#bda0aa", /* red     */
  [10] = "#aabda0", /* green   */
  [11] = "#bdb3a0", /* yellow  */
  [12] = "#a0aabd", /* blue    */
  [13] = "#b3a0bd", /* magenta */
  [14] = "#a0bdb3", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#d9d5ba", /* background */
  [257] = "#444444", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;
