// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Utilities.IO.BaseInputStream
#include "Org/BouncyCastle/Utilities/IO/BaseInputStream.hpp"
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
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.LimitedInputStream
  // [TokenAttribute] Offset: FFFFFFFF
  class LimitedInputStream : public Org::BouncyCastle::Utilities::IO::BaseInputStream {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // protected readonly System.IO.Stream _in
    // Size: 0x8
    // Offset: 0x30
    System::IO::Stream* in;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Int32 _limit
    // Size: 0x4
    // Offset: 0x38
    int limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LimitedInputStream
    LimitedInputStream(System::IO::Stream* in_ = {}, int limit_ = {}) noexcept : in{in_}, limit{limit_} {}
    // Get instance field: protected readonly System.IO.Stream _in
    System::IO::Stream* _get__in();
    // Set instance field: protected readonly System.IO.Stream _in
    void _set__in(System::IO::Stream* value);
    // Get instance field: private System.Int32 _limit
    int _get__limit();
    // Set instance field: private System.Int32 _limit
    void _set__limit(int value);
    // System.Int32 get_Limit()
    // Offset: 0x17AD224
    int get_Limit();
    // System.Void .ctor(System.IO.Stream inStream, System.Int32 limit)
    // Offset: 0x17AC75C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LimitedInputStream* New_ctor(System::IO::Stream* inStream, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::LimitedInputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LimitedInputStream*, creationType>(inStream, limit)));
    }
    // protected System.Void SetParentEofDetect(System.Boolean on)
    // Offset: 0x17AD22C
    void SetParentEofDetect(bool on);
  }; // Org.BouncyCastle.Asn1.LimitedInputStream
  #pragma pack(pop)
  static check_size<sizeof(LimitedInputStream), 56 + sizeof(int)> __Org_BouncyCastle_Asn1_LimitedInputStreamSizeCheck;
  static_assert(sizeof(LimitedInputStream) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::LimitedInputStream*, "Org.BouncyCastle.Asn1", "LimitedInputStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LimitedInputStream::get_Limit
// Il2CppName: get_Limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::LimitedInputStream::*)()>(&Org::BouncyCastle::Asn1::LimitedInputStream::get_Limit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LimitedInputStream*), "get_Limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LimitedInputStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::LimitedInputStream::SetParentEofDetect
// Il2CppName: SetParentEofDetect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::LimitedInputStream::*)(bool)>(&Org::BouncyCastle::Asn1::LimitedInputStream::SetParentEofDetect)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::LimitedInputStream*), "SetParentEofDetect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
