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
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerObjectIdentifier
  // [TokenAttribute] Offset: FFFFFFFF
  class DerObjectIdentifier : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.String identifier
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* identifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] body
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* body;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: DerObjectIdentifier
    DerObjectIdentifier(::Il2CppString* identifier_ = {}, ::Array<uint8_t>* body_ = {}) noexcept : identifier{identifier_}, body{body_} {}
    // Get static field: static private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier[] cache
    static ::Array<Org::BouncyCastle::Asn1::DerObjectIdentifier*>* _get_cache();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier[] cache
    static void _set_cache(::Array<Org::BouncyCastle::Asn1::DerObjectIdentifier*>* value);
    // Get instance field reference: private readonly System.String identifier
    ::Il2CppString*& dyn_identifier();
    // Get instance field reference: private System.Byte[] body
    ::Array<uint8_t>*& dyn_body();
    // public System.String get_Id()
    // Offset: 0x173FC98
    ::Il2CppString* get_Id();
    // public System.Void .ctor(System.String identifier)
    // Offset: 0x172C6CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerObjectIdentifier* New_ctor(::Il2CppString* identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerObjectIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerObjectIdentifier*, creationType>(identifier)));
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier oid, System.String branchID)
    // Offset: 0x173FA78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerObjectIdentifier* New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Il2CppString* branchID) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerObjectIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerObjectIdentifier*, creationType>(oid, branchID)));
    }
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x173FD10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerObjectIdentifier* New_ctor(::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerObjectIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerObjectIdentifier*, creationType>(bytes)));
    }
    // static private System.Void .cctor()
    // Offset: 0x174069C
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetInstance(System.Object obj)
    // Offset: 0x173F6B0
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x173F890
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier Branch(System.String branchID)
    // Offset: 0x173FCA0
    Org::BouncyCastle::Asn1::DerObjectIdentifier* Branch(::Il2CppString* branchID);
    // private System.Void WriteField(System.IO.Stream outputStream, System.Int64 fieldValue)
    // Offset: 0x1740060
    void WriteField(System::IO::Stream* outputStream, int64_t fieldValue);
    // private System.Void WriteField(System.IO.Stream outputStream, Org.BouncyCastle.Math.BigInteger fieldValue)
    // Offset: 0x1740150
    void WriteField(System::IO::Stream* outputStream, Org::BouncyCastle::Math::BigInteger* fieldValue);
    // private System.Void DoOutput(System.IO.MemoryStream bOut)
    // Offset: 0x17402DC
    void DoOutput(System::IO::MemoryStream* bOut);
    // System.Byte[] GetBody()
    // Offset: 0x17404A4
    ::Array<uint8_t>* GetBody();
    // static private System.Boolean IsValidBranchID(System.String branchID, System.Int32 start)
    // Offset: 0x173FB9C
    static bool IsValidBranchID(::Il2CppString* branchID, int start);
    // static private System.Boolean IsValidIdentifier(System.String identifier)
    // Offset: 0x173F9B0
    static bool IsValidIdentifier(::Il2CppString* identifier);
    // static private System.String MakeOidStringFromBytes(System.Byte[] bytes)
    // Offset: 0x173FDC8
    static ::Il2CppString* MakeOidStringFromBytes(::Array<uint8_t>* bytes);
    // static Org.BouncyCastle.Asn1.DerObjectIdentifier FromOctetString(System.Byte[] enc)
    // Offset: 0x17305FC
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* FromOctetString(::Array<uint8_t>* enc);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1740590
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x17405C4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x17405E0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // public override System.String ToString()
    // Offset: 0x1740694
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.DerObjectIdentifier
  #pragma pack(pop)
  static check_size<sizeof(DerObjectIdentifier), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Asn1_DerObjectIdentifierSizeCheck;
  static_assert(sizeof(DerObjectIdentifier) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Org.BouncyCastle.Asn1", "DerObjectIdentifier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)()>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* explicitly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, explicitly});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::Branch
// Il2CppName: Branch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::Il2CppString*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::Branch)> {
  static const MethodInfo* get() {
    static auto* branchID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "Branch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{branchID});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::WriteField
// Il2CppName: WriteField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(System::IO::Stream*, int64_t)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::WriteField)> {
  static const MethodInfo* get() {
    static auto* outputStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* fieldValue = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "WriteField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputStream, fieldValue});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::WriteField
// Il2CppName: WriteField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(System::IO::Stream*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::WriteField)> {
  static const MethodInfo* get() {
    static auto* outputStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* fieldValue = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "WriteField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputStream, fieldValue});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::DoOutput
// Il2CppName: DoOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(System::IO::MemoryStream*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::DoOutput)> {
  static const MethodInfo* get() {
    static auto* bOut = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "DoOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bOut});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::GetBody
// Il2CppName: GetBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)()>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::GetBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "GetBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::IsValidBranchID
// Il2CppName: IsValidBranchID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::IsValidBranchID)> {
  static const MethodInfo* get() {
    static auto* branchID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "IsValidBranchID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{branchID, start});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::IsValidIdentifier
// Il2CppName: IsValidIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::IsValidIdentifier)> {
  static const MethodInfo* get() {
    static auto* identifier = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "IsValidIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identifier});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::MakeOidStringFromBytes
// Il2CppName: MakeOidStringFromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::MakeOidStringFromBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "MakeOidStringFromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::FromOctetString
// Il2CppName: FromOctetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::FromOctetString)> {
  static const MethodInfo* get() {
    static auto* enc = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "FromOctetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enc});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)()>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::Asn1GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::Asn1Equals)> {
  static const MethodInfo* get() {
    static auto* asn1Object = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1Object});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerObjectIdentifier::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::DerObjectIdentifier::*)()>(&Org::BouncyCastle::Asn1::DerObjectIdentifier::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerObjectIdentifier*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
