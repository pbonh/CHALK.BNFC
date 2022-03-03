#ifndef CHALKFRONTEND_SKELETON_HEADER
#define CHALKFRONTEND_SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"

namespace CHALKFrontend
{
class Skeleton : public Visitor
{
public:
  void visitCell(Cell *p);
  void visitCellData(CellData *p);
  void visitCBLOCK(CBLOCK *p);
  void visitPAD(PAD *p);
  void visitPROPERTY(PROPERTY *p);
  void visitXYRELATIVE(XYRELATIVE *p);
  void visitXYABSOLUTE(XYABSOLUTE *p);
  void visitElement(Element *p);
  void visitPLACEMENT(PLACEMENT *p);
  void visitTEXT(TEXT *p);
  void visitXELEMENT(XELEMENT *p);
  void visitGeometry(Geometry *p);
  void visitPOLYGON(POLYGON *p);
  void visitPATH(PATH *p);
  void visitTRAPEZOID(TRAPEZOID *p);
  void visitCTRAPEZOID(CTRAPEZOID *p);
  void visitCIRCLE(CIRCLE *p);
  void visitXGEOMETRY(XGEOMETRY *p);
  void visitRECTANGLE(RECTANGLE *p);
  void visitRectangleInfoByte(RectangleInfoByte *p);
  void visitLayerData(LayerData *p);
  void visitLayerNumber(LayerNumber *p);
  void visitDataTypeNumber(DataTypeNumber *p);
  void visitWidth(Width *p);
  void visitHeight(Height *p);
  void visitXCoord(XCoord *p);
  void visitYCoord(YCoord *p);
  void visitRepetition(Repetition *p);
  void visitInt(Int *p);
  void visitECell(ECell *p);
  void visitCellDataCBLOCK(CellDataCBLOCK *p);
  void visitCellDataPAD(CellDataPAD *p);
  void visitCellDataPROPERTY(CellDataPROPERTY *p);
  void visitCellDataXYRELATIVE(CellDataXYRELATIVE *p);
  void visitCellDataXYABSOLUTE(CellDataXYABSOLUTE *p);
  void visitCellDataElement(CellDataElement *p);
  void visitECBLOCK(ECBLOCK *p);
  void visitEPAD(EPAD *p);
  void visitEPROPERTY(EPROPERTY *p);
  void visitEXYRELATIVE(EXYRELATIVE *p);
  void visitEXYABSOLUTE(EXYABSOLUTE *p);
  void visitElementGeometry(ElementGeometry *p);
  void visitElementPLACEMENT(ElementPLACEMENT *p);
  void visitElementTEXT(ElementTEXT *p);
  void visitElementXELEMENT(ElementXELEMENT *p);
  void visitEPLACEMENT(EPLACEMENT *p);
  void visitETEXT(ETEXT *p);
  void visitEXELEMENT(EXELEMENT *p);
  void visitGeometryRECTANGLE(GeometryRECTANGLE *p);
  void visitGeometryPOLYGON(GeometryPOLYGON *p);
  void visitGeometryPATH(GeometryPATH *p);
  void visitGeometryTRAPEZOID(GeometryTRAPEZOID *p);
  void visitGeometryCTRAPEZOID(GeometryCTRAPEZOID *p);
  void visitGeometryCIRCLE(GeometryCIRCLE *p);
  void visitGeometryXGEOMETRY(GeometryXGEOMETRY *p);
  void visitEPOLYGON(EPOLYGON *p);
  void visitEPATH(EPATH *p);
  void visitETRAPEZOID(ETRAPEZOID *p);
  void visitECTRAPEZOID(ECTRAPEZOID *p);
  void visitECIRCLE(ECIRCLE *p);
  void visitEXGEOMETRY(EXGEOMETRY *p);
  void visitERECTANGLE(ERECTANGLE *p);
  void visitERectangleInfoByte(ERectangleInfoByte *p);
  void visitELayerData(ELayerData *p);
  void visitELayerNumber(ELayerNumber *p);
  void visitEDataTypeNumber(EDataTypeNumber *p);
  void visitEWidth(EWidth *p);
  void visitEHeight(EHeight *p);
  void visitEXCoord(EXCoord *p);
  void visitEYCoord(EYCoord *p);
  void visitERepetition(ERepetition *p);
  void visitEInt(EInt *p);
  void visitListCellData(ListCellData *p);
  void visitListLayerNumber(ListLayerNumber *p);
  void visitListDataTypeNumber(ListDataTypeNumber *p);
  void visitListWidth(ListWidth *p);
  void visitListHeight(ListHeight *p);
  void visitListXCoord(ListXCoord *p);
  void visitListYCoord(ListYCoord *p);
  void visitListRepetition(ListRepetition *p);

  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);

};
}

#endif
