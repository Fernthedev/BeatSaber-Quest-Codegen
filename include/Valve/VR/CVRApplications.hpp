// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.AppOverrideKeys_t
#include "Valve/VR/AppOverrideKeys_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationTransitionState
  struct EVRApplicationTransitionState;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x108
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRApplications
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRApplications : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRApplications FnTable
    // Size: 0xF8
    // Offset: 0x10
    Valve::VR::IVRApplications FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRApplications) == 0xF8);
    // Creating value type constructor for type: CVRApplications
    CVRApplications(Valve::VR::IVRApplications FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRApplications
    constexpr operator Valve::VR::IVRApplications() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRApplications FnTable
    Valve::VR::IVRApplications& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1708584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRApplications* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRApplications::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRApplications*, creationType>(pInterface)));
    }
    // public Valve.VR.EVRApplicationError AddApplicationManifest(System.String pchApplicationManifestFullPath, System.Boolean bTemporary)
    // Offset: 0x170868C
    Valve::VR::EVRApplicationError AddApplicationManifest(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary);
    // public Valve.VR.EVRApplicationError RemoveApplicationManifest(System.String pchApplicationManifestFullPath)
    // Offset: 0x1708AD8
    Valve::VR::EVRApplicationError RemoveApplicationManifest(::Il2CppString* pchApplicationManifestFullPath);
    // public System.Boolean IsApplicationInstalled(System.String pchAppKey)
    // Offset: 0x1708E8C
    bool IsApplicationInstalled(::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationCount()
    // Offset: 0x1709244
    uint GetApplicationCount();
    // public Valve.VR.EVRApplicationError GetApplicationKeyByIndex(System.UInt32 unApplicationIndex, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x1709470
    Valve::VR::EVRApplicationError GetApplicationKeyByIndex(uint unApplicationIndex, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationError GetApplicationKeyByProcessId(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x1709728
    Valve::VR::EVRApplicationError GetApplicationKeyByProcessId(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationError LaunchApplication(System.String pchAppKey)
    // Offset: 0x17099E0
    Valve::VR::EVRApplicationError LaunchApplication(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError LaunchTemplateApplication(System.String pchTemplateAppKey, System.String pchNewAppKey, Valve.VR.AppOverrideKeys_t[] pKeys)
    // Offset: 0x1709D94
    Valve::VR::EVRApplicationError LaunchTemplateApplication(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>* pKeys);
    // public Valve.VR.EVRApplicationError LaunchApplicationFromMimeType(System.String pchMimeType, System.String pchArgs)
    // Offset: 0x170A1F8
    Valve::VR::EVRApplicationError LaunchApplicationFromMimeType(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public Valve.VR.EVRApplicationError LaunchDashboardOverlay(System.String pchAppKey)
    // Offset: 0x170A600
    Valve::VR::EVRApplicationError LaunchDashboardOverlay(::Il2CppString* pchAppKey);
    // public System.Boolean CancelApplicationLaunch(System.String pchAppKey)
    // Offset: 0x170A9B4
    bool CancelApplicationLaunch(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError IdentifyApplication(System.UInt32 unProcessId, System.String pchAppKey)
    // Offset: 0x170AD6C
    Valve::VR::EVRApplicationError IdentifyApplication(uint unProcessId, ::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationProcessId(System.String pchAppKey)
    // Offset: 0x170B008
    uint GetApplicationProcessId(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsErrorNameFromEnum(Valve.VR.EVRApplicationError error)
    // Offset: 0x170B3BC
    ::Il2CppString* GetApplicationsErrorNameFromEnum(Valve::VR::EVRApplicationError error);
    // public System.UInt32 GetApplicationPropertyString(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x170B6C4
    uint GetApplicationPropertyString(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, ByRef<Valve::VR::EVRApplicationError> peError);
    // public System.Boolean GetApplicationPropertyBool(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x170BB6C
    bool GetApplicationPropertyBool(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, ByRef<Valve::VR::EVRApplicationError> peError);
    // public System.UInt64 GetApplicationPropertyUint64(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x170BFC4
    uint64_t GetApplicationPropertyUint64(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, ByRef<Valve::VR::EVRApplicationError> peError);
    // public Valve.VR.EVRApplicationError SetApplicationAutoLaunch(System.String pchAppKey, System.Boolean bAutoLaunch)
    // Offset: 0x170C418
    Valve::VR::EVRApplicationError SetApplicationAutoLaunch(::Il2CppString* pchAppKey, bool bAutoLaunch);
    // public System.Boolean GetApplicationAutoLaunch(System.String pchAppKey)
    // Offset: 0x170C864
    bool GetApplicationAutoLaunch(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError SetDefaultApplicationForMimeType(System.String pchAppKey, System.String pchMimeType)
    // Offset: 0x170CC1C
    Valve::VR::EVRApplicationError SetDefaultApplicationForMimeType(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType);
    // public System.Boolean GetDefaultApplicationForMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x170D024
    bool GetDefaultApplicationForMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.Boolean GetApplicationSupportedMimeTypes(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer)
    // Offset: 0x170D458
    bool GetApplicationSupportedMimeTypes(::Il2CppString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer);
    // public System.UInt32 GetApplicationsThatSupportMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeysThatSupportBuffer, System.UInt32 unAppKeysThatSupportBuffer)
    // Offset: 0x170D88C
    uint GetApplicationsThatSupportMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer);
    // public System.UInt32 GetApplicationLaunchArguments(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs)
    // Offset: 0x170DCBC
    uint GetApplicationLaunchArguments(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs);
    // public Valve.VR.EVRApplicationError GetStartingApplication(System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x170DF74
    Valve::VR::EVRApplicationError GetStartingApplication(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationTransitionState GetTransitionState()
    // Offset: 0x170E3A0
    Valve::VR::EVRApplicationTransitionState GetTransitionState();
    // public Valve.VR.EVRApplicationError PerformApplicationPrelaunchCheck(System.String pchAppKey)
    // Offset: 0x170E5CC
    Valve::VR::EVRApplicationError PerformApplicationPrelaunchCheck(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsTransitionStateNameFromEnum(Valve.VR.EVRApplicationTransitionState state)
    // Offset: 0x170E980
    ::Il2CppString* GetApplicationsTransitionStateNameFromEnum(Valve::VR::EVRApplicationTransitionState state);
    // public System.Boolean IsQuitUserPromptRequested()
    // Offset: 0x170EC88
    bool IsQuitUserPromptRequested();
    // public Valve.VR.EVRApplicationError LaunchInternalProcess(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory)
    // Offset: 0x170EEB8
    Valve::VR::EVRApplicationError LaunchInternalProcess(::Il2CppString* pchBinaryPath, ::Il2CppString* pchArguments, ::Il2CppString* pchWorkingDirectory);
    // public System.UInt32 GetCurrentSceneProcessId()
    // Offset: 0x170F2E8
    uint GetCurrentSceneProcessId();
  }; // Valve.VR.CVRApplications
  #pragma pack(pop)
  static check_size<sizeof(CVRApplications), 16 + sizeof(Valve::VR::IVRApplications)> __Valve_VR_CVRApplicationsSizeCheck;
  static_assert(sizeof(CVRApplications) == 0x108);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRApplications*, "Valve.VR", "CVRApplications");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRApplications::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRApplications::AddApplicationManifest
// Il2CppName: AddApplicationManifest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*, bool)>(&Valve::VR::CVRApplications::AddApplicationManifest)> {
  static const MethodInfo* get() {
    static auto* pchApplicationManifestFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bTemporary = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "AddApplicationManifest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchApplicationManifestFullPath, bTemporary});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::RemoveApplicationManifest
// Il2CppName: RemoveApplicationManifest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*)>(&Valve::VR::CVRApplications::RemoveApplicationManifest)> {
  static const MethodInfo* get() {
    static auto* pchApplicationManifestFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "RemoveApplicationManifest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchApplicationManifestFullPath});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::IsApplicationInstalled
// Il2CppName: IsApplicationInstalled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRApplications::*)(::Il2CppString*)>(&Valve::VR::CVRApplications::IsApplicationInstalled)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "IsApplicationInstalled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationCount
// Il2CppName: GetApplicationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRApplications::*)()>(&Valve::VR::CVRApplications::GetApplicationCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationKeyByIndex
// Il2CppName: GetApplicationKeyByIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(uint, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRApplications::GetApplicationKeyByIndex)> {
  static const MethodInfo* get() {
    static auto* unApplicationIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchAppKeyBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeyBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationKeyByIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationKeyByProcessId
// Il2CppName: GetApplicationKeyByProcessId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(uint, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRApplications::GetApplicationKeyByProcessId)> {
  static const MethodInfo* get() {
    static auto* unProcessId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchAppKeyBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeyBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationKeyByProcessId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unProcessId, pchAppKeyBuffer, unAppKeyBufferLen});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::LaunchApplication
// Il2CppName: LaunchApplication
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*)>(&Valve::VR::CVRApplications::LaunchApplication)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "LaunchApplication", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::LaunchTemplateApplication
// Il2CppName: LaunchTemplateApplication
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*, ::Il2CppString*, ::Array<Valve::VR::AppOverrideKeys_t>*)>(&Valve::VR::CVRApplications::LaunchTemplateApplication)> {
  static const MethodInfo* get() {
    static auto* pchTemplateAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchNewAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pKeys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "AppOverrideKeys_t"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "LaunchTemplateApplication", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchTemplateAppKey, pchNewAppKey, pKeys});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::LaunchApplicationFromMimeType
// Il2CppName: LaunchApplicationFromMimeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*, ::Il2CppString*)>(&Valve::VR::CVRApplications::LaunchApplicationFromMimeType)> {
  static const MethodInfo* get() {
    static auto* pchMimeType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchArgs = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "LaunchApplicationFromMimeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchMimeType, pchArgs});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::LaunchDashboardOverlay
// Il2CppName: LaunchDashboardOverlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*)>(&Valve::VR::CVRApplications::LaunchDashboardOverlay)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "LaunchDashboardOverlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::CancelApplicationLaunch
// Il2CppName: CancelApplicationLaunch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRApplications::*)(::Il2CppString*)>(&Valve::VR::CVRApplications::CancelApplicationLaunch)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "CancelApplicationLaunch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::IdentifyApplication
// Il2CppName: IdentifyApplication
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(uint, ::Il2CppString*)>(&Valve::VR::CVRApplications::IdentifyApplication)> {
  static const MethodInfo* get() {
    static auto* unProcessId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "IdentifyApplication", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unProcessId, pchAppKey});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationProcessId
// Il2CppName: GetApplicationProcessId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRApplications::*)(::Il2CppString*)>(&Valve::VR::CVRApplications::GetApplicationProcessId)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationProcessId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationsErrorNameFromEnum
// Il2CppName: GetApplicationsErrorNameFromEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Valve::VR::CVRApplications::*)(Valve::VR::EVRApplicationError)>(&Valve::VR::CVRApplications::GetApplicationsErrorNameFromEnum)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationsErrorNameFromEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationPropertyString
// Il2CppName: GetApplicationPropertyString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRApplications::*)(::Il2CppString*, Valve::VR::EVRApplicationProperty, System::Text::StringBuilder*, uint, ByRef<Valve::VR::EVRApplicationError>)>(&Valve::VR::CVRApplications::GetApplicationPropertyString)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eProperty = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationProperty")->byval_arg;
    static auto* pchPropertyValueBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unPropertyValueBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationPropertyString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationPropertyBool
// Il2CppName: GetApplicationPropertyBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRApplications::*)(::Il2CppString*, Valve::VR::EVRApplicationProperty, ByRef<Valve::VR::EVRApplicationError>)>(&Valve::VR::CVRApplications::GetApplicationPropertyBool)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eProperty = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationProperty")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationPropertyBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, eProperty, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationPropertyUint64
// Il2CppName: GetApplicationPropertyUint64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Valve::VR::CVRApplications::*)(::Il2CppString*, Valve::VR::EVRApplicationProperty, ByRef<Valve::VR::EVRApplicationError>)>(&Valve::VR::CVRApplications::GetApplicationPropertyUint64)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eProperty = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationProperty")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationPropertyUint64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, eProperty, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::SetApplicationAutoLaunch
// Il2CppName: SetApplicationAutoLaunch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*, bool)>(&Valve::VR::CVRApplications::SetApplicationAutoLaunch)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bAutoLaunch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "SetApplicationAutoLaunch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, bAutoLaunch});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationAutoLaunch
// Il2CppName: GetApplicationAutoLaunch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRApplications::*)(::Il2CppString*)>(&Valve::VR::CVRApplications::GetApplicationAutoLaunch)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationAutoLaunch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::SetDefaultApplicationForMimeType
// Il2CppName: SetDefaultApplicationForMimeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*, ::Il2CppString*)>(&Valve::VR::CVRApplications::SetDefaultApplicationForMimeType)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchMimeType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "SetDefaultApplicationForMimeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, pchMimeType});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetDefaultApplicationForMimeType
// Il2CppName: GetDefaultApplicationForMimeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRApplications::*)(::Il2CppString*, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRApplications::GetDefaultApplicationForMimeType)> {
  static const MethodInfo* get() {
    static auto* pchMimeType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchAppKeyBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeyBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetDefaultApplicationForMimeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationSupportedMimeTypes
// Il2CppName: GetApplicationSupportedMimeTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRApplications::*)(::Il2CppString*, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRApplications::GetApplicationSupportedMimeTypes)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchMimeTypesBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unMimeTypesBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationSupportedMimeTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationsThatSupportMimeType
// Il2CppName: GetApplicationsThatSupportMimeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRApplications::*)(::Il2CppString*, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRApplications::GetApplicationsThatSupportMimeType)> {
  static const MethodInfo* get() {
    static auto* pchMimeType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchAppKeysThatSupportBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeysThatSupportBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationsThatSupportMimeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationLaunchArguments
// Il2CppName: GetApplicationLaunchArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRApplications::*)(uint, System::Text::StringBuilder*, uint)>(&Valve::VR::CVRApplications::GetApplicationLaunchArguments)> {
  static const MethodInfo* get() {
    static auto* unHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchArgs = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unArgs = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationLaunchArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unHandle, pchArgs, unArgs});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetStartingApplication
// Il2CppName: GetStartingApplication
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(System::Text::StringBuilder*, uint)>(&Valve::VR::CVRApplications::GetStartingApplication)> {
  static const MethodInfo* get() {
    static auto* pchAppKeyBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeyBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetStartingApplication", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKeyBuffer, unAppKeyBufferLen});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetTransitionState
// Il2CppName: GetTransitionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationTransitionState (Valve::VR::CVRApplications::*)()>(&Valve::VR::CVRApplications::GetTransitionState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetTransitionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::PerformApplicationPrelaunchCheck
// Il2CppName: PerformApplicationPrelaunchCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*)>(&Valve::VR::CVRApplications::PerformApplicationPrelaunchCheck)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "PerformApplicationPrelaunchCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetApplicationsTransitionStateNameFromEnum
// Il2CppName: GetApplicationsTransitionStateNameFromEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Valve::VR::CVRApplications::*)(Valve::VR::EVRApplicationTransitionState)>(&Valve::VR::CVRApplications::GetApplicationsTransitionStateNameFromEnum)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationTransitionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetApplicationsTransitionStateNameFromEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::IsQuitUserPromptRequested
// Il2CppName: IsQuitUserPromptRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRApplications::*)()>(&Valve::VR::CVRApplications::IsQuitUserPromptRequested)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "IsQuitUserPromptRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::LaunchInternalProcess
// Il2CppName: LaunchInternalProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::CVRApplications::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&Valve::VR::CVRApplications::LaunchInternalProcess)> {
  static const MethodInfo* get() {
    static auto* pchBinaryPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchArguments = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchWorkingDirectory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "LaunchInternalProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchBinaryPath, pchArguments, pchWorkingDirectory});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRApplications::GetCurrentSceneProcessId
// Il2CppName: GetCurrentSceneProcessId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRApplications::*)()>(&Valve::VR::CVRApplications::GetCurrentSceneProcessId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRApplications*), "GetCurrentSceneProcessId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
