#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() {
  string checkrobot, username, username2, password, password2, yesno;
  srand((unsigned) time(0));
  int randomNumber;
  for (int index = 0; index < 1; index++) {
    randomNumber = (rand() % 10) + 1;
  }
  cout << "Please create a username: ";
  getline(cin, username);
  cout << "You can change your username once. Do you want to change it? (y/n): ";
  getline(cin, yesno);
  if(yesno == "y" || yesno == "Y") {
    NewUsername:cout << "Please create a new username: ";
    getline(cin, username2);
    if(username == username2) {
      cout << "New usernames must be different from old usernames. Do you still want to create a new username? (y/n): ";
      getline(cin, yesno);
      if(yesno == "y" || yesno == "Y") {
        cout << "Please create a new username: ";
        getline(cin, username2);
        if(username == username2) {
          cout << "Failed to register account.\n";
          return 0;
        }
        else {
          goto Password;
        }
      }
      else if(yesno == "n" || yesno == "N") {
        goto Password;
      }
      else {
        cout << "Do not enter anything else. Please just enter 'y' or 'n': ";
        getline(cin, yesno);
        if(yesno != "y" && yesno != "Y" && yesno != "n" && yesno != "N") {
          cout << "Failed to register account.\n";
          return 0;
        }
        else if(yesno == "y" || yesno == "Y") {
          goto NewUsername;
        }
        else {
          goto Password;
        }
      }
    }
    else {
      goto Password;
    }
  }
  else if(yesno == "n" || yesno == "N") {
    goto Password;
  }
  else {
    cout << "Do not enter anything else. Please just enter 'y' or 'n': ";
    getline(cin, yesno);
    if(yesno != "y" && yesno != "Y" && yesno != "n" && yesno != "N") {
      cout << "Failed to register account.\n";
      return 0;
    }
    else if(yesno == "y" || yesno == "Y") {
      goto NewUsername;
    }
    else {
      goto Password;
    }
  }
  Password:cout << "Please create a password (4 to 20 characters): ";
  getline(cin, password);
  if(password.length() < 4) {
    cout << "Passwords have to have at least 4 characters!\n";
    cout << "Please create a new password (4 to 20 characters): ";
    getline(cin, password);
    if(password.length() < 4) {
      cout << "Password was too short.\n";
      return 0;
    }
    else if(password.length() > 20) {
      cout << "Passwords can't have more than 20 characters!\n";
      cout << "Please create a new password (4 to 20 characters): ";
      getline(cin, password);
      if(password.length() > 20) {
        cout << "Password was too long.\n";
        return 0;
      }
      else if(password.length() < 4) {
        cout << "Password was too short.\n";
        return 0;
      }
    }
    else {
      goto BOTConfirmation;
    }
  }
  else if(password.length() > 20) {
    cout << "Passwords can't have more than 20 characters!\n";
    cout << "Please create a new password (4 to 20 characters): ";
    getline(cin, password);
    if(password.length() > 20) {
      cout << "Password was too long.\n";
      return 0;
    }
    else if(password.length() < 4) {
      cout << "Passwords have to have at least 4 characters!\n";
      cout << "Please create a new password (4 to 20 characters): ";
      getline(cin, password);
      if(password.length() < 4) {
        cout << "Password was too short.\n";
        return 0;
      }
      else if(password.length() > 20) {
        cout << "Password was too long.\n";
        return 0;
      }
    }
    else {
      goto BOTConfirmation;
    }
  }
  else {
    BOTConfirmation:cout << "Please reenter your password: ";
    getline(cin, password2);
    if(password != password2) {
      cout << "Passwords must match!\n";
      cout << "Please reenter your password again: ";
      getline(cin, password2);
      if(password != password2) {
        cout << "Passwords still didn't match.\n";
        return 0;
      }
      else {
        if(yesno == "y" || yesno == "Y") {
          goto Question;
        }
        else {
          goto Question2;
        }
      }
    }
    if(yesno == "Y" || yesno == "y") {
      Question:cout << "Now, please answer the simple question below to finish the registration.\n";
      switch(randomNumber) {
        case 1:
        cout << "Type the name of the first planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Mercury") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else if(checkrobot == "mercury") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 2:
        getline(cin, checkrobot);
        if(checkrobot == "Venus") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else if(checkrobot == "venus") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 3:
        cout << "Type the name of the third planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Earth") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else if(checkrobot == "earth") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 4:
        cout << "Type the name of the fourth planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Mars") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else if(checkrobot == "mars") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 5:
        cout << "Type the name of the fifth planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Jupiter") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else if(checkrobot == "jupiter") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 6:
        cout << "Type the name of the sixth planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Saturn") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else if(checkrobot == "saturn") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 7:
        cout << "Type the name of the seventh planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Uranus") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else if(checkrobot == "uranus") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 8:
        cout << "Type the name of the eighth planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Neptune") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else if(checkrobot == "neptune") {
          cout << "Access granted. Welcome " << username2 << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        default:
        cout << "Sorry, but an error occured in the process.\n";
      }
    }
    else if(yesno == "n" || yesno == "N") {
      Question2:cout << "Now, please answer the simple question below to finish the registration.\n";
      switch(randomNumber) {
        case 1:
        cout << "Type the name of the first planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Mercury") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else if(checkrobot == "mercury") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 2:
        getline(cin, checkrobot);
        if(checkrobot == "Venus") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else if(checkrobot == "venus") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 3:
        cout << "Type the name of the third planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Earth") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else if(checkrobot == "earth") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 4:
        cout << "Type the name of the fourth planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Mars") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else if(checkrobot == "mars") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 5:
        cout << "Type the name of the fifth planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Jupiter") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else if(checkrobot == "jupiter") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 6:
        cout << "Type the name of the sixth planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Saturn") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else if(checkrobot == "saturn") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 7:
        cout << "Type the name of the seventh planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Uranus") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else if(checkrobot == "uranus") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        case 8:
        cout << "Type the name of the eighth planet from the sun to prove that you are not a robot: ";
        getline(cin, checkrobot);
        if(checkrobot == "Neptune") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else if(checkrobot == "neptune") {
          cout << "Access granted. Welcome " << username << ".\n";
        }
        else {
          cout << "Access denied. You are a robot.\n";
        }
        break;
        default:
        cout << "Sorry, but an error occured in the process.\n";
      }
    }
  }
  return 0;
}