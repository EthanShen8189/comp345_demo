cmake_minimum_required(VERSION 3.6)
project(COMP345_Project_Demo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Builder
        Builder/Builder.h Builder/CharacterBuilder.h Builder/EditorMapElementBuilder.h Builder/EditorMapElementBuilder.cpp
        Builder/GameMapElementBuilder.h Builder/GameMapElementBuilder.cpp Builder/PlayerBuilder.h Builder/PlayerBuilder.cpp
        Character
        Character/Character.h Character/CharacterAttribute.cpp Character/CharacterAttribute.h Character/Backpack.cpp
        Character/Backpack.h Character/CharacterEquipment.h Character/CharacterEquipment.cpp Character/Fighter.h Character/Fighter.cpp
        Dice
        Dice/Dice.cpp Dice/Dice.h
        Driver
        Driver/CharacterDriver.h Driver/CharacterDriver.cpp Driver/CombatDriver.h Driver/CombatDriver.cpp Driver/MapElementDriver.h
        Driver/MapElementDriver.cpp
        Item
        Item/Item.h Item/Armor.h Item/Armor.cpp Item/Belt.h Item/Belt.cpp Item/Boots.h Item/Boots.cpp Item/Helmet.h Item/Helmet.cpp
        Item/ItemContainer.h Item/Ring.h Item/Ring.cpp Item/Shield.h Item/Shield.cpp Item/Weapon.h Item/Weapon.cpp
        MapElement
        MapElement/Chest.h MapElement/Chest.cpp MapElement/Door.h MapElement/Door.cpp MapElement/Monster.cpp MapElement/Monster.h
        rapidxml
        rapidxml/license.txt rapidxml/manual.html rapidxml/rapidxml.hpp rapidxml/rapidxml_iterators.hpp rapidxml/rapidxml_print.hpp
        rapidxml/rapidxml_utils.hpp
        SaveManager
        SaveManager/SavedFiles/SavedEditorMap.xml
        main.cpp SaveManager/SaveManager.cpp SaveManager/SaveManager.h)

add_executable(COMP345_Project_Demo ${SOURCE_FILES})