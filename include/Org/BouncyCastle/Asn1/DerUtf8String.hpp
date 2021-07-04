// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerStringBase
#include "Org/BouncyCastle/Asn1/DerStringBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1Object because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerUtf8String
  class DerUtf8String : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // private readonly System.String str
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DerUtf8String
    DerUtf8String(::Il2CppString* str_ = {}) noexcept : str{str_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return str;
    }
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x16F3A88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerUtf8String* New_ctor(::Array<uint8_t>* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerUtf8String::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerUtf8String*, creationType>(str)));
    }
    // public System.Void .ctor(System.String str)
    // Offset: 0x1704814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerUtf8String* New_ctor(::Il2CppString* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerUtf8String::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerUtf8String*, creationType>(str)));
    }
    // public override System.String GetString()
    // Offset: 0x17048B0
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::Il2CppString* GetString();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x17048B8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x170496C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.DerUtf8String
  #pragma pack(pop)
  static check_size<sizeof(DerUtf8String), 16 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Asn1_DerUtf8StringSizeCheck;
  static_assert(sizeof(DerUtf8String) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerUtf8String*, "Org.BouncyCastle.Asn1", "DerUtf8String");
// Writing includes for template specializations
#include "Org/BouncyCastle/Asn1/DerOutputStream.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtf8String::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtf8String::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtf8String::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::DerUtf8String::*)()>(&Org::BouncyCastle::Asn1::DerUtf8String::GetString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtf8String*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtf8String::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerUtf8String::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerUtf8String::Asn1Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtf8String*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::Asn1Object*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerUtf8String::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerUtf8String::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerUtf8String::Encode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerUtf8String*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::DerOutputStream*>()});
  }
};
