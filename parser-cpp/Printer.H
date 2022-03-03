#ifndef CHALKFRONTEND_PRINTER_HEADER
#define CHALKFRONTEND_PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

namespace CHALKFrontend
{
/* Certain applications may improve performance by changing the buffer size */
#define CHALKFRONTEND_BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define CHALKFRONTEND__L_PAREN '('
#define CHALKFRONTEND__R_PAREN ')'

class PrintAbsyn : public Visitor
{
 protected:
  int _n_, _i_;
  /* The following are simple heuristics for rendering terminals */
  /* You may wish to change them */
  void render(Char c);
  void render(String s);
  void render(const char *s);
  void indent(void);
  void backup(void);
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char *print(Visitable *v);

  void visitCell(Cell *p); /* abstract class */
  void visitECell(ECell *p);
  void visitListCellData(ListCellData *p);
  void visitCellData(CellData *p); /* abstract class */
  void visitCellDataCBLOCK(CellDataCBLOCK *p);
  void visitCellDataPAD(CellDataPAD *p);
  void visitCellDataPROPERTY(CellDataPROPERTY *p);
  void visitCellDataXYRELATIVE(CellDataXYRELATIVE *p);
  void visitCellDataXYABSOLUTE(CellDataXYABSOLUTE *p);
  void visitCellDataElement(CellDataElement *p);
  void visitCBLOCK(CBLOCK *p); /* abstract class */
  void visitECBLOCK(ECBLOCK *p);
  void visitPAD(PAD *p); /* abstract class */
  void visitEPAD(EPAD *p);
  void visitPROPERTY(PROPERTY *p); /* abstract class */
  void visitEPROPERTY(EPROPERTY *p);
  void visitXYRELATIVE(XYRELATIVE *p); /* abstract class */
  void visitEXYRELATIVE(EXYRELATIVE *p);
  void visitXYABSOLUTE(XYABSOLUTE *p); /* abstract class */
  void visitEXYABSOLUTE(EXYABSOLUTE *p);
  void visitElement(Element *p); /* abstract class */
  void visitElementGeometry(ElementGeometry *p);
  void visitElementPLACEMENT(ElementPLACEMENT *p);
  void visitElementTEXT(ElementTEXT *p);
  void visitElementXELEMENT(ElementXELEMENT *p);
  void visitPLACEMENT(PLACEMENT *p); /* abstract class */
  void visitEPLACEMENT(EPLACEMENT *p);
  void visitTEXT(TEXT *p); /* abstract class */
  void visitETEXT(ETEXT *p);
  void visitXELEMENT(XELEMENT *p); /* abstract class */
  void visitEXELEMENT(EXELEMENT *p);
  void visitGeometry(Geometry *p); /* abstract class */
  void visitGeometryRECTANGLE(GeometryRECTANGLE *p);
  void visitGeometryPOLYGON(GeometryPOLYGON *p);
  void visitGeometryPATH(GeometryPATH *p);
  void visitGeometryTRAPEZOID(GeometryTRAPEZOID *p);
  void visitGeometryCTRAPEZOID(GeometryCTRAPEZOID *p);
  void visitGeometryCIRCLE(GeometryCIRCLE *p);
  void visitGeometryXGEOMETRY(GeometryXGEOMETRY *p);
  void visitPOLYGON(POLYGON *p); /* abstract class */
  void visitEPOLYGON(EPOLYGON *p);
  void visitPATH(PATH *p); /* abstract class */
  void visitEPATH(EPATH *p);
  void visitTRAPEZOID(TRAPEZOID *p); /* abstract class */
  void visitETRAPEZOID(ETRAPEZOID *p);
  void visitCTRAPEZOID(CTRAPEZOID *p); /* abstract class */
  void visitECTRAPEZOID(ECTRAPEZOID *p);
  void visitCIRCLE(CIRCLE *p); /* abstract class */
  void visitECIRCLE(ECIRCLE *p);
  void visitXGEOMETRY(XGEOMETRY *p); /* abstract class */
  void visitEXGEOMETRY(EXGEOMETRY *p);
  void visitRECTANGLE(RECTANGLE *p); /* abstract class */
  void visitERECTANGLE(ERECTANGLE *p);
  void visitRectangleInfoByte(RectangleInfoByte *p); /* abstract class */
  void visitERectangleInfoByte(ERectangleInfoByte *p);
  void visitLayerData(LayerData *p); /* abstract class */
  void visitELayerData(ELayerData *p);
  void visitListLayerNumber(ListLayerNumber *p);
  void visitLayerNumber(LayerNumber *p); /* abstract class */
  void visitELayerNumber(ELayerNumber *p);
  void visitListDataTypeNumber(ListDataTypeNumber *p);
  void visitDataTypeNumber(DataTypeNumber *p); /* abstract class */
  void visitEDataTypeNumber(EDataTypeNumber *p);
  void visitListWidth(ListWidth *p);
  void visitListHeight(ListHeight *p);
  void visitListXCoord(ListXCoord *p);
  void visitListYCoord(ListYCoord *p);
  void visitListRepetition(ListRepetition *p);
  void visitWidth(Width *p); /* abstract class */
  void visitEWidth(EWidth *p);
  void visitHeight(Height *p); /* abstract class */
  void visitEHeight(EHeight *p);
  void visitXCoord(XCoord *p); /* abstract class */
  void visitEXCoord(EXCoord *p);
  void visitYCoord(YCoord *p); /* abstract class */
  void visitEYCoord(EYCoord *p);
  void visitRepetition(Repetition *p); /* abstract class */
  void visitERepetition(ERepetition *p);
  void visitInt(Int *p); /* abstract class */
  void visitEInt(EInt *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = CHALKFRONTEND_BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};



class ShowAbsyn : public Visitor
{
 public:
  ShowAbsyn(void);
  ~ShowAbsyn(void);
  char *show(Visitable *v);

