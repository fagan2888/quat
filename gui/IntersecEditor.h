// generated by Fast Light User Interface Designer (fluid) version 1.0100

#ifndef IntersecEditor_h
#define IntersecEditor_h
#include <FL/Fl.H>
class ChildWindow;
#include "structs.h"
#include <FL/Fl_Scrollbar.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Value_Output.H>

class IntersecEditor : public Fl_Group {
public:
  IntersecEditor(int X, int Y, int W, int H, const char *label) ;
  ChildWindow *win;
  Fl_Scrollbar *scroll;
private:
  inline void cb_scroll_i(Fl_Scrollbar*, void*);
  static void cb_scroll(Fl_Scrollbar*, void*);
public:
  Fl_Group *qspacebox;
  Fl_Group *n;
  Fl_Value_Input *nre;
private:
  inline void cb_nre_i(Fl_Value_Input*, void*);
  static void cb_nre(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *ni;
private:
  inline void cb_ni_i(Fl_Value_Input*, void*);
  static void cb_ni(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *nj;
private:
  inline void cb_nj_i(Fl_Value_Input*, void*);
  static void cb_nj(Fl_Value_Input*, void*);
public:
  Fl_Group *p;
  Fl_Value_Input *pre;
private:
  inline void cb_pre_i(Fl_Value_Input*, void*);
  static void cb_pre(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *pi;
private:
  inline void cb_pi_i(Fl_Value_Input*, void*);
  static void cb_pi(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *pj;
private:
  inline void cb_pj_i(Fl_Value_Input*, void*);
  static void cb_pj(Fl_Value_Input*, void*);
public:
  Fl_Button *add;
private:
  inline void cb_add_i(Fl_Button*, void*);
  static void cb_add(Fl_Button*, void*);
public:
  Fl_Button *del;
private:
  inline void cb_del_i(Fl_Button*, void*);
  static void cb_del(Fl_Button*, void*);
public:
  Fl_Box *note;
  Fl_Value_Output *planeno;
private:
  cutbuf_cpp cutbuf;
public:
  void set(const cutbuf_cpp& buf);
  void get(cutbuf_cpp& buf);
  void setno(int no);
  void checkValidity();
private:
  int num, idx;
public:
  void deactiv();
private:
  bool _disabled;
};
#endif