const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#252525", /* black   */
  [1] = "#A5615B", /* red     */
  [2] = "#C96960", /* green   */
  [3] = "#738A62", /* yellow  */
  [4] = "#AF956D", /* blue    */
  [5] = "#9A7A86", /* magenta */
  [6] = "#B6B4A2", /* cyan    */
  [7] = "#e1c9c7", /* white   */

  /* 8 bright colors */
  [8]  = "#9d8c8b",  /* black   */
  [9]  = "#A5615B",  /* red     */
  [10] = "#C96960", /* green   */
  [11] = "#738A62", /* yellow  */
  [12] = "#AF956D", /* blue    */
  [13] = "#9A7A86", /* magenta */
  [14] = "#B6B4A2", /* cyan    */
  [15] = "#e1c9c7", /* white   */

  /* special colors */
  [256] = "#252525", /* background */
  [257] = "#e1c9c7", /* foreground */
  [258] = "#e1c9c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 7;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
