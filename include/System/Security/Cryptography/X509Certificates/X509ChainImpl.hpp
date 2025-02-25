// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System/Security/Cryptography/X509Certificates/X509ChainStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainElementCollection
  class X509ChainElementCollection;
  // Forward declaring type: X509ChainPolicy
  class X509ChainPolicy;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainImpl
  // [TokenAttribute] Offset: FFFFFFFF
  class X509ChainImpl : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: X509ChainImpl
    X509ChainImpl() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Boolean get_IsValid()
    // Offset: 0xFFFFFFFF
    bool get_IsValid();
    // public System.Security.Cryptography.X509Certificates.X509ChainElementCollection get_ChainElements()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();
    // public System.Security.Cryptography.X509Certificates.X509ChainPolicy get_ChainPolicy()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy();
    // public System.Void set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy value)
    // Offset: 0xFFFFFFFF
    void set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
    // public System.Security.Cryptography.X509Certificates.X509ChainStatus[] get_ChainStatus()
    // Offset: 0xFFFFFFFF
    ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* get_ChainStatus();
    // public System.Boolean Build(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0xFFFFFFFF
    bool Build(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void Reset();
    // public System.Void Dispose()
    // Offset: 0x1867CFC
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1868B04
    void Dispose(bool disposing);
    // protected System.Void .ctor()
    // Offset: 0x1868B7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainImpl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainImpl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainImpl*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1868B08
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Security.Cryptography.X509Certificates.X509ChainImpl
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainImpl*, "System.Security.Cryptography.X509Certificates", "X509ChainImpl");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainElements
// Il2CppName: get_ChainElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainElementCollection* (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "get_ChainElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainPolicy
// Il2CppName: get_ChainPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainPolicy* (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "get_ChainPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::set_ChainPolicy
// Il2CppName: set_ChainPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)(System::Security::Cryptography::X509Certificates::X509ChainPolicy*)>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::set_ChainPolicy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainPolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "set_ChainPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainStatus
// Il2CppName: get_ChainStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::get_ChainStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "get_ChainStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)(System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::Build)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImpl::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImpl::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImpl::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImpl*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
