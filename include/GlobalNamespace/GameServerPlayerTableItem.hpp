// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: GameServerPlayerTableItem
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServerPlayerTableItem : public ::Il2CppObject {
    public:
    // public readonly System.String playerName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String suggestedLevel
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* suggestedLevel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String suggestedModifiers
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* suggestedModifiers;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Boolean isReady
    // Size: 0x1
    // Offset: 0x28
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameServerPlayerTableItem
    GameServerPlayerTableItem(::Il2CppString* playerName_ = {}, ::Il2CppString* suggestedLevel_ = {}, ::Il2CppString* suggestedModifiers_ = {}, bool isReady_ = {}) noexcept : playerName{playerName_}, suggestedLevel{suggestedLevel_}, suggestedModifiers{suggestedModifiers_}, isReady{isReady_} {}
    // Get instance field reference: public readonly System.String playerName
    ::Il2CppString*& dyn_playerName();
    // Get instance field reference: public readonly System.String suggestedLevel
    ::Il2CppString*& dyn_suggestedLevel();
    // Get instance field reference: public readonly System.String suggestedModifiers
    ::Il2CppString*& dyn_suggestedModifiers();
    // Get instance field reference: public readonly System.Boolean isReady
    bool& dyn_isReady();
    // public System.Void .ctor(System.String playerName, System.String suggestedLevel, System.String suggestedModifiers, System.Boolean isReady)
    // Offset: 0x10FB928
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerPlayerTableItem* New_ctor(::Il2CppString* playerName, ::Il2CppString* suggestedLevel, ::Il2CppString* suggestedModifiers, bool isReady) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerPlayerTableItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerPlayerTableItem*, creationType>(playerName, suggestedLevel, suggestedModifiers, isReady)));
    }
  }; // GameServerPlayerTableItem
  #pragma pack(pop)
  static check_size<sizeof(GameServerPlayerTableItem), 40 + sizeof(bool)> __GlobalNamespace_GameServerPlayerTableItemSizeCheck;
  static_assert(sizeof(GameServerPlayerTableItem) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerPlayerTableItem*, "", "GameServerPlayerTableItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
