// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Including type: HMUI.IconSegmentedControl
#include "HMUI/IconSegmentedControl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CentralLeaderboardViewController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CentralLeaderboardViewController::$$c*, "", "CentralLeaderboardViewController/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CentralLeaderboardViewController/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CentralLeaderboardViewController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly CentralLeaderboardViewController/<>c <>9
    static ::GlobalNamespace::CentralLeaderboardViewController::$$c* _get_$$9();
    // Set static field: static public readonly CentralLeaderboardViewController/<>c <>9
    static void _set_$$9(::GlobalNamespace::CentralLeaderboardViewController::$$c* value);
    // Get static field: static public System.Func`2<CentralLeaderboardViewController/LeaderboardPanel,System.String> <>9__26_1
    static ::System::Func_2<::GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*, ::StringW>* _get_$$9__26_1();
    // Set static field: static public System.Func`2<CentralLeaderboardViewController/LeaderboardPanel,System.String> <>9__26_1
    static void _set_$$9__26_1(::System::Func_2<::GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*, ::StringW>* value);
    // Get static field: static public System.Func`2<CentralLeaderboardViewController/ScoreScopeInfo,HMUI.IconSegmentedControl/HMUI.DataItem> <>9__26_2
    static ::System::Func_2<::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, ::HMUI::IconSegmentedControl::DataItem*>* _get_$$9__26_2();
    // Set static field: static public System.Func`2<CentralLeaderboardViewController/ScoreScopeInfo,HMUI.IconSegmentedControl/HMUI.DataItem> <>9__26_2
    static void _set_$$9__26_2(::System::Func_2<::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, ::HMUI::IconSegmentedControl::DataItem*>* value);
    // Get static field: static public System.Func`2<GameplayModifierParamsSO,System.String> <>9__37_0
    static ::System::Func_2<::GlobalNamespace::GameplayModifierParamsSO*, ::StringW>* _get_$$9__37_0();
    // Set static field: static public System.Func`2<GameplayModifierParamsSO,System.String> <>9__37_0
    static void _set_$$9__37_0(::System::Func_2<::GlobalNamespace::GameplayModifierParamsSO*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x135F258
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x135F2BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CentralLeaderboardViewController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CentralLeaderboardViewController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CentralLeaderboardViewController::$$c*, creationType>()));
    }
    // System.String <DidActivate>b__26_1(CentralLeaderboardViewController/LeaderboardPanel x)
    // Offset: 0x135F2C4
    ::StringW $DidActivate$b__26_1(::GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel* x);
    // HMUI.IconSegmentedControl/HMUI.DataItem <DidActivate>b__26_2(CentralLeaderboardViewController/ScoreScopeInfo x)
    // Offset: 0x135F2DC
    ::HMUI::IconSegmentedControl::DataItem* $DidActivate$b__26_2(::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo* x);
    // System.String <LoadScoresAsync>b__37_0(GameplayModifierParamsSO m)
    // Offset: 0x135F358
    ::StringW $LoadScoresAsync$b__37_0(::GlobalNamespace::GameplayModifierParamsSO* m);
  }; // CentralLeaderboardViewController/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CentralLeaderboardViewController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::$$c::$DidActivate$b__26_1
// Il2CppName: <DidActivate>b__26_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CentralLeaderboardViewController::$$c::*)(::GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*)>(&GlobalNamespace::CentralLeaderboardViewController::$$c::$DidActivate$b__26_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "CentralLeaderboardViewController/LeaderboardPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController::$$c*), "<DidActivate>b__26_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::$$c::$DidActivate$b__26_2
// Il2CppName: <DidActivate>b__26_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::IconSegmentedControl::DataItem* (GlobalNamespace::CentralLeaderboardViewController::$$c::*)(::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*)>(&GlobalNamespace::CentralLeaderboardViewController::$$c::$DidActivate$b__26_2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "CentralLeaderboardViewController/ScoreScopeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController::$$c*), "<DidActivate>b__26_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::$$c::$LoadScoresAsync$b__37_0
// Il2CppName: <LoadScoresAsync>b__37_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CentralLeaderboardViewController::$$c::*)(::GlobalNamespace::GameplayModifierParamsSO*)>(&GlobalNamespace::CentralLeaderboardViewController::$$c::$LoadScoresAsync$b__37_0)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController::$$c*), "<LoadScoresAsync>b__37_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
