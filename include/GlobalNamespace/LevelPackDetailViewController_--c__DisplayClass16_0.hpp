// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelPackDetailViewController
#include "GlobalNamespace/LevelPackDetailViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0*, "", "LevelPackDetailViewController/<>c__DisplayClass16_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LevelPackDetailViewController/<>c__DisplayClass16_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LevelPackDetailViewController::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action handleDidPressRefreshButton
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* handleDidPressRefreshButton;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public LevelPackDetailViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LevelPackDetailViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelPackDetailViewController*) == 0x8);
    public:
    // Get instance field reference: public System.Action handleDidPressRefreshButton
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_handleDidPressRefreshButton();
    // Get instance field reference: public LevelPackDetailViewController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelPackDetailViewController*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x14D3544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelPackDetailViewController::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelPackDetailViewController::$$c__DisplayClass16_0*, creationType>()));
    }
    // System.Void <DidActivate>b__1()
    // Offset: 0x14D3D48
    void $DidActivate$b__1();
    // System.Void <DidActivate>b__2()
    // Offset: 0x14D3E18
    void $DidActivate$b__2();
  }; // LevelPackDetailViewController/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(LevelPackDetailViewController::$$c__DisplayClass16_0), 24 + sizeof(::GlobalNamespace::LevelPackDetailViewController*)> __GlobalNamespace_LevelPackDetailViewController_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(LevelPackDetailViewController::$$c__DisplayClass16_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0::$DidActivate$b__1
// Il2CppName: <DidActivate>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0::*)()>(&GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0::$DidActivate$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0*), "<DidActivate>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0::$DidActivate$b__2
// Il2CppName: <DidActivate>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0::*)()>(&GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0::$DidActivate$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0*), "<DidActivate>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
