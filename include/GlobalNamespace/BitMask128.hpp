// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: IBitMask`1
#include "GlobalNamespace/IBitMask_1.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BitMask128
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BitMask128/*, public System::ValueType, public GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask128>, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask128>*/ {
    public:
    // private readonly System.UInt64 _d0
    // Size: 0x8
    // Offset: 0x0
    uint64_t d0;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.UInt64 _d1
    // Size: 0x8
    // Offset: 0x8
    uint64_t d1;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: BitMask128
    constexpr BitMask128(uint64_t d0_ = {}, uint64_t d1_ = {}) noexcept : d0{d0_}, d1{d1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask128>
    operator GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask128>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask128>*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask128>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask128>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask128>*>(this);
    }
    // Get instance field: private readonly System.UInt64 _d0
    uint64_t _get__d0();
    // Set instance field: private readonly System.UInt64 _d0
    void _set__d0(uint64_t value);
    // Get instance field: private readonly System.UInt64 _d1
    uint64_t _get__d1();
    // Set instance field: private readonly System.UInt64 _d1
    void _set__d1(uint64_t value);
    // public System.Int32 get_bitCount()
    // Offset: 0x237745C
    int get_bitCount();
    // static public BitMask128 get_maxValue()
    // Offset: 0x2377464
    static GlobalNamespace::BitMask128 get_maxValue();
    // public System.Void .ctor(System.UInt64 d0, System.UInt64 d1)
    // Offset: 0x2377470
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  BitMask128(uint64_t d0, uint64_t d1)
    // public System.Void .ctor(System.UInt64 value)
    // Offset: 0x2377478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    BitMask128(uint64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BitMask128::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public BitMask128 SetBits(System.Int32 offset, System.UInt64 bits)
    // Offset: 0x2377480
    GlobalNamespace::BitMask128 SetBits(int offset, uint64_t bits);
    // public System.UInt64 GetBits(System.Int32 offset, System.Int32 count)
    // Offset: 0x23774F0
    uint64_t GetBits(int offset, int count);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x23776C8
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public BitMask128 CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237770C
    GlobalNamespace::BitMask128 CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public BitMask128 Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2377714
    static GlobalNamespace::BitMask128 Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(BitMask128 other)
    // Offset: 0x23777EC
    bool Equals(GlobalNamespace::BitMask128 other);
    // public override System.String ToString()
    // Offset: 0x2377758
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2377810
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x23778A8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // BitMask128
  #pragma pack(pop)
  static check_size<sizeof(BitMask128), 8 + sizeof(uint64_t)> __GlobalNamespace_BitMask128SizeCheck;
  static_assert(sizeof(BitMask128) == 0x10);
  // static public BitMask128 op_BitwiseOr(in BitMask128 a, in BitMask128 b)
  // Offset: 0x23775B8
  GlobalNamespace::BitMask128 operator|(const GlobalNamespace::BitMask128&& a, const GlobalNamespace::BitMask128&& b);
  // static public BitMask128 op_BitwiseAnd(in BitMask128 a, in BitMask128 b)
  // Offset: 0x23775CC
  GlobalNamespace::BitMask128 operator&(const GlobalNamespace::BitMask128&& a, const GlobalNamespace::BitMask128&& b);
  // static public BitMask128 op_ExclusiveOr(in BitMask128 a, in BitMask128 b)
  // Offset: 0x23775E0
  GlobalNamespace::BitMask128 operator^(const GlobalNamespace::BitMask128&& a, const GlobalNamespace::BitMask128&& b);
  // static public BitMask128 op_LeftShift(in BitMask128 a, System.Int32 bits)
  // Offset: 0x23775F4
  GlobalNamespace::BitMask128 operator<<(const GlobalNamespace::BitMask128&& a, const int& bits);
  // static public BitMask128 op_RightShift(in BitMask128 a, System.Int32 bits)
  // Offset: 0x237762C
  GlobalNamespace::BitMask128 operator>>(const GlobalNamespace::BitMask128&& a, const int& bits);
  // static public System.Boolean op_Equality(in BitMask128 a, in BitMask128 b)
  // Offset: 0x2377664
  bool operator ==(const GlobalNamespace::BitMask128&& a, const GlobalNamespace::BitMask128&& b);
  // static public System.Boolean op_Inequality(in BitMask128 a, in BitMask128 b)
  // Offset: 0x2377690
  bool operator !=(const GlobalNamespace::BitMask128&& a, const GlobalNamespace::BitMask128&& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMask128, "", "BitMask128");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::get_bitCount
// Il2CppName: get_bitCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BitMask128::*)()>(&GlobalNamespace::BitMask128::get_bitCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "get_bitCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::get_maxValue
// Il2CppName: get_maxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask128 (*)()>(&GlobalNamespace::BitMask128::get_maxValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "get_maxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::BitMask128
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::BitMask128
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::SetBits
// Il2CppName: SetBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask128 (GlobalNamespace::BitMask128::*)(int, uint64_t)>(&GlobalNamespace::BitMask128::SetBits)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "SetBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, bits});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::GetBits
// Il2CppName: GetBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::BitMask128::*)(int, int)>(&GlobalNamespace::BitMask128::GetBits)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "GetBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, count});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitMask128::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BitMask128::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask128 (GlobalNamespace::BitMask128::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BitMask128::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask128 (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BitMask128::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BitMask128::*)(GlobalNamespace::BitMask128)>(&GlobalNamespace::BitMask128::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "BitMask128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BitMask128::*)()>(&GlobalNamespace::BitMask128::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BitMask128::*)(::Il2CppObject*)>(&GlobalNamespace::BitMask128::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BitMask128::*)()>(&GlobalNamespace::BitMask128::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask128), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::operator|
// Il2CppName: op_BitwiseOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::operator&
// Il2CppName: op_BitwiseAnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::operator^
// Il2CppName: op_ExclusiveOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::operator<<
// Il2CppName: op_LeftShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::operator>>
// Il2CppName: op_RightShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask128::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
