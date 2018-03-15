#include "lobby_controller.h"
#include "login_controller.h"
//#include "table_view.h"


Lobby_controller::Lobby_controller() : Lobby_view() {
  logout_btn->callback(ClickedLogout, this);
  refresh_btn->callback(ClickedRefresh, (void*)this);
}

void Lobby_controller::ClickedLogout(Fl_Widget* w, void* data)
{
  ((Lobby_controller*)data)->ClickedLogout_i();
}

void Lobby_controller::ClickedRefresh(Fl_Widget* w, void* data)
{
  ((Lobby_controller*)data)->ClickedRefresh_i();
}


void Lobby_controller::ClickedRefresh_i()
{
  hide();
}

void Lobby_controller::ClickedLogout_i()
{
  //char* s = name_input->value();
  hide();
  Login_controller win;
  Fl::run();
}