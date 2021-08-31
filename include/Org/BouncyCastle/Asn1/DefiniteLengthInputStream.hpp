// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.LimitedInputStream
#include "Org/BouncyCastle/Asn1/LimitedInputStream.hpp"
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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DefiniteLengthInputStream
  // [TokenAttribute] Offset: FFFFFFFF
  class DefiniteLengthInputStream : public Org::BouncyCastle::Asn1::LimitedInputStream {
    public:
    // private readonly System.Int32 _originalLength
    // Size: 0x4
    // Offset: 0x3C
    int originalLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _remaining
    // Size: 0x4
    // Offset: 0x40
    int remaining;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DefiniteLengthInputStream
    DefiniteLengthInputStream(int originalLength_ = {}, int remaining_ = {}) noexcept : originalLength{originalLength_}, remaining{remaining_} {}
    // Get static field: static private readonly System.Byte[] EmptyBytes
    static ::Array<uint8_t>* _get_EmptyBytes();
    // Set static field: static private readonly System.Byte[] EmptyBytes
    static void _set_EmptyBytes(::Array<uint8_t>* value);
    // Get instance field: private readonly System.Int32 _originalLength
    int _get__originalLength();
    // Set instance field: private readonly System.Int32 _originalLength
    void _set__originalLength(int value);
    // Get instance field: private System.Int32 _remaining
    int _get__remaining();
    // Set instance field: private System.Int32 _remaining
    void _set__remaining(int value);
    // System.Int32 get_Remaining()
    // Offset: 0x1734924
    int get_Remaining();
    // System.Void .ctor(System.IO.Stream inStream, System.Int32 length, System.Int32 limit)
    // Offset: 0x17272F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefiniteLengthInputStream* New_ctor(System::IO::Stream* inStream, int length, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DefiniteLengthInputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefiniteLengthInputStream*, creationType>(inStream, length, limit)));
    }
    // System.Void ReadAllIntoByteArray(System.Byte[] buf)
    // Offset: 0x17293B8
    void ReadAllIntoByteArray(::Array<uint8_t>* buf);
    // System.Byte[] ToArray()
    // Offset: 0x17273E0
    ::Array<uint8_t>* ToArray();
    // static private System.Void .cctor()
    // Offset: 0x1734D44
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.cctor()
    static void _cctor();
    // public override System.Int32 ReadByte()
    // Offset: 0x173492C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Int32 Read(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x1734B10
    // Implemented from: Org.BouncyCastle.Utilities.IO.BaseInputStream
    // Base method: System.Int32 BaseInputStream::Read(System.Byte[] buf, System.Int32 off, System.Int32 len)
    int Read(::Array<uint8_t>* buf, int off, int len);
  }; // Org.BouncyCastle.Asn1.DefiniteLengthInputStream
  #pragma pack(pop)
  static check_size<sizeof(DefiniteLengthInputStream), 64 + sizeof(int)> __Org_BouncyCastle_Asn1_DefiniteLengthInputStreamSizeCheck;
  static_assert(sizeof(DefiniteLengthInputStream) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, "Org.BouncyCastle.Asn1", "DefiniteLengthInputStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DefiniteLengthInputStream::get_Remaining
// Il2CppName: get_Remaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)()>(&Org::BouncyCastle::Asn1::DefiniteLengthInputStream::get_Remaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*), "get_Remaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DefiniteLengthInputStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ReadAllIntoByteArray
// Il2CppName: ReadAllIntoByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ReadAllIntoByteArray)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*), "ReadAllIntoByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)()>(&Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DefiniteLengthInputStream::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::DefiniteLengthInputStream::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)()>(&Org::BouncyCastle::Asn1::DefiniteLengthInputStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DefiniteLengthInputStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DefiniteLengthInputStream::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Asn1::DefiniteLengthInputStream::Read)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DefiniteLengthInputStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, off, len});
  }
};
