// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Signers.IDsaEncoding
#include "Org/BouncyCastle/Crypto/Signers/IDsaEncoding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.PlainDsaEncoding
  // [TokenAttribute] Offset: FFFFFFFF
  class PlainDsaEncoding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Signers::IDsaEncoding*/ {
    public:
    // Creating value type constructor for type: PlainDsaEncoding
    PlainDsaEncoding() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Signers::IDsaEncoding
    operator Org::BouncyCastle::Crypto::Signers::IDsaEncoding() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(this);
    }
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Signers.PlainDsaEncoding Instance
    static Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* _get_Instance();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Signers.PlainDsaEncoding Instance
    static void _set_Instance(Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* value);
    // static private System.Void .cctor()
    // Offset: 0x127E6EC
    static void _cctor();
    // public System.Byte[] Encode(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger r, Org.BouncyCastle.Math.BigInteger s)
    // Offset: 0x127E428
    ::Array<uint8_t>* Encode(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* r, Org::BouncyCastle::Math::BigInteger* s);
    // protected Org.BouncyCastle.Math.BigInteger CheckValue(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x127E4FC
    Org::BouncyCastle::Math::BigInteger* CheckValue(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* x);
    // protected System.Void EncodeValue(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger x, System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x127E5B4
    void EncodeValue(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* x, ::Array<uint8_t>* buf, int off, int len);
    // public System.Void .ctor()
    // Offset: 0x127E750
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlainDsaEncoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlainDsaEncoding*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.PlainDsaEncoding
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*, "Org.BouncyCastle.Crypto.Signers", "PlainDsaEncoding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::Encode)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, r, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::CheckValue
// Il2CppName: CheckValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::CheckValue)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*), "CheckValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::EncodeValue
// Il2CppName: EncodeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*, ::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::EncodeValue)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*), "EncodeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, x, buf, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
