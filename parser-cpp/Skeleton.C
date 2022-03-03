/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"


namespace CHALKFrontend
{
void Skeleton::visitCell(Cell *t) {} //abstract class
void Skeleton::visitCellData(CellData *t) {} //abstract class
void Skeleton::visitCBLOCK(CBLOCK *t) {} //abstract class
void Skeleton::visitPAD(PAD *t) {} //abstract class
void Skeleton::visitPROPERTY(PROPERTY *t) {} //abstract class
void Skeleton::visitXYRELATIVE(XYRELATIVE *t) {} //abstract class
void Skeleton::visitXYABSOLUTE(XYABSOLUTE *t) {} //abstract class
void Skeleton::visitElement(Element *t) {} //abstract class
void Skeleton::visitPLACEMENT(PLACEMENT *t) {} //abstract class
void Skeleton::visitTEXT(TEXT *t) {} //abstract class
void Skeleton::visitXELEMENT(XELEMENT *t) {} //abstract class
void Skeleton::visitGeometry(Geometry *t) {} //abstract class
void Skeleton::visitPOLYGON(POLYGON *t) {} //abstract class
void Skeleton::visitPATH(PATH *t) {} //abstract class
void Skeleton::visitTRAPEZOID(TRAPEZOID *t) {} //abstract class
void Skeleton::visitCTRAPEZOID(CTRAPEZOID *t) {} //abstract class
void Skeleton::visitCIRCLE(CIRCLE *t) {} //abstract class
void Skeleton::visitXGEOMETRY(XGEOMETRY *t) {} //abstract class
void Skeleton::visitRECTANGLE(RECTANGLE *t) {} //abstract class
void Skeleton::visitRectangleInfoByte(RectangleInfoByte *t) {} //abstract class
void Skeleton::visitLayerData(LayerData *t) {} //abstract class
void Skeleton::visitLayerNumber(LayerNumber *t) {} //abstract class
void Skeleton::visitDataTypeNumber(DataTypeNumber *t) {} //abstract class
void Skeleton::visitWidth(Width *t) {} //abstract class
void Skeleton::visitHeight(Height *t) {} //abstract class
void Skeleton::visitXCoord(XCoord *t) {} //abstract class
void Skeleton::visitYCoord(YCoord *t) {} //abstract class
void Skeleton::visitRepetition(Repetition *t) {} //abstract class
void Skeleton::visitInt(Int *t) {} //abstract class

void Skeleton::visitECell(ECell *e_cell)
{
  /* Code For ECell Goes Here */

  if (e_cell->listcelldata_) e_cell->listcelldata_->accept(this);

}

void Skeleton::visitCellDataCBLOCK(CellDataCBLOCK *cell_data_cblock)
{
  /* Code For CellDataCBLOCK Goes Here */

  if (cell_data_cblock->cblock_) cell_data_cblock->cblock_->accept(this);

}

void Skeleton::visitCellDataPAD(CellDataPAD *cell_data_pad)
{
  /* Code For CellDataPAD Goes Here */

  if (cell_data_pad->pad_) cell_data_pad->pad_->accept(this);

}

void Skeleton::visitCellDataPROPERTY(CellDataPROPERTY *cell_data_property)
{
  /* Code For CellDataPROPERTY Goes Here */

  if (cell_data_property->property_) cell_data_property->property_->accept(this);

}

void Skeleton::visitCellDataXYRELATIVE(CellDataXYRELATIVE *cell_data_xyrelative)
{
  /* Code For CellDataXYRELATIVE Goes Here */

  if (cell_data_xyrelative->xyrelative_) cell_data_xyrelative->xyrelative_->accept(this);

}

void Skeleton::visitCellDataXYABSOLUTE(CellDataXYABSOLUTE *cell_data_xyabsolute)
{
  /* Code For CellDataXYABSOLUTE Goes Here */

  if (cell_data_xyabsolute->xyabsolute_) cell_data_xyabsolute->xyabsolute_->accept(this);

}

void Skeleton::visitCellDataElement(CellDataElement *cell_data_element)
{
  /* Code For CellDataElement Goes Here */

  if (cell_data_element->element_) cell_data_element->element_->accept(this);

}

void Skeleton::visitECBLOCK(ECBLOCK *ecblock)
{
  /* Code For ECBLOCK Goes Here */


}

void Skeleton::visitEPAD(EPAD *epad)
{
  /* Code For EPAD Goes Here */


}

void Skeleton::visitEPROPERTY(EPROPERTY *eproperty)
{
  /* Code For EPROPERTY Goes Here */


}

void Skeleton::visitEXYRELATIVE(EXYRELATIVE *exyrelative)
{
  /* Code For EXYRELATIVE Goes Here */


}

void Skeleton::visitEXYABSOLUTE(EXYABSOLUTE *exyabsolute)
{
  /* Code For EXYABSOLUTE Goes Here */


}

void Skeleton::visitElementGeometry(ElementGeometry *element_geometry)
{
  /* Code For ElementGeometry Goes Here */

  if (element_geometry->geometry_) element_geometry->geometry_->accept(this);

}

void Skeleton::visitElementPLACEMENT(ElementPLACEMENT *element_placement)
{
  /* Code For ElementPLACEMENT Goes Here */

  if (element_placement->placement_) element_placement->placement_->accept(this);

}

void Skeleton::visitElementTEXT(ElementTEXT *element_text)
{
  /* Code For ElementTEXT Goes Here */

  if (element_text->text_) element_text->text_->accept(this);

}

void Skeleton::visitElementXELEMENT(ElementXELEMENT *element_xelement)
{
  /* Code For ElementXELEMENT Goes Here */

  if (element_xelement->xelement_) element_xelement->xelement_->accept(this);

}

void Skeleton::visitEPLACEMENT(EPLACEMENT *eplacement)
{
  /* Code For EPLACEMENT Goes Here */


}

void Skeleton::visitETEXT(ETEXT *etext)
{
  /* Code For ETEXT Goes Here */


}

void Skeleton::visitEXELEMENT(EXELEMENT *exelement)
{
  /* Code For EXELEMENT Goes Here */


}

void Skeleton::visitGeometryRECTANGLE(GeometryRECTANGLE *geometry_rectangle)
{
  /* Code For GeometryRECTANGLE Goes Here */

  if (geometry_rectangle->rectangle_) geometry_rectangle->rectangle_->accept(this);

}

void Skeleton::visitGeometryPOLYGON(GeometryPOLYGON *geometry_polygon)
{
  /* Code For GeometryPOLYGON Goes Here */

  if (geometry_polygon->polygon_) geometry_polygon->polygon_->accept(this);

}

void Skeleton::visitGeometryPATH(GeometryPATH *geometry_path)
{
  /* Code For GeometryPATH Goes Here */

  if (geometry_path->path_) geometry_path->path_->accept(this);

}

void Skeleton::visitGeometryTRAPEZOID(GeometryTRAPEZOID *geometry_trapezoid)
{
  /* Code For GeometryTRAPEZOID Goes Here */

  if (geometry_trapezoid->trapezoid_) geometry_trapezoid->trapezoid_->accept(this);

}

void Skeleton::visitGeometryCTRAPEZOID(GeometryCTRAPEZOID *geometry_ctrapezoid)
{
  /* Code For GeometryCTRAPEZOID Goes Here */

  if (geometry_ctrapezoid->ctrapezoid_) geometry_ctrapezoid->ctrapezoid_->accept(this);

}

void Skeleton::visitGeometryCIRCLE(GeometryCIRCLE *geometry_circle)
{
  /* Code For GeometryCIRCLE Goes Here */

  if (geometry_circle->circle_) geometry_circle->circle_->accept(this);

}

void Skeleton::visitGeometryXGEOMETRY(GeometryXGEOMETRY *geometry_xgeometry)
{
  /* Code For GeometryXGEOMETRY Goes Here */

  if (geometry_xgeometry->xgeometry_) geometry_xgeometry->xgeometry_->accept(this);

}

void Skeleton::visitEPOLYGON(EPOLYGON *epolygon)
{
  /* Code For EPOLYGON Goes Here */


}

void Skeleton::visitEPATH(EPATH *epath)
{
  /* Code For EPATH Goes Here */


}

void Skeleton::visitETRAPEZOID(ETRAPEZOID *etrapezoid)
{
  /* Code For ETRAPEZOID Goes Here */


}

void Skeleton::visitECTRAPEZOID(ECTRAPEZOID *ectrapezoid)
{
  /* Code For ECTRAPEZOID Goes Here */


}

void Skeleton::visitECIRCLE(ECIRCLE *ecircle)
{
  /* Code For ECIRCLE Goes Here */


}

void Skeleton::visitEXGEOMETRY(EXGEOMETRY *exgeometry)
{
  /* Code For EXGEOMETRY Goes Here */


}

void Skeleton::visitERECTANGLE(ERECTANGLE *erectangle)
{
  /* Code For ERECTANGLE Goes Here */

  if (erectangle->rectangleinfobyte_) erectangle->rectangleinfobyte_->accept(this);
  if (erectangle->layerdata_) erectangle->layerdata_->accept(this);
  if (erectangle->listwidth_) erectangle->listwidth_->accept(this);
  if (erectangle->listheight_) erectangle->listheight_->accept(this);
  if (erectangle->listxcoord_) erectangle->listxcoord_->accept(this);
  if (erectangle->listycoord_) erectangle->listycoord_->accept(this);
  if (erectangle->listrepetition_) erectangle->listrepetition_->accept(this);

}

void Skeleton::visitERectangleInfoByte(ERectangleInfoByte *e_rectangle_info_byte)
{
  /* Code For ERectangleInfoByte Goes Here */

  if (e_rectangle_info_byte->int_) e_rectangle_info_byte->int_->accept(this);

}

void Skeleton::visitELayerData(ELayerData *e_layer_data)
{
  /* Code For ELayerData Goes Here */

  if (e_layer_data->layernumber_) e_layer_data->layernumber_->accept(this);
  if (e_layer_data->datatypenumber_) e_layer_data->datatypenumber_->accept(this);

}

void Skeleton::visitELayerNumber(ELayerNumber *e_layer_number)
{
  /* Code For ELayerNumber Goes Here */

  if (e_layer_number->int_) e_layer_number->int_->accept(this);

}

void Skeleton::visitEDataTypeNumber(EDataTypeNumber *e_data_type_number)
{
  /* Code For EDataTypeNumber Goes Here */

  if (e_data_type_number->int_) e_data_type_number->int_->accept(this);

}

void Skeleton::visitEWidth(EWidth *e_width)
{
  /* Code For EWidth Goes Here */

  if (e_width->int_) e_width->int_->accept(this);

}

void Skeleton::visitEHeight(EHeight *e_height)
{
  /* Code For EHeight Goes Here */

  if (e_height->int_) e_height->int_->accept(this);

}

void Skeleton::visitEXCoord(EXCoord *ex_coord)
{
  /* Code For EXCoord Goes Here */

  if (ex_coord->int_) ex_coord->int_->accept(this);

}

void Skeleton::visitEYCoord(EYCoord *ey_coord)
{
  /* Code For EYCoord Goes Here */

  if (ey_coord->int_) ey_coord->int_->accept(this);

}

void Skeleton::visitERepetition(ERepetition *e_repetition)
{
  /* Code For ERepetition Goes Here */


}

void Skeleton::visitEInt(EInt *e_int)
{
  /* Code For EInt Goes Here */

  visitInteger(e_int->integer_);

}


void Skeleton::visitListCellData(ListCellData *list_cell_data)
{
  for (ListCellData::iterator i = list_cell_data->begin() ; i != list_cell_data->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListLayerNumber(ListLayerNumber *list_layer_number)
{
  for (ListLayerNumber::iterator i = list_layer_number->begin() ; i != list_layer_number->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListDataTypeNumber(ListDataTypeNumber *list_data_type_number)
{
  for (ListDataTypeNumber::iterator i = list_data_type_number->begin() ; i != list_data_type_number->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListWidth(ListWidth *list_width)
{
  for (ListWidth::iterator i = list_width->begin() ; i != list_width->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListHeight(ListHeight *list_height)
{
  for (ListHeight::iterator i = list_height->begin() ; i != list_height->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListXCoord(ListXCoord *list_x_coord)
{
  for (ListXCoord::iterator i = list_x_coord->begin() ; i != list_x_coord->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListYCoord(ListYCoord *list_y_coord)
{
  for (ListYCoord::iterator i = list_y_coord->begin() ; i != list_y_coord->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListRepetition(ListRepetition *list_repetition)
{
  for (ListRepetition::iterator i = list_repetition->begin() ; i != list_repetition->end() ; ++i)
  {
    (*i)->accept(this);
  }
}


void Skeleton::visitInteger(Integer x)
{
  /* Code for Integer Goes Here */
}

void Skeleton::visitChar(Char x)
{
  /* Code for Char Goes Here */
}

void Skeleton::visitDouble(Double x)
{
  /* Code for Double Goes Here */
}

void Skeleton::visitString(String x)
{
  /* Code for String Goes Here */
}

void Skeleton::visitIdent(Ident x)
{
  /* Code for Ident Goes Here */
}


}
