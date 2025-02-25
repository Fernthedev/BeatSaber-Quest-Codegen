// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
  // Skipping declaration: Asn1Object because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerPrintableString
  // [TokenAttribute] Offset: FFFFFFFF
  class DerPrintableString : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // private readonly System.String str
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DerPrintableString
    DerPrintableString(::Il2CppString* str_ = {}) noexcept : str{str_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return str;
    }
    // Get instance field reference: private readonly System.String str
    ::Il2CppString*& dyn_str();
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x1730BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerPrintableString* New_ctor(::Array<uint8_t>* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerPrintableString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerPrintableString*, creationType>(str)));
    }
    // public System.Void .ctor(System.String str, System.Boolean validate)
    // Offset: 0x1740AB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerPrintableString* New_ctor(::Il2CppString* str, bool validate) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerPrintableString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerPrintableString*, creationType>(str, validate)));
    }
    // public System.Byte[] GetOctets()
    // Offset: 0x1740CA8
    ::Array<uint8_t>* GetOctets();
    // static public System.Boolean IsPrintableString(System.String str)
    // Offset: 0x1740BA0
    static bool IsPrintableString(::Il2CppString* str);
    // public override System.String GetString()
    // Offset: 0x1740CA0
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::Il2CppString* GetString();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1740CB4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1740CF0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerPrintableString
  #pragma pack(pop)
  static check_size<sizeof(DerPrintableString), 16 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Asn1_DerPrintableStringSizeCheck;
  static_assert(sizeof(DerPrintableString) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerPrintableString*, "Org.BouncyCastle.Asn1", "DerPrintableString");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerPrintableString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerPrintableString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerPrintableString::GetOctets
// Il2CppName: GetOctets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::DerPrintableString::*)()>(&Org::BouncyCastle::Asn1::DerPrintableString::GetOctets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerPrintableString*), "GetOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerPrintableString::IsPrintableString
// Il2CppName: IsPrintableString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Org::BouncyCastle::Asn1::DerPrintableString::IsPrintableString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerPrintableString*), "IsPrintableString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerPrintableString::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::DerPrintableString::*)()>(&Org::BouncyCastle::Asn1::DerPrintableString::GetString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerPrintableString*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerPrintableString::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerPrintableString::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerPrintableString::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerPrintableString*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerPrintableString::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerPrintableString::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerPrintableString::Asn1Equals)> {
  static const MethodInfo* get() {
    static auto* asn1Object = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerPrintableString*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1Object});
  }
};
