// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerSet
#include "Org/BouncyCastle/Asn1/DerSet.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.LazyDerSet
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E01970
  class LazyDerSet : public Org::BouncyCastle::Asn1::DerSet {
    public:
    // private System.Byte[] encoded
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* encoded;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: LazyDerSet
    LazyDerSet(::Array<uint8_t>* encoded_ = {}) noexcept : encoded{encoded_} {}
    // Deleting conversion operator: operator ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*
    constexpr operator ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*() const noexcept = delete;
    // Get instance field reference: private System.Byte[] encoded
    ::Array<uint8_t>*& dyn_encoded();
    // System.Void .ctor(System.Byte[] encoded)
    // Offset: 0x17ACCB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyDerSet* New_ctor(::Array<uint8_t>* encoded) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::LazyDerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyDerSet*, creationType>(encoded)));
    }
    // private System.Void Parse()
    // Offset: 0x17ACFAC
    void Parse();
    // public override Org.BouncyCastle.Asn1.Asn1Encodable get_Item(System.Int32 index)
    // Offset: 0x17AD100
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: Org.BouncyCastle.Asn1.Asn1Encodable Asn1Set::get_Item(System.Int32 index)
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int index);
    // public override System.Int32 get_Count()
    // Offset: 0x17AD158
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Int32 Asn1Set::get_Count()
    int get_Count();
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x17AD130
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Collections.IEnumerator Asn1Set::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x17AD180
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.LazyDerSet
  #pragma pack(pop)
  static check_size<sizeof(LazyDerSet), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Asn1_LazyDerSetSizeCheck;
  static_assert(sizeof(LazyDerSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::LazyDerSet*, "Org.BouncyCastle.Asn1", "LazyDerSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSet::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::LazyDerSet::*)()>(&Org::BouncyCastle::Asn1::LazyDerSet::Parse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSet*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSet::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Encodable* (Org::BouncyCastle::Asn1::LazyDerSet::*)(int)>(&Org::BouncyCastle::Asn1::LazyDerSet::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSet*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSet::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::LazyDerSet::*)()>(&Org::BouncyCastle::Asn1::LazyDerSet::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSet*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSet::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (Org::BouncyCastle::Asn1::LazyDerSet::*)()>(&Org::BouncyCastle::Asn1::LazyDerSet::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSet*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LazyDerSet::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::LazyDerSet::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::LazyDerSet::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LazyDerSet*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
