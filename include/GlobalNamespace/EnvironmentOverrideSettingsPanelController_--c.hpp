// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: EnvironmentOverrideSettingsPanelController
#include "GlobalNamespace/EnvironmentOverrideSettingsPanelController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentOverrideSettingsPanelController/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EnvironmentOverrideSettingsPanelController::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly EnvironmentOverrideSettingsPanelController/<>c <>9
    static GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c* _get_$$9();
    // Set static field: static public readonly EnvironmentOverrideSettingsPanelController/<>c <>9
    static void _set_$$9(GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c* value);
    // Get static field: static public System.Func`2<EnvironmentInfoSO,System.String> <>9__12_0
    static System::Func_2<GlobalNamespace::EnvironmentInfoSO*, ::Il2CppString*>* _get_$$9__12_0();
    // Set static field: static public System.Func`2<EnvironmentInfoSO,System.String> <>9__12_0
    static void _set_$$9__12_0(System::Func_2<GlobalNamespace::EnvironmentInfoSO*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1058A70
    static void _cctor();
    // System.String <SetData>b__12_0(EnvironmentInfoSO x)
    // Offset: 0x1058ADC
    ::Il2CppString* $SetData$b__12_0(GlobalNamespace::EnvironmentInfoSO* x);
    // public System.Void .ctor()
    // Offset: 0x1058AD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentOverrideSettingsPanelController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentOverrideSettingsPanelController::$$c*, creationType>()));
    }
  }; // EnvironmentOverrideSettingsPanelController/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c*, "", "EnvironmentOverrideSettingsPanelController/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c::$SetData$b__12_0
// Il2CppName: <SetData>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c::*)(GlobalNamespace::EnvironmentInfoSO*)>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c::$SetData$b__12_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "EnvironmentInfoSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c*), "<SetData>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
