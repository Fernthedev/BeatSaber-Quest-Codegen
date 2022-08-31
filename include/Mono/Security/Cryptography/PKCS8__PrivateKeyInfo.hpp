// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.PKCS8
#include "Mono/Security/Cryptography/PKCS8_.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo*, "Mono.Security.Cryptography", "PKCS8/PrivateKeyInfo");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.PKCS8/Mono.Security.Cryptography.PrivateKeyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS8_::PrivateKeyInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x10
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: algorithm
    char __padding0[0x4] = {};
    // private System.String _algorithm
    // Size: 0x8
    // Offset: 0x18
    ::StringW algorithm;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] _key
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> key;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _version
    [[deprecated("Use field access instead!")]] int& dyn__version();
    // Get instance field reference: private System.String _algorithm
    [[deprecated("Use field access instead!")]] ::StringW& dyn__algorithm();
    // Get instance field reference: private System.Byte[] _key
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__key();
    // Get instance field reference: private System.Collections.ArrayList _list
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__list();
    // public System.Byte[] get_PrivateKey()
    // Offset: 0x1F916CC
    ::ArrayW<uint8_t> get_PrivateKey();
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1F91454
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS8_::PrivateKeyInfo* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS8_::PrivateKeyInfo*, creationType>(data)));
    }
    // private System.Void Decode(System.Byte[] data)
    // Offset: 0x1F91480
    void Decode(::ArrayW<uint8_t> data);
    // static private System.Byte[] RemoveLeadingZero(System.Byte[] bigInt)
    // Offset: 0x1F91748
    static ::ArrayW<uint8_t> RemoveLeadingZero(::ArrayW<uint8_t> bigInt);
    // static private System.Byte[] Normalize(System.Byte[] bigInt, System.Int32 length)
    // Offset: 0x1F917F4
    static ::ArrayW<uint8_t> Normalize(::ArrayW<uint8_t> bigInt, int length);
    // static public System.Security.Cryptography.RSA DecodeRSA(System.Byte[] keypair)
    // Offset: 0x1F918A8
    static ::System::Security::Cryptography::RSA* DecodeRSA(::ArrayW<uint8_t> keypair);
    // static public System.Security.Cryptography.DSA DecodeDSA(System.Byte[] privateKey, System.Security.Cryptography.DSAParameters dsaParameters)
    // Offset: 0x1F91C60
    static ::System::Security::Cryptography::DSA* DecodeDSA(::ArrayW<uint8_t> privateKey, ::System::Security::Cryptography::DSAParameters dsaParameters);
    // public System.Void .ctor()
    // Offset: 0x1F913E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS8_::PrivateKeyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS8_::PrivateKeyInfo*, creationType>()));
    }
  }; // Mono.Security.Cryptography.PKCS8/Mono.Security.Cryptography.PrivateKeyInfo
  #pragma pack(pop)
  static check_size<sizeof(PKCS8_::PrivateKeyInfo), 40 + sizeof(::System::Collections::ArrayList*)> __Mono_Security_Cryptography_PKCS8__PrivateKeyInfoSizeCheck;
  static_assert(sizeof(PKCS8_::PrivateKeyInfo) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::get_PrivateKey
// Il2CppName: get_PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::*)()>(&Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::get_PrivateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo*), "get_PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::Decode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::RemoveLeadingZero
// Il2CppName: RemoveLeadingZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::RemoveLeadingZero)> {
  static const MethodInfo* get() {
    static auto* bigInt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo*), "RemoveLeadingZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bigInt});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::Normalize)> {
  static const MethodInfo* get() {
    static auto* bigInt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bigInt, length});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::DecodeRSA
// Il2CppName: DecodeRSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::DecodeRSA)> {
  static const MethodInfo* get() {
    static auto* keypair = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo*), "DecodeRSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keypair});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::DecodeDSA
// Il2CppName: DecodeDSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSA* (*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::DSAParameters)>(&Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::DecodeDSA)> {
  static const MethodInfo* get() {
    static auto* privateKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dsaParameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo*), "DecodeDSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{privateKey, dsaParameters});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8_::PrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
