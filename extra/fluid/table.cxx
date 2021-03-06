// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "table.h"

Fl_Double_Window* make_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(1325, 785, "Table");
    w = o;
    { Fl_Box* o = new Fl_Box(0, 0, 1325, 785);
      o->box(FL_GLEAM_THIN_UP_BOX);
      o->color((Fl_Color)58);
    } // Fl_Box* o
    { Fl_Button* o = new Fl_Button(19, 23, 100, 55, "Leave Game");
      o->box(FL_GLEAM_THIN_UP_BOX);
      o->color((Fl_Color)138);
      o->labelfont(1);
      o->labelsize(18);
      o->labelcolor((Fl_Color)26);
      o->align(Fl_Align(FL_ALIGN_WRAP));
    } // Fl_Button* o
    { Fl_Group* o = new Fl_Group(135, 20, 855, 121);
      o->box(FL_GLEAM_THIN_UP_BOX);
      o->color((Fl_Color)36);
      { Fl_Output* o = new Fl_Output(153, 40, 320, 35);
        o->box(FL_NO_BOX);
        o->textfont(1);
        o->textsize(24);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(277, 74, 127, 35, "Dealer ID      ");
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(278, 103, 127, 22, "Game ID       ");
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(599, 74, 106, 31, "Shoe size     ");
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(600, 101, 110, 21, "Min-Max bet ");
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(834, 79, 127, 36, "Count ");
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(20);
        o->labelcolor((Fl_Color)26);
        o->textsize(20);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(1013, 20, 282, 349);
      o->box(FL_GLEAM_THIN_UP_BOX);
      o->color((Fl_Color)36);
      { Fl_Output* o = new Fl_Output(1228, 39, 55, 50, "Other Players  ");
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(24);
        o->labelcolor((Fl_Color)26);
        o->textfont(1);
        o->textsize(24);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(1030, 92, 252, 35);
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(1031, 117, 252, 35);
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(1031, 140, 252, 35);
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(1031, 165, 252, 35);
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(1031, 190, 252, 35);
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(1032, 216, 252, 35);
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(25, 672, 1275, 99);
      o->box(FL_GLEAM_THIN_UP_BOX);
      o->color((Fl_Color)36);
      { Fl_Button* o = new Fl_Button(1025, 698, 105, 51, "Double Down");
        o->box(FL_GLEAM_THIN_UP_BOX);
        o->color((Fl_Color)138);
        o->labelfont(1);
        o->labelsize(18);
        o->labelcolor((Fl_Color)26);
        o->align(Fl_Align(FL_ALIGN_WRAP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(1150, 698, 105, 51, "Split");
        o->box(FL_GLEAM_THIN_UP_BOX);
        o->color((Fl_Color)138);
        o->labelfont(1);
        o->labelsize(18);
        o->labelcolor((Fl_Color)26);
        o->align(Fl_Align(FL_ALIGN_WRAP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(900, 698, 105, 51, "Stand");
        o->box(FL_GLEAM_THIN_UP_BOX);
        o->color((Fl_Color)138);
        o->labelfont(1);
        o->labelsize(18);
        o->labelcolor((Fl_Color)26);
        o->align(Fl_Align(FL_ALIGN_WRAP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(774, 698, 105, 51, "Hit");
        o->box(FL_GLEAM_THIN_UP_BOX);
        o->color((Fl_Color)138);
        o->labelfont(1);
        o->labelsize(18);
        o->labelcolor((Fl_Color)26);
        o->align(Fl_Align(FL_ALIGN_WRAP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(188, 698, 105, 51, "Bet");
        o->box(FL_GLEAM_THIN_UP_BOX);
        o->color((Fl_Color)138);
        o->labelfont(1);
        o->labelsize(18);
        o->labelcolor((Fl_Color)26);
        o->align(Fl_Align(FL_ALIGN_WRAP));
      } // Fl_Button* o
      { Fl_Output* o = new Fl_Output(467, 705, 109, 35, "Balance ");
        o->box(FL_GTK_ROUND_UP_BOX);
        o->labelfont(1);
        o->labelsize(24);
        o->labelcolor((Fl_Color)26);
        o->textsize(24);
        o->textcolor(FL_GRAY0);
      } // Fl_Output* o
      { Fl_Spinner* o = new Fl_Spinner(62, 700, 105, 45);
        o->labelfont(1);
        o->textfont(1);
        o->textsize(24);
      } // Fl_Spinner* o
      { Fl_Output* o = new Fl_Output(701, 703, 45, 40);
        o->box(FL_GTK_UP_BOX);
        o->labelfont(1);
        o->labelsize(24);
        o->labelcolor((Fl_Color)26);
        o->textsize(24);
        o->textcolor(FL_GRAY0);
      } // Fl_Output* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(1015, 513, 275, 144);
      o->box(FL_GLEAM_THIN_UP_BOX);
      o->color((Fl_Color)36);
      { Fl_Output* o = new Fl_Output(1059, 536, 177, 40);
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(24);
        o->labelcolor((Fl_Color)26);
        o->textfont(1);
        o->textsize(24);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(1151, 575, 120, 35, "Count           ");
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      { Fl_Output* o = new Fl_Output(1151, 597, 120, 35, "Suggestion   ");
        o->box(FL_NO_BOX);
        o->labelfont(1);
        o->labelsize(16);
        o->labelcolor((Fl_Color)26);
        o->textsize(16);
        o->textcolor((Fl_Color)26);
      } // Fl_Output* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(42, 150, 768, 196);
      { Fl_Box* o = new Fl_Box(65, 175, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(136, 175, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(207, 176, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(278, 177, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(350, 178, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(421, 178, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(493, 179, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(565, 180, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(637, 181, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(709, 181, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(42, 522, 758, 145);
      { Fl_Box* o = new Fl_Box(65, 547, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(136, 547, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(207, 548, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(278, 549, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(350, 550, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(421, 550, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(493, 551, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(565, 552, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(637, 553, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(709, 553, 65, 85);
        o->box(FL_GTK_UP_BOX);
        o->color((Fl_Color)18);
      } // Fl_Box* o
      o->end();
    } // Fl_Group* o
    { Fl_Box* o = new Fl_Box(424, 328, 125, 120);
      o->box(FL_GTK_ROUND_UP_BOX);
      o->color((Fl_Color)4);
    } // Fl_Box* o
    { Fl_Output* o = new Fl_Output(448, 360, 75, 54);
      o->box(FL_NO_BOX);
      o->textfont(1);
      o->textsize(34);
      o->textcolor((Fl_Color)26);
    } // Fl_Output* o
    o->end();
  } // Fl_Double_Window* o
  return w;
}
