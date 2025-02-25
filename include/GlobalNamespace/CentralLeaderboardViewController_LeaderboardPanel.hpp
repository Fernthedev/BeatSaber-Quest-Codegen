// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: CentralLeaderboardViewController/LeaderboardPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class CentralLeaderboardViewController::LeaderboardPanel : public ::Il2CppObject {
    public:
    // public readonly System.String title
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* title;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String hint
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* hint;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Boolean mixed
    // Size: 0x1
    // Offset: 0x20
    bool mixed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LeaderboardPanel
    LeaderboardPanel(::Il2CppString* title_ = {}, ::Il2CppString* hint_ = {}, bool mixed_ = {}) noexcept : title{title_}, hint{hint_}, mixed{mixed_} {}
    // Get instance field reference: public readonly System.String title
    ::Il2CppString*& dyn_title();
    // Get instance field reference: public readonly System.String hint
    ::Il2CppString*& dyn_hint();
    // Get instance field reference: public readonly System.Boolean mixed
    bool& dyn_mixed();
    // public System.Void .ctor(System.String title, System.String hint, System.Boolean mixed)
    // Offset: 0x10DF578
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CentralLeaderboardViewController::LeaderboardPanel* New_ctor(::Il2CppString* title, ::Il2CppString* hint, bool mixed) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CentralLeaderboardViewController::LeaderboardPanel*, creationType>(title, hint, mixed)));
    }
  }; // CentralLeaderboardViewController/LeaderboardPanel
  #pragma pack(pop)
  static check_size<sizeof(CentralLeaderboardViewController::LeaderboardPanel), 32 + sizeof(bool)> __GlobalNamespace_CentralLeaderboardViewController_LeaderboardPanelSizeCheck;
  static_assert(sizeof(CentralLeaderboardViewController::LeaderboardPanel) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*, "", "CentralLeaderboardViewController/LeaderboardPanel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