  void visitCell(Cell *p); /* abstract class */
  void visitECell(ECell *p);
  void visitListCellData(ListCellData *p);
  void visitCellData(CellData *p); /* abstract class */
  void visitCellDataCBLOCK(CellDataCBLOCK *p);
  void visitCellDataPAD(CellDataPAD *p);
  void visitCellDataPROPERTY(CellDataPROPERTY *p);
  void visitCellDataXYRELATIVE(CellDataXYRELATIVE *p);
  void visitCellDataXYABSOLUTE(CellDataXYABSOLUTE *p);
  void visitCellDataElement(CellDataElement *p);
  void visitCBLOCK(CBLOCK *p); /* abstract class */
  void visitECBLOCK(ECBLOCK *p);
  void visitPAD(PAD *p); /* abstract class */
  void visitEPAD(EPAD *p);
  void visitPROPERTY(PROPERTY *p); /* abstract class */
  void visitEPROPERTY(EPROPERTY *p);
  void visitXYRELATIVE(XYRELATIVE *p); /* abstract class */
  void visitEXYRELATIVE(EXYRELATIVE *p);
  void visitXYABSOLUTE(XYABSOLUTE *p); /* abstract class */
  void visitEXYABSOLUTE(EXYABSOLUTE *p);
  void visitElement(Element *p); /* abstract class */
  void visitElementGeometry(ElementGeometry *p);
  void visitElementPLACEMENT(ElementPLACEMENT *p);
  void visitElementTEXT(ElementTEXT *p);
  void visitElementXELEMENT(ElementXELEMENT *p);
  void visitPLACEMENT(PLACEMENT *p); /* abstract class */
  void visitEPLACEMENT(EPLACEMENT *p);
  void visitTEXT(TEXT *p); /* abstract class */
  void visitETEXT(ETEXT *p);
  void visitXELEMENT(XELEMENT *p); /* abstract class */
  void visitEXELEMENT(EXELEMENT *p);
  void visitGeometry(Geometry *p); /* abstract class */
  void visitGeometryRECTANGLE(GeometryRECTANGLE *p);
  void visitGeometryPOLYGON(GeometryPOLYGON *p);
  void visitGeometryPATH(GeometryPATH *p);
  void visitGeometryTRAPEZOID(GeometryTRAPEZOID *p);
  void visitGeometryCTRAPEZOID(GeometryCTRAPEZOID *p);
  void visitGeometryCIRCLE(GeometryCIRCLE *p);
  void visitGeometryXGEOMETRY(GeometryXGEOMETRY *p);
  void visitPOLYGON(POLYGON *p); /* abstract class */
  void visitEPOLYGON(EPOLYGON *p);
  void visitPATH(PATH *p); /* abstract class */
  void visitEPATH(EPATH *p);
  void visitTRAPEZOID(TRAPEZOID *p); /* abstract class */
  void visitETRAPEZOID(ETRAPEZOID *p);
  void visitCTRAPEZOID(CTRAPEZOID *p); /* abstract class */
  void visitECTRAPEZOID(ECTRAPEZOID *p);
  void visitCIRCLE(CIRCLE *p); /* abstract class */
  void visitECIRCLE(ECIRCLE *p);
  void visitXGEOMETRY(XGEOMETRY *p); /* abstract class */
  void visitEXGEOMETRY(EXGEOMETRY *p);
  void visitRECTANGLE(RECTANGLE *p); /* abstract class */
  void visitERECTANGLE(ERECTANGLE *p);
  void visitRectangleInfoByte(RectangleInfoByte *p); /* abstract class */
  void visitERectangleInfoByte(ERectangleInfoByte *p);
  void visitLayerData(LayerData *p); /* abstract class */
  void visitELayerData(ELayerData *p);
  void visitListLayerNumber(ListLayerNumber *p);
  void visitLayerNumber(LayerNumber *p); /* abstract class */
  void visitELayerNumber(ELayerNumber *p);
  void visitListDataTypeNumber(ListDataTypeNumber *p);
  void visitDataTypeNumber(DataTypeNumber *p); /* abstract class */
  void visitEDataTypeNumber(EDataTypeNumber *p);
  void visitListWidth(ListWidth *p);
  void visitListHeight(ListHeight *p);
  void visitListXCoord(ListXCoord *p);
  void visitListYCoord(ListYCoord *p);
  void visitListRepetition(ListRepetition *p);
  void visitWidth(Width *p); /* abstract class */
  void visitEWidth(EWidth *p);
  void visitHeight(Height *p); /* abstract class */
  void visitEHeight(EHeight *p);
  void visitXCoord(XCoord *p); /* abstract class */
  void visitEXCoord(EXCoord *p);
  void visitYCoord(YCoord *p); /* abstract class */
  void visitEYCoord(EYCoord *p);
  void visitRepetition(Repetition *p); /* abstract class */
  void visitERepetition(ERepetition *p);
  void visitInt(Int *p); /* abstract class */
  void visitEInt(EInt *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = CHALKFRONTEND_BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};


}

#endif

