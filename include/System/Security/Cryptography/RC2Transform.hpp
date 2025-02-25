// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: RC2
  class RC2;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RC2Transform
  // [TokenAttribute] Offset: FFFFFFFF
  class RC2Transform : public Mono::Security::Cryptography::SymmetricTransform {
    public:
    // private System.UInt16 R0
    // Size: 0x2
    // Offset: 0x58
    uint16_t R0;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 R1
    // Size: 0x2
    // Offset: 0x5A
    uint16_t R1;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 R2
    // Size: 0x2
    // Offset: 0x5C
    uint16_t R2;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 R3
    // Size: 0x2
    // Offset: 0x5E
    uint16_t R3;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16[] K
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint16_t>* K;
    // Field size check
    static_assert(sizeof(::Array<uint16_t>*) == 0x8);
    // private System.Int32 j
    // Size: 0x4
    // Offset: 0x68
    int j;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RC2Transform
    RC2Transform(uint16_t R0_ = {}, uint16_t R1_ = {}, uint16_t R2_ = {}, uint16_t R3_ = {}, ::Array<uint16_t>* K_ = {}, int j_ = {}) noexcept : R0{R0_}, R1{R1_}, R2{R2_}, R3{R3_}, K{K_}, j{j_} {}
    // Get static field: static private readonly System.Byte[] pitable
    static ::Array<uint8_t>* _get_pitable();
    // Set static field: static private readonly System.Byte[] pitable
    static void _set_pitable(::Array<uint8_t>* value);
    // Get instance field reference: private System.UInt16 R0
    uint16_t& dyn_R0();
    // Get instance field reference: private System.UInt16 R1
    uint16_t& dyn_R1();
    // Get instance field reference: private System.UInt16 R2
    uint16_t& dyn_R2();
    // Get instance field reference: private System.UInt16 R3
    uint16_t& dyn_R3();
    // Get instance field reference: private System.UInt16[] K
    ::Array<uint16_t>*& dyn_K();
    // Get instance field reference: private System.Int32 j
    int& dyn_j();
    // public System.Void .ctor(System.Security.Cryptography.RC2 rc2Algo, System.Boolean encryption, System.Byte[] key, System.Byte[] iv)
    // Offset: 0x1997C50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2Transform* New_ctor(System::Security::Cryptography::RC2* rc2Algo, bool encryption, ::Array<uint8_t>* key, ::Array<uint8_t>* iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RC2Transform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2Transform*, creationType>(rc2Algo, encryption, key, iv)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1998DE0
    static void _cctor();
    // protected override System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x19984A4
    // Implemented from: Mono.Security.Cryptography.SymmetricTransform
    // Base method: System.Void SymmetricTransform::ECB(System.Byte[] input, System.Byte[] output)
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
  }; // System.Security.Cryptography.RC2Transform
  #pragma pack(pop)
  static check_size<sizeof(RC2Transform), 104 + sizeof(int)> __System_Security_Cryptography_RC2TransformSizeCheck;
  static_assert(sizeof(RC2Transform) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RC2Transform*, "System.Security.Cryptography", "RC2Transform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RC2Transform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RC2Transform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::RC2Transform::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RC2Transform*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RC2Transform::ECB
// Il2CppName: ECB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2Transform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&System::Security::Cryptography::RC2Transform::ECB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RC2Transform*), "ECB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
