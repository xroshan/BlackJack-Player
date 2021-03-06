#include "login_controller.h"
#include "lobby_controller.h"


#include <string>

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>


Login_controller::Login_controller(player& p) : Login_view(), _p{p} {
  login_btn->callback(ClickedLogin, this);
  quit_btn->callback(ClickedQuit, (void*)this);
}

void Login_controller::ClickedLogin(Fl_Widget* w, void* data)
{
  ((Login_controller*)data)->ClickedLogin_i();
}

void Login_controller::ClickedQuit(Fl_Widget* w, void* data)
{
  ((Login_controller*)data)->ClickedQuit_i();
}


void Login_controller::ClickedQuit_i()
{
  hide();
}

void Login_controller::ClickedLogin_i()
{
  std::string s = name_input->value();
  if (s.size() <= 32)               //tests if the size of input is less 32
  {
    if (s == "")
    {
      s = "Player1";
    }
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    _p.setName(s);
    _p.setUID(boost::uuids::to_string(uuid));
    memcpy ( _p.m_P.uid, &uuid, sizeof ( _p.m_P.uid ) );    //set the uid of player
    _p.m_my_uid = uuid;
    hide();         //hides the login window and opens up lobby window
   Lobby_controller win(_p);
    Fl::run();
  }

}
