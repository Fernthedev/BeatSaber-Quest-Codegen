// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: NetSyncVoipStreamMode
  struct NetSyncVoipStreamMode;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: NetSyncOptions
  class NetSyncOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::NetSyncOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSyncOptions*, "Oculus.Platform", "NetSyncOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.NetSyncOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSyncOptions : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Handle();
    // public System.Void .ctor()
    // Offset: 0x2AA7AA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSyncOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::NetSyncOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSyncOptions*, creationType>()));
    }
    // public System.Void SetVoipGroup(System.String value)
    // Offset: 0x2AA7B18
    void SetVoipGroup(::StringW value);
    // public System.Void SetVoipStreamDefault(Oculus.Platform.NetSyncVoipStreamMode value)
    // Offset: 0x2AA7B94
    void SetVoipStreamDefault(::Oculus::Platform::NetSyncVoipStreamMode value);
    // public System.Void SetZoneId(System.String value)
    // Offset: 0x2AA7C10
    void SetZoneId(::StringW value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.NetSyncOptions options)
    // Offset: 0x2AA7C8C
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // protected override System.Void Finalize()
    // Offset: 0x2AA7CDC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.NetSyncOptions
  #pragma pack(pop)
  static check_size<sizeof(NetSyncOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_NetSyncOptionsSizeCheck;
  static_assert(sizeof(NetSyncOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::NetSyncOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::NetSyncOptions::SetVoipGroup
// Il2CppName: SetVoipGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::NetSyncOptions::*)(::StringW)>(&Oculus::Platform::NetSyncOptions::SetVoipGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::NetSyncOptions*), "SetVoipGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::NetSyncOptions::SetVoipStreamDefault
// Il2CppName: SetVoipStreamDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::NetSyncOptions::*)(::Oculus::Platform::NetSyncVoipStreamMode)>(&Oculus::Platform::NetSyncOptions::SetVoipStreamDefault)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "NetSyncVoipStreamMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::NetSyncOptions*), "SetVoipStreamDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::NetSyncOptions::SetZoneId
// Il2CppName: SetZoneId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::NetSyncOptions::*)(::StringW)>(&Oculus::Platform::NetSyncOptions::SetZoneId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::NetSyncOptions*), "SetZoneId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::NetSyncOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::NetSyncOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::NetSyncOptions::*)()>(&Oculus::Platform::NetSyncOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::NetSyncOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
