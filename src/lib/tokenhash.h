/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf --compare-strncmp -C -m 20 tokens.gperf  */
/* Computed positions: -k'1,4-5,8' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 5 "tokens.gperf"
struct fhtoken
{
  const char *name;
  int tokenId;
};

#define TOTAL_KEYWORDS 123
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 24
#define MIN_HASH_VALUE 18
#define MAX_HASH_VALUE 186
/* maximum key range = 169, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash(const char *str, size_t len);
public:
  static const struct fhtoken *in_word_set(const char *str, size_t len);
};

inline unsigned int
Perfect_Hash::hash(const char *str, size_t len)
{
  static const unsigned char asso_values[] =
  {
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187,  94,  12,  10,  57,  24,
    6,  31,   5,  29, 187, 187,   9,   6,  13,  49,
    37, 187,  94,  44,   5,   7,  88, 187,  40, 187,
    187, 187, 187, 187, 187, 187, 187,   6,  23,  14,
    78,   9,   5,  28,  50,   5,  31,  96,  24,  83,
    54,  29,  12, 187,   6,  37,   5,  60,  99,  20,
    187,  46, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
    187, 187, 187, 187, 187, 187
  };
  unsigned int hval = len;

  switch (hval)
  {
  default:
    hval += asso_values[static_cast<unsigned char>(str[7])];
  /*FALLTHROUGH*/
  case 7:
  case 6:
  case 5:
    hval += asso_values[static_cast<unsigned char>(str[4])];
  /*FALLTHROUGH*/
  case 4:
    hval += asso_values[static_cast<unsigned char>(str[3])];
  /*FALLTHROUGH*/
  case 3:
  case 2:
  case 1:
    hval += asso_values[static_cast<unsigned char>(str[0])];
    break;
  }
  return hval;
}

