/*** BNFC-Generated Pretty Printer and Abstract Syntax Viewer ***/

#include <string>
#include "Printer.H"
#define INDENT_WIDTH 2

namespace CHALKFrontend
{
//You may wish to change render
void PrintAbsyn::render(Char c)
{
  if (c == '{')
  {
     bufAppend('\n');
     indent();
     bufAppend(c);
     _n_ = _n_ + INDENT_WIDTH;
     bufAppend('\n');
     indent();
  }
  else if (c == '(' || c == '[')
     bufAppend(c);
  else if (c == ')' || c == ']')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == '}')
  {
     int t;
     _n_ = _n_ - INDENT_WIDTH;
     for (t=0; t<INDENT_WIDTH; t++) {
       backup();
     }
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == ',')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == ';')
  {
     backup();
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == ' ') bufAppend(c);
  else if (c == 0) return;
  else
  {
     bufAppend(c);
     bufAppend(' ');
  }
}

void PrintAbsyn::render(String s)
{
  render(s.c_str());
}

bool allIsSpace(const char *s)
{
  char c;
  while ((c = *s++))
    if (! isspace(c)) return false;
  return true;
}

void PrintAbsyn::render(const char *s)
{
  if (*s) /* C string not empty */
  {
    if (allIsSpace(s)) {
      backup();
      bufAppend(s);
    } else {
      bufAppend(s);
      bufAppend(' ');
    }
  }
}

void PrintAbsyn::indent()
{
  int n = _n_;
  while (--n >= 0)
    bufAppend(' ');
}

void PrintAbsyn::backup()
{
  if (buf_[cur_ - 1] == ' ')
    buf_[--cur_] = 0;
}

PrintAbsyn::PrintAbsyn(void)
{
  _i_ = 0; _n_ = 0;
  buf_ = 0;
  bufReset();
}

PrintAbsyn::~PrintAbsyn(void)
{
}

char *PrintAbsyn::print(Visitable *v)
{
  _i_ = 0; _n_ = 0;
  bufReset();
  v->accept(this);
  return buf_;
}

void PrintAbsyn::visitCell(Cell *p) {} //abstract class

void PrintAbsyn::visitECell(ECell *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("CELL");
  if(p->listcelldata_) {_i_ = 0; p->listcelldata_->accept(this);}

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListCellData(ListCellData *listcelldata)
{
  for (ListCellData::const_iterator i = listcelldata->begin() ; i != listcelldata->end() ; ++i)
  {
    (*i)->accept(this);
    render("");
  }
}void PrintAbsyn::visitCellData(CellData *p) {} //abstract class

void PrintAbsyn::visitCellDataCBLOCK(CellDataCBLOCK *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->cblock_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCellDataPAD(CellDataPAD *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->pad_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCellDataPROPERTY(CellDataPROPERTY *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->property_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCellDataXYRELATIVE(CellDataXYRELATIVE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->xyrelative_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCellDataXYABSOLUTE(CellDataXYABSOLUTE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->xyabsolute_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCellDataElement(CellDataElement *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->element_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCBLOCK(CBLOCK *p) {} //abstract class

void PrintAbsyn::visitECBLOCK(ECBLOCK *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("CBLOCK");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPAD(PAD *p) {} //abstract class

void PrintAbsyn::visitEPAD(EPAD *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("PAD");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPROPERTY(PROPERTY *p) {} //abstract class

void PrintAbsyn::visitEPROPERTY(EPROPERTY *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("PROPERTY");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitXYRELATIVE(XYRELATIVE *p) {} //abstract class

void PrintAbsyn::visitEXYRELATIVE(EXYRELATIVE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("XYRELATIVE");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitXYABSOLUTE(XYABSOLUTE *p) {} //abstract class

void PrintAbsyn::visitEXYABSOLUTE(EXYABSOLUTE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("XYABSOLUTE");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitElement(Element *p) {} //abstract class

void PrintAbsyn::visitElementGeometry(ElementGeometry *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->geometry_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitElementPLACEMENT(ElementPLACEMENT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->placement_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitElementTEXT(ElementTEXT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->text_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitElementXELEMENT(ElementXELEMENT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->xelement_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPLACEMENT(PLACEMENT *p) {} //abstract class

void PrintAbsyn::visitEPLACEMENT(EPLACEMENT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("PLACEMENT");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTEXT(TEXT *p) {} //abstract class

void PrintAbsyn::visitETEXT(ETEXT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("TEXT");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitXELEMENT(XELEMENT *p) {} //abstract class

void PrintAbsyn::visitEXELEMENT(EXELEMENT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("XELEMENT");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGeometry(Geometry *p) {} //abstract class

void PrintAbsyn::visitGeometryRECTANGLE(GeometryRECTANGLE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->rectangle_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGeometryPOLYGON(GeometryPOLYGON *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->polygon_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGeometryPATH(GeometryPATH *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->path_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGeometryTRAPEZOID(GeometryTRAPEZOID *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->trapezoid_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGeometryCTRAPEZOID(GeometryCTRAPEZOID *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->ctrapezoid_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGeometryCIRCLE(GeometryCIRCLE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->circle_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGeometryXGEOMETRY(GeometryXGEOMETRY *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  _i_ = 0; p->xgeometry_->accept(this);

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPOLYGON(POLYGON *p) {} //abstract class

void PrintAbsyn::visitEPOLYGON(EPOLYGON *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("POLYGON");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPATH(PATH *p) {} //abstract class

void PrintAbsyn::visitEPATH(EPATH *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("PATH");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTRAPEZOID(TRAPEZOID *p) {} //abstract class

void PrintAbsyn::visitETRAPEZOID(ETRAPEZOID *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("TRAPEZOID");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCTRAPEZOID(CTRAPEZOID *p) {} //abstract class

void PrintAbsyn::visitECTRAPEZOID(ECTRAPEZOID *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("CTRAPEZOID");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCIRCLE(CIRCLE *p) {} //abstract class

void PrintAbsyn::visitECIRCLE(ECIRCLE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("CIRCLE");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitXGEOMETRY(XGEOMETRY *p) {} //abstract class

void PrintAbsyn::visitEXGEOMETRY(EXGEOMETRY *p)
{
  int oldi = _i_;
  if (oldi > 0) render(CHALKFRONTEND__L_PAREN);

  render("XGEOMETRY");

  if (oldi > 0) render(CHALKFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRECTANGLE(RECTANGLE *