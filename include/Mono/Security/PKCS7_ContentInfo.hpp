// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.PKCS7
#include "Mono/Security/PKCS7.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.PKCS7/ContentInfo
  class PKCS7::ContentInfo : public ::Il2CppObject {
    public:
    // private System.String contentType
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* contentType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private Mono.Security.ASN1 content
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::ASN1* content;
    // Field size check
    static_assert(sizeof(Mono::Security::ASN1*) == 0x8);
    // Creating value type constructor for type: ContentInfo
    ContentInfo(::Il2CppString* contentType_ = {}, Mono::Security::ASN1* content_ = {}) noexcept : contentType{contentType_}, content{content_} {}
    // public System.Void .ctor(System.String oid)
    // Offset: 0x1D791FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::ContentInfo* New_ctor(::Il2CppString* oid) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::PKCS7::ContentInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::ContentInfo*, creationType>(oid)));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1D79224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::ContentInfo* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::PKCS7::ContentInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::ContentInfo*, creationType>(data)));
    }
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x1D79294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::ContentInfo* New_ctor(Mono::Security::ASN1* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::PKCS7::ContentInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::ContentInfo*, creationType>(asn1)));
    }
    // public Mono.Security.ASN1 get_ASN1()
    // Offset: 0x1D79430
    Mono::Security::ASN1* get_ASN1();
    // public Mono.Security.ASN1 get_Content()
    // Offset: 0x1D794F0
    Mono::Security::ASN1* get_Content();
    // public System.Void set_Content(Mono.Security.ASN1 value)
    // Offset: 0x1D794F8
    void set_Content(Mono::Security::ASN1* value);
    // public System.String get_ContentType()
    // Offset: 0x1D79500
    ::Il2CppString* get_ContentType();
    // public System.Void set_ContentType(System.String value)
    // Offset: 0x1D79508
    void set_ContentType(::Il2CppString* value);
    // Mono.Security.ASN1 GetASN1()
    // Offset: 0x1D79434
    Mono::Security::ASN1* GetASN1();
    // public System.Void .ctor()
    // Offset: 0x1D79184
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::ContentInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::PKCS7::ContentInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::ContentInfo*, creationType>()));
    }
  }; // Mono.Security.PKCS7/ContentInfo
  #pragma pack(pop)
  static check_size<sizeof(PKCS7::ContentInfo), 24 + sizeof(Mono::Security::ASN1*)> __Mono_Security_PKCS7_ContentInfoSizeCheck;
  static_assert(sizeof(PKCS7::ContentInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::PKCS7::ContentInfo*, "Mono.Security", "PKCS7/ContentInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::get_ASN1
// Il2CppName: get_ASN1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::ASN1* (Mono::Security::PKCS7::ContentInfo::*)()>(&Mono::Security::PKCS7::ContentInfo::get_ASN1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "get_ASN1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::get_Content
// Il2CppName: get_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::ASN1* (Mono::Security::PKCS7::ContentInfo::*)()>(&Mono::Security::PKCS7::ContentInfo::get_Content)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "get_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::set_Content
// Il2CppName: set_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::PKCS7::ContentInfo::*)(Mono::Security::ASN1*)>(&Mono::Security::PKCS7::ContentInfo::set_Content)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "set_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::get_ContentType
// Il2CppName: get_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::PKCS7::ContentInfo::*)()>(&Mono::Security::PKCS7::ContentInfo::get_ContentType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "get_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::set_ContentType
// Il2CppName: set_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::PKCS7::ContentInfo::*)(::Il2CppString*)>(&Mono::Security::PKCS7::ContentInfo::set_ContentType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "set_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::GetASN1
// Il2CppName: GetASN1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::ASN1* (Mono::Security::PKCS7::ContentInfo::*)()>(&Mono::Security::PKCS7::ContentInfo::GetASN1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "GetASN1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
