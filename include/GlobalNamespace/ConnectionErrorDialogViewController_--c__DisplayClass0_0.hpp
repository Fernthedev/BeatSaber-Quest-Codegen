// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ConnectionErrorDialogViewController
#include "GlobalNamespace/ConnectionErrorDialogViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ConnectionErrorDialogViewController/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConnectionErrorDialogViewController::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Action buttonAction
    // Size: 0x8
    // Offset: 0x10
    System::Action* buttonAction;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(System::Action* buttonAction_ = {}) noexcept : buttonAction{buttonAction_} {}
    // Creating conversion operator: operator System::Action*
    constexpr operator System::Action*() const noexcept {
      return buttonAction;
    }
    // Get instance field reference: public System.Action buttonAction
    System::Action*& dyn_buttonAction();
    // System.Void <Init>b__0(System.Int32 btnIdx)
    // Offset: 0x10F2BA0
    void $Init$b__0(int btnIdx);
    // public System.Void .ctor()
    // Offset: 0x10F2AAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionErrorDialogViewController::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionErrorDialogViewController::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // ConnectionErrorDialogViewController/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(ConnectionErrorDialogViewController::$$c__DisplayClass0_0), 16 + sizeof(System::Action*)> __GlobalNamespace_ConnectionErrorDialogViewController_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(ConnectionErrorDialogViewController::$$c__DisplayClass0_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0*, "", "ConnectionErrorDialogViewController/<>c__DisplayClass0_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0::$Init$b__0
// Il2CppName: <Init>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0::*)(int)>(&GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0::$Init$b__0)> {
  static const MethodInfo* get() {
    static auto* btnIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0*), "<Init>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{btnIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
