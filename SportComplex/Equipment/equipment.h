// Copyright 2025 Marina Usova

#ifndef EQUIPMENT_EQUIPMENT_H_
#define EQUIPMENT_EQUIPMENT_H_

enum EquipmentType {
    SportsExerciseMachine,
    SportEquipment,
    Multimedia,
    PC,
    Another
};

enum EquipmentState {
    OK,
    RepairRequired,
    ReplacementRequired,
    UnderRepair,
    InStock
};

class Equipment {
    char* _name;
    EquipmentType _type;
    EquipmentState _state;
};

#endif  // EQUIPMENT_EQUIPMENT_H_
