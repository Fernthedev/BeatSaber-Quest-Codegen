// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.RootResolveMethods
#include "Zenject/RootResolveMethods.hpp"
// Including type: Zenject.ValidationErrorResponses
#include "Zenject/ValidationErrorResponses.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectSettings
  // [ZenjectAllowDuringValidationAttribute] Offset: DDCE3C
  // [NoReflectionBakingAttribute] Offset: DDCE3C
  class ZenjectSettings : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ZenjectSettings::SignalSettings
    class SignalSettings;
    // private System.Boolean _ensureDeterministicDestructionOrderOnApplicationQuit
    // Size: 0x1
    // Offset: 0x10
    bool ensureDeterministicDestructionOrderOnApplicationQuit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _displayWarningWhenResolvingDuringInstall
    // Size: 0x1
    // Offset: 0x11
    bool displayWarningWhenResolvingDuringInstall;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: displayWarningWhenResolvingDuringInstall and: validationRootResolveMethod
    char __padding1[0x2] = {};
    // private Zenject.RootResolveMethods _validationRootResolveMethod
    // Size: 0x4
    // Offset: 0x14
    Zenject::RootResolveMethods validationRootResolveMethod;
    // Field size check
    static_assert(sizeof(Zenject::RootResolveMethods) == 0x4);
    // private Zenject.ValidationErrorResponses _validationErrorResponse
    // Size: 0x4
    // Offset: 0x18
    Zenject::ValidationErrorResponses validationErrorResponse;
    // Field size check
    static_assert(sizeof(Zenject::ValidationErrorResponses) == 0x4);
    // Padding between fields: validationErrorResponse and: signalSettings
    char __padding3[0x4] = {};
    // private Zenject.ZenjectSettings/SignalSettings _signalSettings
    // Size: 0x8
    // Offset: 0x20
    Zenject::ZenjectSettings::SignalSettings* signalSettings;
    // Field size check
    static_assert(sizeof(Zenject::ZenjectSettings::SignalSettings*) == 0x8);
    // Creating value type constructor for type: ZenjectSettings
    ZenjectSettings(bool ensureDeterministicDestructionOrderOnApplicationQuit_ = {}, bool displayWarningWhenResolvingDuringInstall_ = {}, Zenject::RootResolveMethods validationRootResolveMethod_ = {}, Zenject::ValidationErrorResponses validationErrorResponse_ = {}, Zenject::ZenjectSettings::SignalSettings* signalSettings_ = {}) noexcept : ensureDeterministicDestructionOrderOnApplicationQuit{ensureDeterministicDestructionOrderOnApplicationQuit_}, displayWarningWhenResolvingDuringInstall{displayWarningWhenResolvingDuringInstall_}, validationRootResolveMethod{validationRootResolveMethod_}, validationErrorResponse{validationErrorResponse_}, signalSettings{signalSettings_} {}
    // Get static field: static public Zenject.ZenjectSettings Default
    static Zenject::ZenjectSettings* _get_Default();
    // Set static field: static public Zenject.ZenjectSettings Default
    static void _set_Default(Zenject::ZenjectSettings* value);
    // public System.Void .ctor(Zenject.ValidationErrorResponses validationErrorResponse, Zenject.RootResolveMethods validationRootResolveMethod, System.Boolean displayWarningWhenResolvingDuringInstall, System.Boolean ensureDeterministicDestructionOrderOnApplicationQuit, Zenject.ZenjectSettings/SignalSettings signalSettings)
    // Offset: 0x23BC378
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSettings* New_ctor(Zenject::ValidationErrorResponses validationErrorResponse, Zenject::RootResolveMethods validationRootResolveMethod, bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit, Zenject::ZenjectSettings::SignalSettings* signalSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSettings*, creationType>(validationErrorResponse, validationRootResolveMethod, displayWarningWhenResolvingDuringInstall, ensureDeterministicDestructionOrderOnApplicationQuit, signalSettings)));
    }
    // public Zenject.ZenjectSettings/SignalSettings get_Signals()
    // Offset: 0x23BC450
    Zenject::ZenjectSettings::SignalSettings* get_Signals();
    // public Zenject.ValidationErrorResponses get_ValidationErrorResponse()
    // Offset: 0x23BC458
    Zenject::ValidationErrorResponses get_ValidationErrorResponse();
    // public Zenject.RootResolveMethods get_ValidationRootResolveMethod()
    // Offset: 0x23BC460
    Zenject::RootResolveMethods get_ValidationRootResolveMethod();
    // public System.Boolean get_DisplayWarningWhenResolvingDuringInstall()
    // Offset: 0x23BC468
    bool get_DisplayWarningWhenResolvingDuringInstall();
    // public System.Boolean get_EnsureDeterministicDestructionOrderOnApplicationQuit()
    // Offset: 0x23BC470
    bool get_EnsureDeterministicDestructionOrderOnApplicationQuit();
    // static private System.Void .cctor()
    // Offset: 0x23BC478
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x23BC438
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSettings*, creationType>()));
    }
  }; // Zenject.ZenjectSettings
  #pragma pack(pop)
  static check_size<sizeof(ZenjectSettings), 32 + sizeof(Zenject::ZenjectSettings::SignalSettings*)> __Zenject_ZenjectSettingsSizeCheck;
  static_assert(sizeof(ZenjectSettings) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectSettings*, "Zenject", "ZenjectSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_Signals
// Il2CppName: get_Signals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenjectSettings::SignalSettings* (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_Signals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_Signals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_ValidationErrorResponse
// Il2CppName: get_ValidationErrorResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ValidationErrorResponses (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_ValidationErrorResponse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_ValidationErrorResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_ValidationRootResolveMethod
// Il2CppName: get_ValidationRootResolveMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::RootResolveMethods (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_ValidationRootResolveMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_ValidationRootResolveMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_DisplayWarningWhenResolvingDuringInstall
// Il2CppName: get_DisplayWarningWhenResolvingDuringInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_DisplayWarningWhenResolvingDuringInstall)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_DisplayWarningWhenResolvingDuringInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::get_EnsureDeterministicDestructionOrderOnApplicationQuit
// Il2CppName: get_EnsureDeterministicDestructionOrderOnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectSettings::*)()>(&Zenject::ZenjectSettings::get_EnsureDeterministicDestructionOrderOnApplicationQuit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), "get_EnsureDeterministicDestructionOrderOnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::ZenjectSettings::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
