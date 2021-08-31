// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "System/Security/Cryptography/AsymmetricSignatureDeformatter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DSASignatureDeformatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9CAEC
  class DSASignatureDeformatter : public System::Security::Cryptography::AsymmetricSignatureDeformatter {
    public:
    // private System.Security.Cryptography.DSA _dsaKey
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::DSA* dsaKey;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DSA*) == 0x8);
    // private System.String _oid
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* oid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DSASignatureDeformatter
    DSASignatureDeformatter(System::Security::Cryptography::DSA* dsaKey_ = {}, ::Il2CppString* oid_ = {}) noexcept : dsaKey{dsaKey_}, oid{oid_} {}
    // Get instance field reference: private System.Security.Cryptography.DSA _dsaKey
    System::Security::Cryptography::DSA*& dyn__dsaKey();
    // Get instance field reference: private System.String _oid
    ::Il2CppString*& dyn__oid();
    // public System.Void .ctor(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x198E9DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureDeformatter* New_ctor(System::Security::Cryptography::AsymmetricAlgorithm* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DSASignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureDeformatter*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x19878BC
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureDeformatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DSASignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureDeformatter*, creationType>()));
    }
    // public override System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x198EAB0
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    void SetKey(System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public override System.Void SetHashAlgorithm(System.String strName)
    // Offset: 0x198EB7C
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::SetHashAlgorithm(System.String strName)
    void SetHashAlgorithm(::Il2CppString* strName);
    // public override System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0x198EC48
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Boolean AsymmetricSignatureDeformatter::VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    bool VerifySignature(::Array<uint8_t>* rgbHash, ::Array<uint8_t>* rgbSignature);
  }; // System.Security.Cryptography.DSASignatureDeformatter
  #pragma pack(pop)
  static check_size<sizeof(DSASignatureDeformatter), 24 + sizeof(::Il2CppString*)> __System_Security_Cryptography_DSASignatureDeformatterSizeCheck;
  static_assert(sizeof(DSASignatureDeformatter) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSASignatureDeformatter*, "System.Security.Cryptography", "DSASignatureDeformatter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureDeformatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureDeformatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureDeformatter::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSASignatureDeformatter::*)(System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::DSASignatureDeformatter::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSASignatureDeformatter*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureDeformatter::SetHashAlgorithm
// Il2CppName: SetHashAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSASignatureDeformatter::*)(::Il2CppString*)>(&System::Security::Cryptography::DSASignatureDeformatter::SetHashAlgorithm)> {
  static const MethodInfo* get() {
    static auto* strName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSASignatureDeformatter*), "SetHashAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureDeformatter::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::DSASignatureDeformatter::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&System::Security::Cryptography::DSASignatureDeformatter::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* rgbHash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgbSignature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSASignatureDeformatter*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbHash, rgbSignature});
  }
};
