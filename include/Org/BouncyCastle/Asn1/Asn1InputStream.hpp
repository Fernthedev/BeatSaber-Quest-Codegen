// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Utilities.IO.FilterStream
#include "Org/BouncyCastle/Utilities/IO/FilterStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Forward declaring type: DefiniteLengthInputStream
  class DefiniteLengthInputStream;
  // Forward declaring type: DerSequence
  class DerSequence;
  // Forward declaring type: DerSet
  class DerSet;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1InputStream
  // [TokenAttribute] Offset: FFFFFFFF
  class Asn1InputStream : public Org::BouncyCastle::Utilities::IO::FilterStream {
    public:
    // private readonly System.Int32 limit
    // Size: 0x4
    // Offset: 0x30
    int limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: limit and: tmpBuffers
    char __padding0[0x4] = {};
    // private readonly System.Byte[][] tmpBuffers
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Array<uint8_t>*>* tmpBuffers;
    // Field size check
    static_assert(sizeof(::Array<::Array<uint8_t>*>*) == 0x8);
    // Creating value type constructor for type: Asn1InputStream
    Asn1InputStream(int limit_ = {}, ::Array<::Array<uint8_t>*>* tmpBuffers_ = {}) noexcept : limit{limit_}, tmpBuffers{tmpBuffers_} {}
    // Get instance field reference: private readonly System.Int32 limit
    int& dyn_limit();
    // Get instance field reference: private readonly System.Byte[][] tmpBuffers
    ::Array<::Array<uint8_t>*>*& dyn_tmpBuffers();
    // System.Int32 get_Limit()
    // Offset: 0x17292AC
    int get_Limit();
    // public System.Void .ctor(System.IO.Stream inputStream, System.Int32 limit)
    // Offset: 0x1726DAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1InputStream* New_ctor(System::IO::Stream* inputStream, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1InputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1InputStream*, creationType>(inputStream, limit)));
    }
    // public System.Void .ctor(System.Byte[] input)
    // Offset: 0x1726E28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1InputStream* New_ctor(::Array<uint8_t>* input) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1InputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1InputStream*, creationType>(input)));
    }
    // static System.Int32 FindLimit(System.IO.Stream input)
    // Offset: 0x1726C58
    static int FindLimit(System::IO::Stream* input);
    // private Org.BouncyCastle.Asn1.Asn1Object BuildObject(System.Int32 tag, System.Int32 tagNo, System.Int32 length)
    // Offset: 0x1726EAC
    Org::BouncyCastle::Asn1::Asn1Object* BuildObject(int tag, int tagNo, int length);
    // Org.BouncyCastle.Asn1.Asn1EncodableVector ReadVector(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    // Offset: 0x1728168
    Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);
    // Org.BouncyCastle.Asn1.DerSequence CreateDerSequence(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    // Offset: 0x172864C
    Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);
    // Org.BouncyCastle.Asn1.DerSet CreateDerSet(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    // Offset: 0x1728774
    Org::BouncyCastle::Asn1::DerSet* CreateDerSet(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);
    // public Org.BouncyCastle.Asn1.Asn1Object ReadObject()
    // Offset: 0x1728258
    Org::BouncyCastle::Asn1::Asn1Object* ReadObject();
    // static System.Int32 ReadTagNumber(System.IO.Stream s, System.Int32 tag)
    // Offset: 0x17288B8
    static int ReadTagNumber(System::IO::Stream* s, int tag);
    // static System.Int32 ReadLength(System.IO.Stream s, System.Int32 limit, System.Boolean isParsing)
    // Offset: 0x17289D0
    static int ReadLength(System::IO::Stream* s, int limit, bool isParsing);
    // static private System.Byte[] GetBuffer(Org.BouncyCastle.Asn1.DefiniteLengthInputStream defIn, System.Byte[][] tmpBuffers)
    // Offset: 0x17292B4
    static ::Array<uint8_t>* GetBuffer(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn, ::Array<::Array<uint8_t>*>* tmpBuffers);
    // static private System.Char[] GetBmpCharBuffer(Org.BouncyCastle.Asn1.DefiniteLengthInputStream defIn)
    // Offset: 0x1729724
    static ::Array<::Il2CppChar>* GetBmpCharBuffer(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn);
    // static Org.BouncyCastle.Asn1.Asn1Object CreatePrimitiveDerObject(System.Int32 tagNo, Org.BouncyCastle.Asn1.DefiniteLengthInputStream defIn, System.Byte[][] tmpBuffers)
    // Offset: 0x1727CBC
    static Org::BouncyCastle::Asn1::Asn1Object* CreatePrimitiveDerObject(int tagNo, Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn, ::Array<::Array<uint8_t>*>* tmpBuffers);
    // public System.Void .ctor(System.IO.Stream inputStream)
    // Offset: 0x1726D78
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Void FilterStream::.ctor(System.IO.Stream inputStream)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1InputStream* New_ctor(System::IO::Stream* inputStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1InputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1InputStream*, creationType>(inputStream)));
    }
  }; // Org.BouncyCastle.Asn1.Asn1InputStream
  #pragma pack(pop)
  static check_size<sizeof(Asn1InputStream), 56 + sizeof(::Array<::Array<uint8_t>*>*)> __Org_BouncyCastle_Asn1_Asn1InputStreamSizeCheck;
  static_assert(sizeof(Asn1InputStream) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1InputStream*, "Org.BouncyCastle.Asn1", "Asn1InputStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::get_Limit
// Il2CppName: get_Limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::Asn1InputStream::*)()>(&Org::BouncyCastle::Asn1::Asn1InputStream::get_Limit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "get_Limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::FindLimit
// Il2CppName: FindLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IO::Stream*)>(&Org::BouncyCastle::Asn1::Asn1InputStream::FindLimit)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "FindLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::BuildObject
// Il2CppName: BuildObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Asn1InputStream::*)(int, int, int)>(&Org::BouncyCastle::Asn1::Asn1InputStream::BuildObject)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tagNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "BuildObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, tagNo, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::ReadVector
// Il2CppName: ReadVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1EncodableVector* (Org::BouncyCastle::Asn1::Asn1InputStream::*)(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&Org::BouncyCastle::Asn1::Asn1InputStream::ReadVector)> {
  static const MethodInfo* get() {
    static auto* dIn = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DefiniteLengthInputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "ReadVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dIn});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::CreateDerSequence
// Il2CppName: CreateDerSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerSequence* (Org::BouncyCastle::Asn1::Asn1InputStream::*)(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&Org::BouncyCastle::Asn1::Asn1InputStream::CreateDerSequence)> {
  static const MethodInfo* get() {
    static auto* dIn = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DefiniteLengthInputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "CreateDerSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dIn});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::CreateDerSet
// Il2CppName: CreateDerSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerSet* (Org::BouncyCastle::Asn1::Asn1InputStream::*)(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&Org::BouncyCastle::Asn1::Asn1InputStream::CreateDerSet)> {
  static const MethodInfo* get() {
    static auto* dIn = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DefiniteLengthInputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "CreateDerSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dIn});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::ReadObject
// Il2CppName: ReadObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Asn1InputStream::*)()>(&Org::BouncyCastle::Asn1::Asn1InputStream::ReadObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "ReadObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::ReadTagNumber
// Il2CppName: ReadTagNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IO::Stream*, int)>(&Org::BouncyCastle::Asn1::Asn1InputStream::ReadTagNumber)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "ReadTagNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, tag});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::ReadLength
// Il2CppName: ReadLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IO::Stream*, int, bool)>(&Org::BouncyCastle::Asn1::Asn1InputStream::ReadLength)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isParsing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "ReadLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, limit, isParsing});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::GetBuffer
// Il2CppName: GetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::Array<::Array<uint8_t>*>*)>(&Org::BouncyCastle::Asn1::Asn1InputStream::GetBuffer)> {
  static const MethodInfo* get() {
    static auto* defIn = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DefiniteLengthInputStream")->byval_arg;
    static auto* tmpBuffers = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "GetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defIn, tmpBuffers});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::GetBmpCharBuffer
// Il2CppName: GetBmpCharBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppChar>* (*)(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(&Org::BouncyCastle::Asn1::Asn1InputStream::GetBmpCharBuffer)> {
  static const MethodInfo* get() {
    static auto* defIn = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DefiniteLengthInputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "GetBmpCharBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defIn});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::CreatePrimitiveDerObject
// Il2CppName: CreatePrimitiveDerObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (*)(int, Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::Array<::Array<uint8_t>*>*)>(&Org::BouncyCastle::Asn1::Asn1InputStream::CreatePrimitiveDerObject)> {
  static const MethodInfo* get() {
    static auto* tagNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* defIn = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DefiniteLengthInputStream")->byval_arg;
    static auto* tmpBuffers = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1InputStream*), "CreatePrimitiveDerObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tagNo, defIn, tmpBuffers});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1InputStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
