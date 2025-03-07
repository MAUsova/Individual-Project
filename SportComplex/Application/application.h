// Copyright 2025 Marina Usova

#ifndef APPLICATION_APPLICATION_H_
#define APPLICATION_APPLICATION_H_

enum ApplicationType {
    RepairsRequired,
    TrainerRequired,
    ClientRequired
};

class Application {
    char* _description;
    //Date _creation_date;
    ApplicationType _type;
    bool is_done;
};

#endif  // APPLICATION_APPLICATION_H_
