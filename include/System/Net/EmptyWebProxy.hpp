// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.EmptyWebProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class EmptyWebProxy : public ::Il2CppObject/*, public System::Net::IWebProxy*/ {
    public:
    // private System.Net.ICredentials m_credentials
    // Size: 0x8
    // Offset: 0x10
    System::Net::ICredentials* m_credentials;
    // Field size check
    static_assert(sizeof(System::Net::ICredentials*) == 0x8);
    // Creating value type constructor for type: EmptyWebProxy
    EmptyWebProxy(System::Net::ICredentials* m_credentials_ = {}) noexcept : m_credentials{m_credentials_} {}
    // Creating interface conversion operator: operator System::Net::IWebProxy
    operator System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<System::Net::IWebProxy*>(this);
    }
    // Creating conversion operator: operator System::Net::ICredentials*
    constexpr operator System::Net::ICredentials*() const noexcept {
      return m_credentials;
    }
    // Get instance field reference: private System.Net.ICredentials m_credentials
    System::Net::ICredentials*& dyn_m_credentials();
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x16E07CC
    System::Net::ICredentials* get_Credentials();
    // public System.Uri GetProxy(System.Uri uri)
    // Offset: 0x16E07BC
    System::Uri* GetProxy(System::Uri* uri);
    // public System.Boolean IsBypassed(System.Uri uri)
    // Offset: 0x16E07C4
    bool IsBypassed(System::Uri* uri);
    // public System.Void .ctor()
    // Offset: 0x16E07B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyWebProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::EmptyWebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyWebProxy*, creationType>()));
    }
  }; // System.Net.EmptyWebProxy
  #pragma pack(pop)
  static check_size<sizeof(EmptyWebProxy), 16 + sizeof(System::Net::ICredentials*)> __System_Net_EmptyWebProxySizeCheck;
  static_assert(sizeof(EmptyWebProxy) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::EmptyWebProxy*, "System.Net", "EmptyWebProxy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::EmptyWebProxy::get_Credentials
// Il2CppName: get_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials* (System::Net::EmptyWebProxy::*)()>(&System::Net::EmptyWebProxy::get_Credentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EmptyWebProxy*), "get_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EmptyWebProxy::GetProxy
// Il2CppName: GetProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (System::Net::EmptyWebProxy::*)(System::Uri*)>(&System::Net::EmptyWebProxy::GetProxy)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EmptyWebProxy*), "GetProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Net::EmptyWebProxy::IsBypassed
// Il2CppName: IsBypassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::EmptyWebProxy::*)(System::Uri*)>(&System::Net::EmptyWebProxy::IsBypassed)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EmptyWebProxy*), "IsBypassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Net::EmptyWebProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
