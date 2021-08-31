// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SHA1
#include "System/Security/Cryptography/SHA1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SHA1Internal
  class SHA1Internal;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SHA1CryptoServiceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9CE34
  class SHA1CryptoServiceProvider : public System::Security::Cryptography::SHA1 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.Security.Cryptography.SHA1Internal sha
    // Size: 0x8
    // Offset: 0x28
    System::Security::Cryptography::SHA1Internal* sha;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::SHA1Internal*) == 0x8);
    // Creating value type constructor for type: SHA1CryptoServiceProvider
    SHA1CryptoServiceProvider(System::Security::Cryptography::SHA1Internal* sha_ = {}) noexcept : sha{sha_} {}
    // Creating conversion operator: operator System::Security::Cryptography::SHA1Internal*
    constexpr operator System::Security::Cryptography::SHA1Internal*() const noexcept {
      return sha;
    }
    // Get instance field: private System.Security.Cryptography.SHA1Internal sha
    System::Security::Cryptography::SHA1Internal* _get_sha();
    // Set instance field: private System.Security.Cryptography.SHA1Internal sha
    void _set_sha(System::Security::Cryptography::SHA1Internal* value);
    // public System.Void .ctor()
    // Offset: 0x1B40A58
    // Implemented from: System.Security.Cryptography.SHA1
    // Base method: System.Void SHA1::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA1CryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SHA1CryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA1CryptoServiceProvider*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1B40B58
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1B40BD0
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1B40BDC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1B40D04
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
    // public override System.Void Initialize()
    // Offset: 0x1B40E18
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
  }; // System.Security.Cryptography.SHA1CryptoServiceProvider
  #pragma pack(pop)
  static check_size<sizeof(SHA1CryptoServiceProvider), 40 + sizeof(System::Security::Cryptography::SHA1Internal*)> __System_Security_Cryptography_SHA1CryptoServiceProviderSizeCheck;
  static_assert(sizeof(SHA1CryptoServiceProvider) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1CryptoServiceProvider*, "System.Security.Cryptography", "SHA1CryptoServiceProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1CryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(&System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1CryptoServiceProvider*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1CryptoServiceProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1CryptoServiceProvider*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(&System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1CryptoServiceProvider*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(&System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1CryptoServiceProvider*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
