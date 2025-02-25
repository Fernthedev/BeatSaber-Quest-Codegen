// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRSettings : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRSettings FnTable
    // Size: 0x60
    // Offset: 0x10
    Valve::VR::IVRSettings FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSettings) == 0x60);
    // Creating value type constructor for type: CVRSettings
    CVRSettings(Valve::VR::IVRSettings FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRSettings
    constexpr operator Valve::VR::IVRSettings() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRSettings FnTable
    Valve::VR::IVRSettings& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x17141E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSettings* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSettings*, creationType>(pInterface)));
    }
    // public System.String GetSettingsErrorNameFromEnum(Valve.VR.EVRSettingsError eError)
    // Offset: 0x17142F0
    ::Il2CppString* GetSettingsErrorNameFromEnum(Valve::VR::EVRSettingsError eError);
    // public System.Boolean Sync(System.Boolean bForce, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1714384
    bool Sync(bool bForce, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Void SetBool(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x17143A4
    void SetBool(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Void SetInt32(System.String pchSection, System.String pchSettingsKey, System.Int32 nValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x17143C4
    void SetInt32(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, int nValue, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Void SetFloat(System.String pchSection, System.String pchSettingsKey, System.Single flValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x17143E0
    void SetFloat(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Void SetString(System.String pchSection, System.String pchSettingsKey, System.String pchValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x17143FC
    void SetString(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ::Il2CppString* pchValue, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Boolean GetBool(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1714418
    bool GetBool(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Int32 GetInt32(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1714434
    int GetInt32(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Single GetFloat(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1714450
    float GetFloat(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Void GetString(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x171446C
    void GetString(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, System::Text::StringBuilder* pchValue, uint unValueLen, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Void RemoveSection(System.String pchSection, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1714488
    void RemoveSection(::Il2CppString* pchSection, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.Void RemoveKeyInSection(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x17144A4
    void RemoveKeyInSection(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ByRef<Valve::VR::EVRSettingsError> peError);
  }; // Valve.VR.CVRSettings
  #pragma pack(pop)
  static check_size<sizeof(CVRSettings), 16 + sizeof(Valve::VR::IVRSettings)> __Valve_VR_CVRSettingsSizeCheck;
  static_assert(sizeof(CVRSettings) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSettings*, "Valve.VR", "CVRSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRSettings::GetSettingsErrorNameFromEnum
// Il2CppName: GetSettingsErrorNameFromEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Valve::VR::CVRSettings::*)(Valve::VR::EVRSettingsError)>(&Valve::VR::CVRSettings::GetSettingsErrorNameFromEnum)> {
  static const MethodInfo* get() {
    static auto* eError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "GetSettingsErrorNameFromEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::Sync
// Il2CppName: Sync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSettings::*)(bool, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::Sync)> {
  static const MethodInfo* get() {
    static auto* bForce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "Sync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bForce, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::SetBool
// Il2CppName: SetBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, bool, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::SetBool)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "SetBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, bValue, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::SetInt32
// Il2CppName: SetInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, int, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::SetInt32)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "SetInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, nValue, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, float, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::SetFloat)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* flValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, flValue, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::SetString
// Il2CppName: SetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::SetString)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "SetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, pchValue, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::GetBool
// Il2CppName: GetBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::GetBool)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "GetBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::GetInt32
// Il2CppName: GetInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::GetInt32)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "GetInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::GetFloat)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, System::Text::StringBuilder*, uint, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::GetString)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unValueLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, pchValue, unValueLen, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::RemoveSection
// Il2CppName: RemoveSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRSettings::*)(::Il2CppString*, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::RemoveSection)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "RemoveSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSettings::RemoveKeyInSection
// Il2CppName: RemoveKeyInSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRSettings::*)(::Il2CppString*, ::Il2CppString*, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::CVRSettings::RemoveKeyInSection)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSettings*), "RemoveKeyInSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};
