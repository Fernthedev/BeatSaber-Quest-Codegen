// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Utilities.IO.BaseInputStream
#include "Org/BouncyCastle/Utilities/IO/BaseInputStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1StreamParser
  class Asn1StreamParser;
  // Forward declaring type: Asn1OctetStringParser
  class Asn1OctetStringParser;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.ConstructedOctetStream
  class ConstructedOctetStream : public Org::BouncyCastle::Utilities::IO::BaseInputStream {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private readonly Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*) == 0x8);
    // private System.Boolean _first
    // Size: 0x1
    // Offset: 0x38
    bool first;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: first and: currentStream
    char __padding1[0x7] = {};
    // private System.IO.Stream _currentStream
    // Size: 0x8
    // Offset: 0x40
    System::IO::Stream* currentStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // Creating value type constructor for type: ConstructedOctetStream
    ConstructedOctetStream(Org::BouncyCastle::Asn1::Asn1StreamParser* parser_ = {}, bool first_ = {}, System::IO::Stream* currentStream_ = {}) noexcept : parser{parser_}, first{first_}, currentStream{currentStream_} {}
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x16F8754
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructedOctetStream* New_ctor(Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::ConstructedOctetStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructedOctetStream*, creationType>(parser)));
    }
    // private Org.BouncyCastle.Asn1.Asn1OctetStringParser GetNextParser()
    // Offset: 0x16FA930
    Org::BouncyCastle::Asn1::Asn1OctetStringParser* GetNextParser();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x16FA744
    // Implemented from: Org.BouncyCastle.Utilities.IO.BaseInputStream
    // Base method: System.Int32 BaseInputStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Int32 ReadByte()
    // Offset: 0x16FAA48
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
  }; // Org.BouncyCastle.Asn1.ConstructedOctetStream
  #pragma pack(pop)
  static check_size<sizeof(ConstructedOctetStream), 64 + sizeof(System::IO::Stream*)> __Org_BouncyCastle_Asn1_ConstructedOctetStreamSizeCheck;
  static_assert(sizeof(ConstructedOctetStream) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::ConstructedOctetStream*, "Org.BouncyCastle.Asn1", "ConstructedOctetStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::ConstructedOctetStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser
// Il2CppName: GetNextParser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1OctetStringParser* (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::ConstructedOctetStream*), "GetNextParser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::ConstructedOctetStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::Read)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::ConstructedOctetStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::ConstructedOctetStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
