#ifndef CHALKFRONTEND_PARSER_HEADER_FILE
#define CHALKFRONTEND_PARSER_HEADER_FILE

#include<vector>
#include<string>

namespace CHALKFrontend
{
class Cell;
class ListCellData;
class CellData;
class CBLOCK;
class PAD;
class PROPERTY;
class XYRELATIVE;
class XYABSOLUTE;
class Element;
class PLACEMENT;
class TEXT;
class XELEMENT;
class Geometry;
class POLYGON;
class PATH;
class TRAPEZOID;
class CTRAPEZOID;
class CIRCLE;
class XGEOMETRY;
class RECTANGLE;
class RectangleInfoByte;
class LayerData;
class ListLayerNumber;
class LayerNumber;
class ListDataTypeNumber;
class DataTypeNumber;
class ListWidth;
class ListHeight;
class ListXCoord;
class ListYCoord;
class ListRepetition;
class Width;
class Height;
class XCoord;
class YCoord;
class Repetition;
class Int;
typedef union
{
  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Cell* cell_;
  ListCellData* listcelldata_;
  CellData* celldata_;
  CBLOCK* cblock_;
  PAD* pad_;
  PROPERTY* property_;
  XYRELATIVE* xyrelative_;
  XYABSOLUTE* xyabsolute_;
  Element* element_;
  PLACEMENT* placement_;
  TEXT* text_;
  XELEMENT* xelement_;
  Geometry* geometry_;
  POLYGON* polygon_;
  PATH* path_;
  TRAPEZOID* trapezoid_;
  CTRAPEZOID* ctrapezoid_;
  CIRCLE* circle_;
  XGEOMETRY* xgeometry_;
  RECTANGLE* rectangle_;
  RectangleInfoByte* rectangleinfobyte_;
  LayerData* layerdata_;
  ListLayerNumber* listlayernumber_;
  LayerNumber* layernumber_;
  ListDataTypeNumber* listdatatypenumber_;
  DataTypeNumber* datatypenumber_;
  ListWidth* listwidth_;
  ListHeight* listheight_;
  ListXCoord* listxcoord_;
  ListYCoord* listycoord_;
  ListRepetition* listrepetition_;
  Width* width_;
  Height* height_;
  XCoord* xcoord_;
  YCoord* ycoord_;
  Repetition* repetition_;
  Int* int_;
} YYSTYPE;

Cell* pCell(FILE *inp);
Cell* pCell(const char *str);
ListCellData* pListCellData(FILE *inp);
ListCellData* pListCellData(const char *str);
CellData* pCellData(FILE *inp);
CellData* pCellData(const char *str);
CBLOCK* pCBLOCK(FILE *inp);
CBLOCK* pCBLOCK(const char *str);
PAD* pPAD(FILE *inp);
PAD* pPAD(const char *str);
PROPERTY* pPROPERTY(FILE *inp);
PROPERTY* pPROPERTY(const char *str);
XYRELATIVE* pXYRELATIVE(FILE *inp);
XYRELATIVE* pXYRELATIVE(const char *str);
XYABSOLUTE* pXYABSOLUTE(FILE *inp);
XYABSOLUTE* pXYABSOLUTE(const char *str);
Element* pElement(FILE *inp);
Element* pElement(const char *str);
PLACEMENT* pPLACEMENT(FILE *inp);
PLACEMENT* pPLACEMENT(const char *str);
TEXT* pTEXT(FILE *inp);
TEXT* pTEXT(const char *str);
XELEMENT* pXELEMENT(FILE *inp);
XELEMENT* pXELEMENT(const char *str);
Geometry* pGeometry(FILE *inp);
Geometry* pGeometry(const char *str);
POLYGON* pPOLYGON(FILE *inp);
POLYGON* pPOLYGON(const char *str);
PATH* pPATH(FILE *inp);
PATH* pPATH(const char *str);
TRAPEZOID* pTRAPEZOID(FILE *inp);
TRAPEZOID* pTRAPEZOID(const char *str);
CTRAPEZOID* pCTRAPEZOID(FILE *inp);
CTRAPEZOID* pCTRAPEZOID(const char *str);
CIRCLE* pCIRCLE(FILE *inp);
CIRCLE* pCIRCLE(const char *str);
XGEOMETRY* pXGEOMETRY(FILE *inp);
XGEOMETRY* pXGEOMETRY(const char *str);
RECTANGLE* pRECTANGLE(FILE *inp);
RECTANGLE* pRECTANGLE(const char *str);
RectangleInfoByte* pRectangleInfoByte(FILE *inp);
RectangleInfoByte* pRectangleInfoByte(const char *str);
LayerData* pLayerData(FILE *inp);
LayerData* pLayerData(const char *str);
ListLayerNumber* pListLayerNumber(FILE *inp);
ListLayerNumber* pListLayerNumber(const char *str);
LayerNumber* pLayerNumber(FILE *inp);
LayerNumber* pLayerNumber(const char *str);
ListDataTypeNumber* pListDataTypeNumber(FILE *inp);
ListDataTypeNumber* pListDataTypeNumber(const char *str);
DataTypeNumber* pDataTypeNumber(FILE *inp);
DataTypeNumber* pDataTypeNumber(const char *str);
ListWidth* pListWidth(FILE *inp);
ListWidth* pListWidth(const char *str);
ListHeight* pListHeight(FILE *inp);
ListHeight* pListHeight(const char *str);
ListXCoord* pListXCoord(FILE *inp);
ListXCoord* pListXCoord(const char *str);
ListYCoord* pListYCoord(FILE *inp);
ListYCoord* pListYCoord(const char *str);
ListRepetition* pListRepetition(FILE *inp);
ListRepetition* pListRepetition(const char *str);
Width* pWidth(FILE *inp);
Width* pWidth(const char *str);
Height* pHeight(FILE *inp);
Height* pHeight(const char *str);
XCoord* pXCoord(FILE *inp);
XCoord* pXCoord(const char *str);
YCoord* pYCoord(FILE *inp);
YCoord* pYCoord(const char *str);
Repetition* pRepetition(FILE *inp);
Repetition* pRepetition(const char *str);
Int* pInt(FILE *inp);
Int* pInt(const char *str);
}

#define CHALKFRONTEND__ERROR_ 258
#define _SYMB_0 259
#define _SYMB_1 260
#define _SYMB_2 261
#define _SYMB_3 262
#define _SYMB_4 263
#define _SYMB_5 264
#define _SYMB_6 265
#define _SYMB_7 266
#define _SYMB_8 267
#define _SYMB_9 268
#define _SYMB_10 269
#define _SYMB_11 270
#define _SYMB_12 271
#define _SYMB_13 272
#define _SYMB_14 273
#define _SYMB_15 274
#define _SYMB_16 275
#define CHALKFRONTEND__INTEGER_ 276

extern CHALKFrontend::YYSTYPE CHALKFrontendyylval;

#endif
