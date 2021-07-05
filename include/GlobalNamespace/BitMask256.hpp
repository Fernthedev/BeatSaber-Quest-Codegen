// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
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
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BitMask256
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BitMask256/*, public System::ValueType, public GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask256>, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask256>*/ {
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
    // private readonly System.UInt64 _d2
    // Size: 0x8
    // Offset: 0x10
    uint64_t d2;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.UInt64 _d3
    // Size: 0x8
    // Offset: 0x18
    uint64_t d3;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: BitMask256
    constexpr BitMask256(uint64_t d0_ = {}, uint64_t d1_ = {}, uint64_t d2_ = {}, uint64_t d3_ = {}) noexcept : d0{d0_}, d1{d1_}, d2{d2_}, d3{d3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask256>
    operator GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask256>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask256>*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask256>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask256>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask256>*>(this);
    }
    // public System.Int32 get_bitCount()
    // Offset: 0xF20D54
    int get_bitCount();
    // static public BitMask256 get_maxValue()
    // Offset: 0x23458E0
    static GlobalNamespace::BitMask256 get_maxValue();
    // public System.Void .ctor(System.UInt64 d0, System.UInt64 d1, System.UInt64 d2, System.UInt64 d3)
    // Offset: 0xF20D5C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  BitMask256(uint64_t d0, uint64_t d1, uint64_t d2, uint64_t d3)
    // public System.Void .ctor(System.UInt64 value)
    // Offset: 0xF20D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    BitMask256(uint64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BitMask256::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public BitMask256 SetBits(System.Int32 offset, System.UInt64 bits)
    // Offset: 0xF20D74
    GlobalNamespace::BitMask256 SetBits(int offset, uint64_t bits);
    // public System.UInt64 GetBits(System.Int32 offset, System.Int32 count)
    // Offset: 0xF20D7C
    uint64_t GetBits(int offset, int count);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xF20D84
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public BitMask256 CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xF20D8C
    GlobalNamespace::BitMask256 CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public BitMask256 Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2345D3C
    static GlobalNamespace::BitMask256 Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(BitMask256 other)
    // Offset: 0xF20D9C
    bool Equals(GlobalNamespace::BitMask256 other);
    // public override System.String ToString()
    // Offset: 0xF20D94
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF20DE8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF20DF0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // BitMask256
  #pragma pack(pop)
  static check_size<sizeof(BitMask256), 24 + sizeof(uint64_t)> __GlobalNamespace_BitMask256SizeCheck;
  static_assert(sizeof(BitMask256) == 0x20);
  // static public BitMask256 op_BitwiseOr(in BitMask256 a, in BitMask256 b)
  // Offset: 0x2345B4C
  GlobalNamespace::BitMask256 operator|(const GlobalNamespace::BitMask256&& a, const GlobalNamespace::BitMask256&& b);
  // static public BitMask256 op_BitwiseAnd(in BitMask256 a, in BitMask256 b)
  // Offset: 0x2345B64
  GlobalNamespace::BitMask256 operator&(const GlobalNamespace::BitMask256&& a, const GlobalNamespace::BitMask256&& b);
  // static public BitMask256 op_ExclusiveOr(in BitMask256 a, in BitMask256 b)
  // Offset: 0x2345B7C
  GlobalNamespace::BitMask256 operator^(const GlobalNamespace::BitMask256&& a, const GlobalNamespace::BitMask256&& b);
  // static public BitMask256 op_LeftShift(in BitMask256 a, System.Int32 bits)
  // Offset: 0x2345B94
  GlobalNamespace::BitMask256 operator<<(const GlobalNamespace::BitMask256&& a, const int& bits);
  // static public BitMask256 op_RightShift(in BitMask256 a, System.Int32 bits)
  // Offset: 0x2345BE0
  GlobalNamespace::BitMask256 operator>>(const GlobalNamespace::BitMask256&& a, const int& bits);
  // static public System.Boolean op_Equality(in BitMask256 a, in BitMask256 b)
  // Offset: 0x2345C2C
  bool operator ==(const GlobalNamespace::BitMask256&& a, const GlobalNamespace::BitMask256&& b);
  // static public System.Boolean op_Inequality(in BitMask256 a, in BitMask256 b)
  // Offset: 0x2345C78
  bool operator !=(const GlobalNamespace::BitMask256&& a, const GlobalNamespace::BitMask256&& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMask256, "", "BitMask256");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::get_bitCount
// Il2CppName: get_bitCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BitMask256::*)()>(&GlobalNamespace::BitMask256::get_bitCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "get_bitCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::get_maxValue
// Il2CppName: get_maxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask256 (*)()>(&GlobalNamespace::BitMask256::get_maxValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "get_maxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::BitMask256
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::BitMask256
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::SetBits
// Il2CppName: SetBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask256 (GlobalNamespace::BitMask256::*)(int, uint64_t)>(&GlobalNamespace::BitMask256::SetBits)> {
  const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "SetBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, bits});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::GetBits
// Il2CppName: GetBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::BitMask256::*)(int, int)>(&GlobalNamespace::BitMask256::GetBits)> {
  const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "GetBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, count});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BitMask256::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BitMask256::Serialize)> {
  const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask256 (GlobalNamespace::BitMask256::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BitMask256::CreateFromSerializedData)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask256 (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BitMask256::Deserialize)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BitMask256::*)(GlobalNamespace::BitMask256)>(&GlobalNamespace::BitMask256::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "BitMask256")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BitMask256::*)()>(&GlobalNamespace::BitMask256::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BitMask256::*)(::Il2CppObject*)>(&GlobalNamespace::BitMask256::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BitMask256::*)()>(&GlobalNamespace::BitMask256::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMask256), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::operator|
// Il2CppName: op_BitwiseOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::operator&
// Il2CppName: op_BitwiseAnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::operator^
// Il2CppName: op_ExclusiveOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::operator<<
// Il2CppName: op_LeftShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::operator>>
// Il2CppName: op_RightShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BitMask256::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
