// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerExternal
  // [TokenAttribute] Offset: FFFFFFFF
  class DerExternal : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier directReference
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerInteger indirectReference
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* indirectReference;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private Org.BouncyCastle.Asn1.Asn1Object dataValueDescriptor
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Object*) == 0x8);
    // private System.Int32 encoding
    // Size: 0x4
    // Offset: 0x28
    int encoding;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: encoding and: externalContent
    char __padding3[0x4] = {};
    // private Org.BouncyCastle.Asn1.Asn1Object externalContent
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Asn1::Asn1Object* externalContent;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Object*) == 0x8);
    // Creating value type constructor for type: DerExternal
    DerExternal(Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference_ = {}, Org::BouncyCastle::Asn1::DerInteger* indirectReference_ = {}, Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor_ = {}, int encoding_ = {}, Org::BouncyCastle::Asn1::Asn1Object* externalContent_ = {}) noexcept : directReference{directReference_}, indirectReference{indirectReference_}, dataValueDescriptor{dataValueDescriptor_}, encoding{encoding_}, externalContent{externalContent_} {}
    // Get instance field reference: private Org.BouncyCastle.Asn1.DerObjectIdentifier directReference
    Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_directReference();
    // Get instance field reference: private Org.BouncyCastle.Asn1.DerInteger indirectReference
    Org::BouncyCastle::Asn1::DerInteger*& dyn_indirectReference();
    // Get instance field reference: private Org.BouncyCastle.Asn1.Asn1Object dataValueDescriptor
    Org::BouncyCastle::Asn1::Asn1Object*& dyn_dataValueDescriptor();
    // Get instance field reference: private System.Int32 encoding
    int& dyn_encoding();
    // Get instance field reference: private Org.BouncyCastle.Asn1.Asn1Object externalContent
    Org::BouncyCastle::Asn1::Asn1Object*& dyn_externalContent();
    // public Org.BouncyCastle.Asn1.Asn1Object get_DataValueDescriptor()
    // Offset: 0x173D70C
    Org::BouncyCastle::Asn1::Asn1Object* get_DataValueDescriptor();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_DirectReference()
    // Offset: 0x173D714
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DirectReference();
    // public System.Int32 get_Encoding()
    // Offset: 0x173D71C
    int get_Encoding();
    // public System.Void set_Encoding(System.Int32 value)
    // Offset: 0x173D378
    void set_Encoding(int value);
    // public Org.BouncyCastle.Asn1.Asn1Object get_ExternalContent()
    // Offset: 0x173D724
    Org::BouncyCastle::Asn1::Asn1Object* get_ExternalContent();
    // public Org.BouncyCastle.Asn1.DerInteger get_IndirectReference()
    // Offset: 0x173D72C
    Org::BouncyCastle::Asn1::DerInteger* get_IndirectReference();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector vector)
    // Offset: 0x172E278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerExternal* New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* vector) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerExternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerExternal*, creationType>(vector)));
    }
    // static private Org.BouncyCastle.Asn1.Asn1Object GetObjFromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector v, System.Int32 index)
    // Offset: 0x173D2B8
    static Org::BouncyCastle::Asn1::Asn1Object* GetObjFromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int index);
    // static private System.Void WriteEncodable(System.IO.MemoryStream ms, Org.BouncyCastle.Asn1.Asn1Encodable e)
    // Offset: 0x173D54C
    static void WriteEncodable(System::IO::MemoryStream* ms, Org::BouncyCastle::Asn1::Asn1Encodable* e);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x173D444
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x173D5A8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x173D610
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerExternal
  #pragma pack(pop)
  static check_size<sizeof(DerExternal), 48 + sizeof(Org::BouncyCastle::Asn1::Asn1Object*)> __Org_BouncyCastle_Asn1_DerExternalSizeCheck;
  static_assert(sizeof(DerExternal) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerExternal*, "Org.BouncyCastle.Asn1", "DerExternal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::get_DataValueDescriptor
// Il2CppName: get_DataValueDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::DerExternal::*)()>(&Org::BouncyCastle::Asn1::DerExternal::get_DataValueDescriptor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "get_DataValueDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::get_DirectReference
// Il2CppName: get_DirectReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Asn1::DerExternal::*)()>(&Org::BouncyCastle::Asn1::DerExternal::get_DirectReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "get_DirectReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerExternal::*)()>(&Org::BouncyCastle::Asn1::DerExternal::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::set_Encoding
// Il2CppName: set_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerExternal::*)(int)>(&Org::BouncyCastle::Asn1::DerExternal::set_Encoding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "set_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::get_ExternalContent
// Il2CppName: get_ExternalContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::DerExternal::*)()>(&Org::BouncyCastle::Asn1::DerExternal::get_ExternalContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "get_ExternalContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::get_IndirectReference
// Il2CppName: get_IndirectReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::DerExternal::*)()>(&Org::BouncyCastle::Asn1::DerExternal::get_IndirectReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "get_IndirectReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::GetObjFromVector
// Il2CppName: GetObjFromVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (*)(Org::BouncyCastle::Asn1::Asn1EncodableVector*, int)>(&Org::BouncyCastle::Asn1::DerExternal::GetObjFromVector)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1EncodableVector")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "GetObjFromVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::WriteEncodable
// Il2CppName: WriteEncodable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::MemoryStream*, Org::BouncyCastle::Asn1::Asn1Encodable*)>(&Org::BouncyCastle::Asn1::DerExternal::WriteEncodable)> {
  static const MethodInfo* get() {
    static auto* ms = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "WriteEncodable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ms, e});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerExternal::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerExternal::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerExternal::*)()>(&Org::BouncyCastle::Asn1::DerExternal::Asn1GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerExternal::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerExternal::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerExternal::Asn1Equals)> {
  static const MethodInfo* get() {
    static auto* asn1Object = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerExternal*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1Object});
  }
};
