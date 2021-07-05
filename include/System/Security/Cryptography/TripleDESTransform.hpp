// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.SymmetricTransform
#include "Mono/Security/Cryptography/SymmetricTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DESTransform
  class DESTransform;
  // Forward declaring type: TripleDES
  class TripleDES;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.TripleDESTransform
  class TripleDESTransform : public Mono::Security::Cryptography::SymmetricTransform {
    public:
    // private System.Security.Cryptography.DESTransform E1
    // Size: 0x8
    // Offset: 0x58
    System::Security::Cryptography::DESTransform* E1;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform D2
    // Size: 0x8
    // Offset: 0x60
    System::Security::Cryptography::DESTransform* D2;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform E3
    // Size: 0x8
    // Offset: 0x68
    System::Security::Cryptography::DESTransform* E3;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform D1
    // Size: 0x8
    // Offset: 0x70
    System::Security::Cryptography::DESTransform* D1;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform E2
    // Size: 0x8
    // Offset: 0x78
    System::Security::Cryptography::DESTransform* E2;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform D3
    // Size: 0x8
    // Offset: 0x80
    System::Security::Cryptography::DESTransform* D3;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DESTransform*) == 0x8);
    // Creating value type constructor for type: TripleDESTransform
    TripleDESTransform(System::Security::Cryptography::DESTransform* E1_ = {}, System::Security::Cryptography::DESTransform* D2_ = {}, System::Security::Cryptography::DESTransform* E3_ = {}, System::Security::Cryptography::DESTransform* D1_ = {}, System::Security::Cryptography::DESTransform* E2_ = {}, System::Security::Cryptography::DESTransform* D3_ = {}) noexcept : E1{E1_}, D2{D2_}, E3{E3_}, D1{D1_}, E2{E2_}, D3{D3_} {}
    // public System.Void .ctor(System.Security.Cryptography.TripleDES algo, System.Boolean encryption, System.Byte[] key, System.Byte[] iv)
    // Offset: 0x1AEFB50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TripleDESTransform* New_ctor(System::Security::Cryptography::TripleDES* algo, bool encryption, ::Array<uint8_t>* key, ::Array<uint8_t>* iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::TripleDESTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TripleDESTransform*, creationType>(algo, encryption, key, iv)));
    }
    // static System.Byte[] GetStrongKey()
    // Offset: 0x1AF00C0
    static ::Array<uint8_t>* GetStrongKey();
    // protected override System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1AF0178
    // Implemented from: Mono.Security.Cryptography.SymmetricTransform
    // Base method: System.Void SymmetricTransform::ECB(System.Byte[] input, System.Byte[] output)
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
  }; // System.Security.Cryptography.TripleDESTransform
  #pragma pack(pop)
  static check_size<sizeof(TripleDESTransform), 128 + sizeof(System::Security::Cryptography::DESTransform*)> __System_Security_Cryptography_TripleDESTransformSizeCheck;
  static_assert(sizeof(TripleDESTransform) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::TripleDESTransform*, "System.Security.Cryptography", "TripleDESTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDESTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDESTransform::GetStrongKey
// Il2CppName: GetStrongKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)()>(&System::Security::Cryptography::TripleDESTransform::GetStrongKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDESTransform*), "GetStrongKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDESTransform::ECB
// Il2CppName: ECB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::TripleDESTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&System::Security::Cryptography::TripleDESTransform::ECB)> {
  const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDESTransform*), "ECB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
