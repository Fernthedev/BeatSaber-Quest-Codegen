// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.OidTokenizer
  // [TokenAttribute] Offset: FFFFFFFF
  class OidTokenizer : public ::Il2CppObject {
    public:
    // private System.String oid
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* oid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OidTokenizer
    OidTokenizer(::Il2CppString* oid_ = {}, int index_ = {}) noexcept : oid{oid_}, index{index_} {}
    // Get instance field: private System.String oid
    ::Il2CppString* _get_oid();
    // Set instance field: private System.String oid
    void _set_oid(::Il2CppString* value);
    // Get instance field: private System.Int32 index
    int _get_index();
    // Set instance field: private System.Int32 index
    void _set_index(int value);
    // public System.Boolean get_HasMoreTokens()
    // Offset: 0x17AF55C
    bool get_HasMoreTokens();
    // public System.Void .ctor(System.String oid)
    // Offset: 0x17AF530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OidTokenizer* New_ctor(::Il2CppString* oid) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::OidTokenizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OidTokenizer*, creationType>(oid)));
    }
    // public System.String NextToken()
    // Offset: 0x17AF56C
    ::Il2CppString* NextToken();
  }; // Org.BouncyCastle.Asn1.OidTokenizer
  #pragma pack(pop)
  static check_size<sizeof(OidTokenizer), 24 + sizeof(int)> __Org_BouncyCastle_Asn1_OidTokenizerSizeCheck;
  static_assert(sizeof(OidTokenizer) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::OidTokenizer*, "Org.BouncyCastle.Asn1", "OidTokenizer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens
// Il2CppName: get_HasMoreTokens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::OidTokenizer*), "get_HasMoreTokens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::OidTokenizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::OidTokenizer::NextToken
// Il2CppName: NextToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&Org::BouncyCastle::Asn1::OidTokenizer::NextToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::OidTokenizer*), "NextToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