static const struct fhtoken wordlist[] =
{
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
  {(char *)0, 0}, {(char *)0, 0},
#line 69 "tokens.gperf"
  {"List",FH_LIST},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
#line 118 "tokens.gperf"
  {"TString",FH_TSTRING},
#line 74 "tokens.gperf"
  {"MString",FH_MSTRING},
#line 130 "tokens.gperf"
  {"UString",FH_USTRING},
#line 116 "tokens.gperf"
  {"TEffect",FH_TEFFECT},
  {(char *)0, 0}, {(char *)0, 0},
#line 64 "tokens.gperf"
  {"Layer",FH_LAYER},
#line 70 "tokens.gperf"
  {"MDict",FH_MDICT},
  {(char *)0, 0},
#line 60 "tokens.gperf"
  {"Halftone",FH_HALFTONE},
#line 119 "tokens.gperf"
  {"TabTable",FH_TABTABLE},
  {(char *)0, 0},
#line 82 "tokens.gperf"
  {"MultiBlend",FH_MULTIBLEND},
  {(char *)0, 0},
#line 120 "tokens.gperf"
  {"TaperedFill",FH_TAPEREDFILL},
#line 121 "tokens.gperf"
  {"TaperedFillX",FH_TAPEREDFILLX},
#line 68 "tokens.gperf"
  {"LinearFill",FH_LINEARFILL},
#line 73 "tokens.gperf"
  {"MQuickDict",FH_MQUICKDICT},
#line 32 "tokens.gperf"
  {"ContentFill",FH_CONTENTFILL},
#line 75 "tokens.gperf"
  {"MasterPageDocMan",FH_MASTERPAGEDOCMAN},
#line 76 "tokens.gperf"
  {"MasterPageElement",FH_MASTERPAGEELEMENT},
#line 25 "tokens.gperf"
  {"CharacterFill",FH_CHARACTERFILL},
#line 49 "tokens.gperf"
  {"FWFeatherFilter",FH_FWFEATHERFILTER},
#line 55 "tokens.gperf"
  {"FilterAttributeHolder",FH_FILTERATTRIBUTEHOLDER},
#line 79 "tokens.gperf"
  {"MasterPageSymbolClass",FH_MASTERPAGESYMBOLCLASS},
#line 77 "tokens.gperf"
  {"MasterPageLayerElement",FH_MASTERPAGELAYERELEMENT},
#line 78 "tokens.gperf"
  {"MasterPageLayerInstance",FH_MASTERPAGELAYERINSTANCE},
#line 80 "tokens.gperf"
  {"MasterPageSymbolInstance",FH_MASTERPAGESYMBOLINSTANCE},
#line 28 "tokens.gperf"
  {"Color6",FH_COLOR6},
#line 126 "tokens.gperf"
  {"TileFill",FH_TILEFILL},
#line 71 "tokens.gperf"
  {"MList",FH_MLIST},
#line 83 "tokens.gperf"
  {"MultiColorList",FH_MULTICOLORLIST},
#line 125 "tokens.gperf"
  {"TextInPath",FH_TEXTINPATH},
#line 67 "tokens.gperf"
  {"LineTable",FH_LINETABLE},
#line 30 "tokens.gperf"
  {"ConeFill",FH_CONEFILL},
#line 127 "tokens.gperf"
  {"TintColor",FH_TINTCOLOR},
#line 128 "tokens.gperf"
  {"TintColor6",FH_TINTCOLOR6},
#line 34 "tokens.gperf"
  {"CustomProc",FH_CUSTOMPROC},
#line 33 "tokens.gperf"
  {"ContourFill",FH_CONTOURFILL},
#line 66 "tokens.gperf"
  {"LinePat",FH_LINEPAT},
#line 24 "tokens.gperf"
  {"CalligraphicStroke",FH_CALLIGRAPHICSTROKE},
#line 15 "tokens.gperf"
  {"BasicFill",FH_BASICFILL},
#line 103 "tokens.gperf"
  {"PropLst",FH_PROPLST},
#line 46 "tokens.gperf"
  {"FHDocHeader",FH_FHDOCHEADER},
#line 35 "tokens.gperf"
  {"Data",FH_DATA},
#line 96 "tokens.gperf"
  {"PatternFill",FH_PATTERNFILL},
#line 29 "tokens.gperf"
  {"CompositePath",FH_COMPOSITEPATH},
#line 63 "tokens.gperf"
  {"Import",FH_IMPORT},
#line 97 "tokens.gperf"
  {"PatternLine",FH_PATTERNLINE},
#line 89 "tokens.gperf"
  {"PSFill",FH_PSFILL},
#line 81 "tokens.gperf"
  {"MpObject",FH_MPOBJECT},
#line 43 "tokens.gperf"
  {"Envelope",FH_ENVELOPE},
#line 101 "tokens.gperf"
  {"Procedure",FH_PROCEDURE},
#line 50 "tokens.gperf"
  {"FWGlowFilter",FH_FWGLOWFILTER},
#line 88 "tokens.gperf"
  {"Oval",FH_OVAL},
#line 53 "tokens.gperf"
  {"Figure",FH_FIGURE},
#line 124 "tokens.gperf"
  {"TextEffs",FH_TEXTEFFS},
#line 108 "tokens.gperf"
  {"SketchFilter",FH_SKETCHFILTER},
#line 27 "tokens.gperf"
  {"Collector",FH_COLLECTOR},
#line 102 "tokens.gperf"
  {"ProcessColor",FH_PROCESSCOLOR},
#line 39 "tokens.gperf"
  {"DuetFilter",FH_DUETFILTER},
#line 65 "tokens.gperf"
  {"LensFill",FH_LENSFILL},
#line 36 "tokens.gperf"
  {"DataList",FH_DATALIST},
#line 52 "tokens.gperf"
  {"FWSharpenFilter",FH_FWSHARPENFILTER},
#line 87 "tokens.gperf"
  {"OpacityFilter",FH_OPACITYFILTER},
#line 37 "tokens.gperf"
  {"DateTime",FH_DATETIME},
#line 62 "tokens.gperf"
  {"ImageImport",FH_IMAGEIMPORT},
#line 123 "tokens.gperf"
  {"TextColumn",FH_TEXTCOLUMN},
#line 93 "tokens.gperf"
  {"Path",FH_PATH},
#line 92 "tokens.gperf"
  {"Paragraph",FH_PARAGRAPH},
#line 91 "tokens.gperf"
  {"PantoneColor",FH_PANTONECOLOR},
#line 16 "tokens.gperf"
  {"BasicLine",FH_BASICLINE},
#line 85 "tokens.gperf"
  {"NewContourFill",FH_NEWCONTOURFILL},
#line 51 "tokens.gperf"
  {"FWShadowFilter",FH_FWSHADOWFILTER},
#line 109 "tokens.gperf"
  {"SpotColor",FH_SPOTCOLOR},
#line 110 "tokens.gperf"
  {"SpotColor6",FH_SPOTCOLOR6},
#line 61 "tokens.gperf"
  {"ImageFill",FH_IMAGEFILL},
#line 54 "tokens.gperf"
  {"FileDescriptor",FH_FILEDESCRIPTOR},
#line 44 "tokens.gperf"
  {"ExpandFilter",FH_EXPANDFILTER},
#line 90 "tokens.gperf"
  {"PSLine",FH_PSLINE},
#line 72 "tokens.gperf"
  {"MName",FH_MNAME},
#line 20 "tokens.gperf"
  {"Brush",FH_BRUSH},
#line 94 "tokens.gperf"
  {"PathText",FH_PATHTEXT},
#line 99 "tokens.gperf"
  {"PerspectiveGrid",FH_PERSPECTIVEGRID},
#line 48 "tokens.gperf"
  {"FWBlurFilter",FH_FWBLURFILTER},
#line 58 "tokens.gperf"
  {"Group",FH_GROUP},
#line 38 "tokens.gperf"
  {"DisplayText",FH_DISPLAYTEXT},
#line 98 "tokens.gperf"
  {"PerspectiveEnvelope",FH_PERSPECTIVEENVELOPE},
#line 17 "tokens.gperf"
  {"BendFilter",FH_BENDFILTER},
#line 131 "tokens.gperf"
  {"VDict",FH_VDICT},
#line 95 "tokens.gperf"
  {"PathTextLineInfo",FH_PATHTEXTLINEINFO},
#line 115 "tokens.gperf"
  {"SymbolLibrary",FH_SYMBOLLIBRARY},
#line 31 "tokens.gperf"
  {"ConnectorLine",FH_CONNECTORLINE},
#line 22 "tokens.gperf"
  {"BrushStroke",FH_BRUSHSTROKE},
#line 129 "tokens.gperf"
  {"TransformFilter",FH_TRANSFORMFILTER},
#line 111 "tokens.gperf"
  {"StylePropLst",FH_STYLEPROPLST},
#line 23 "tokens.gperf"
  {"BrushTip",FH_BRUSHTIP},
#line 104 "tokens.gperf"
  {"RadialFill",FH_RADIALFILL},
#line 105 "tokens.gperf"
  {"RadialFillX",FH_RADIALFILLX},
#line 26 "tokens.gperf"
  {"ClipGroup",FH_CLIPGROUP},
#line 42 "tokens.gperf"
  {"Element",FH_ELEMENT},
#line 59 "tokens.gperf"
  {"Guides",FH_GUIDES},
#line 14 "tokens.gperf"
  {"AttributeHolder",FH_ATTRIBUTEHOLDER},
#line 122 "tokens.gperf"
  {"TextBlok",FH_TEXTBLOK},
#line 19 "tokens.gperf"
  {"Block",FH_BLOCK},
#line 45 "tokens.gperf"
  {"Extrusion",FH_EXTRUSION},
#line 40 "tokens.gperf"
  {"ElemList",FH_ELEMLIST},
#line 100 "tokens.gperf"
  {"PolygonFigure",FH_POLYGONFIGURE},
#line 113 "tokens.gperf"
  {"SymbolClass",FH_SYMBOLCLASS},
#line 86 "tokens.gperf"
  {"NewRadialFill",FH_NEWRADIALFILL},
#line 47 "tokens.gperf"
  {"FWBevelFilter",FH_FWBEVELFILTER},
#line 133 "tokens.gperf"
  {"Xform",FH_XFORM},
#line 84 "tokens.gperf"
  {"NewBlend",FH_NEWBLEND},
#line 11 "tokens.gperf"
  {"AGDFont",FH_AGDFONT},
#line 56 "tokens.gperf"
  {"GradientMaskFilter",FH_GRADIENTMASKFILTER},
#line 107 "tokens.gperf"
  {"Rectangle",FH_RECTANGLE},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
  {(char *)0, 0}, {(char *)0, 0},
#line 21 "tokens.gperf"
  {"BrushList",FH_BRUSHLIST},
  {(char *)0, 0}, {(char *)0, 0},
#line 106 "tokens.gperf"
  {"RaggedFilter",FH_RAGGEDFILTER},
#line 57 "tokens.gperf"
  {"GraphicStyle",FH_GRAPHICSTYLE},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
#line 117 "tokens.gperf"
  {"TFOnPath",FH_TFONPATH},
  {(char *)0, 0}, {(char *)0, 0},
#line 13 "tokens.gperf"
  {"ArrowPath",FH_ARROWPATH},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
  {(char *)0, 0}, {(char *)0, 0},
#line 114 "tokens.gperf"
  {"SymbolInstance",FH_SYMBOLINSTANCE},
  {(char *)0, 0},
#line 132 "tokens.gperf"
  {"VMpObj",FH_VMPOBJ},
#line 41 "tokens.gperf"
  {"ElemPropLst",FH_ELEMPROPLST},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
#line 112 "tokens.gperf"
  {"SwfImport",FH_SWFIMPORT},
  {(char *)0, 0},
#line 12 "tokens.gperf"
  {"AGDSelection",FH_AGDSELECTION},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
  {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0}, {(char *)0, 0},
#line 18 "tokens.gperf"
  {"BlendObject",FH_BLENDOBJECT}
};

const struct fhtoken *
Perfect_Hash::in_word_set(const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
  {
    unsigned int key = hash(str, len);

    if (key <= MAX_HASH_VALUE)
    {
      const char *s = wordlist[key].name;

      if (s && *str == *s && !strncmp(str + 1, s + 1, len - 1) && s[len] == '\0')
        return &wordlist[key];
    }
  }
  return 0;
}
#line 134 "tokens.gperf"

