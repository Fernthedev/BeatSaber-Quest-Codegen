// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: BitMask128
#include "GlobalNamespace/BitMask128.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
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
template<class T>
struct Array;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: SongPackMask
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct SongPackMask/*, public System::ValueType, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::SongPackMask>, public System::IEquatable_1<GlobalNamespace::SongPackMask>*/ {
    public:
    // private readonly BitMask128 _bloomFilter
    // Size: 0x10
    // Offset: 0x0
    GlobalNamespace::BitMask128 bloomFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BitMask128) == 0x10);
    // Creating value type constructor for type: SongPackMask
    constexpr SongPackMask(GlobalNamespace::BitMask128 bloomFilter_ = {}) noexcept : bloomFilter{bloomFilter_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::SongPackMask>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::SongPackMask>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::SongPackMask>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::SongPackMask>
    operator System::IEquatable_1<GlobalNamespace::SongPackMask>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::SongPackMask>*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::BitMask128
    constexpr operator GlobalNamespace::BitMask128() const noexcept {
      return bloomFilter;
    }
    // static field const value: static private System.String kToStringPrefix
    static constexpr const char* kToStringPrefix = "[SongPackMask ";
    // Get static field: static private System.String kToStringPrefix
    static ::Il2CppString* _get_kToStringPrefix();
    // Set static field: static private System.String kToStringPrefix
    static void _set_kToStringPrefix(::Il2CppString* value);
    // static field const value: static private System.String kToStringSuffix
    static constexpr const char* kToStringSuffix = "]";
    // Get static field: static private System.String kToStringSuffix
    static ::Il2CppString* _get_kToStringSuffix();
    // Set static field: static private System.String kToStringSuffix
    static void _set_kToStringSuffix(::Il2CppString* value);
    // public System.Void .ctor(System.String packId)
    // Offset: 0xF2144C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    SongPackMask(::Il2CppString* packId) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPackMask::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packId)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, packId);
    }
    // private System.Void .ctor(BitMask128 bloomFilter)
    // Offset: 0xF21454
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  SongPackMask(GlobalNamespace::BitMask128 bloomFilter)
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.String> packs)
    // Offset: 0xF2145C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    SongPackMask(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* packs) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPackMask::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packs)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, packs);
    }
    // static public SongPackMask get_all()
    // Offset: 0x234B488
    static GlobalNamespace::SongPackMask get_all();
    // public System.Boolean Contains(SongPackMask other)
    // Offset: 0xF21464
    bool Contains(GlobalNamespace::SongPackMask other);
    // public System.Int32 DifferenceFrom(SongPackMask other)
    // Offset: 0xF21480
    int DifferenceFrom(GlobalNamespace::SongPackMask other);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xF21488
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public SongPackMask CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xF21490
    GlobalNamespace::SongPackMask CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public SongPackMask Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x234B598
    static GlobalNamespace::SongPackMask Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.String ToShortString()
    // Offset: 0xF214A0
    ::Il2CppString* ToShortString();
    // public System.Byte[] ToBytes()
    // Offset: 0xF214A8
    ::Array<uint8_t>* ToBytes();
    // public System.Boolean Equals(SongPackMask other)
    // Offset: 0xF21504
    bool Equals(GlobalNamespace::SongPackMask other);
    // static public System.Boolean TryParse(System.String stringSerializedMask, out SongPackMask songPackMask)
    // Offset: 0x234B7D4
    static bool TryParse(::Il2CppString* stringSerializedMask, GlobalNamespace::SongPackMask& songPackMask);
    // static public SongPackMask Parse(System.String stringSerializedMask)
    // Offset: 0x234B8E0
    static GlobalNamespace::SongPackMask Parse(::Il2CppString* stringSerializedMask);
    // static public SongPackMask FromBytes(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x234B994
    static GlobalNamespace::SongPackMask FromBytes(::Array<uint8_t>* bytes, int offset);
    // public override System.String ToString()
    // Offset: 0xF21498
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xF214B0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF21528
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // SongPackMask
  #pragma pack(pop)
  static check_size<sizeof(SongPackMask), 0 + sizeof(GlobalNamespace::BitMask128)> __GlobalNamespace_SongPackMaskSizeCheck;
  static_assert(sizeof(SongPackMask) == 0x10);
  // static public SongPackMask op_BitwiseOr(SongPackMask a, SongPackMask b)
  // Offset: 0x234B494
  GlobalNamespace::SongPackMask operator|(const GlobalNamespace::SongPackMask& a, const GlobalNamespace::SongPackMask& b);
  // static public SongPackMask op_BitwiseAnd(SongPackMask a, SongPackMask b)
  // Offset: 0x234B4A0
  GlobalNamespace::SongPackMask operator&(const GlobalNamespace::SongPackMask& a, const GlobalNamespace::SongPackMask& b);
  // static public System.Boolean op_Equality(SongPackMask a, SongPackMask b)
  // Offset: 0x234B4AC
  bool operator ==(const GlobalNamespace::SongPackMask& a, const GlobalNamespace::SongPackMask& b);
  // static public System.Boolean op_Inequality(SongPackMask a, SongPackMask b)
  // Offset: 0x234B4C4
  bool operator !=(const GlobalNamespace::SongPackMask& a, const GlobalNamespace::SongPackMask& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMask, "", "SongPackMask");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::SongPackMask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::SongPackMask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::SongPackMask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::get_all
// Il2CppName: get_all
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (*)()>(&GlobalNamespace::SongPackMask::get_all)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "get_all", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SongPackMask::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::SongPackMask::Contains)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::DifferenceFrom
// Il2CppName: DifferenceFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SongPackMask::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::SongPackMask::DifferenceFrom)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "DifferenceFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPackMask::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::SongPackMask::Serialize)> {
  const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::SongPackMask::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::SongPackMask::CreateFromSerializedData)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::SongPackMask::Deserialize)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::ToShortString
// Il2CppName: ToShortString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SongPackMask::*)()>(&GlobalNamespace::SongPackMask::ToShortString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "ToShortString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::ToBytes
// Il2CppName: ToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (GlobalNamespace::SongPackMask::*)()>(&GlobalNamespace::SongPackMask::ToBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "ToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SongPackMask::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::SongPackMask::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, GlobalNamespace::SongPackMask&)>(&GlobalNamespace::SongPackMask::TryParse)> {
  const MethodInfo* get() {
    static auto* stringSerializedMask = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringSerializedMask, songPackMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (*)(::Il2CppString*)>(&GlobalNamespace::SongPackMask::Parse)> {
  const MethodInfo* get() {
    static auto* stringSerializedMask = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringSerializedMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::FromBytes
// Il2CppName: FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (*)(::Array<uint8_t>*, int)>(&GlobalNamespace::SongPackMask::FromBytes)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SongPackMask::*)()>(&GlobalNamespace::SongPackMask::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SongPackMask::*)()>(&GlobalNamespace::SongPackMask::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SongPackMask::*)(::Il2CppObject*)>(&GlobalNamespace::SongPackMask::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMask), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::operator|
// Il2CppName: op_BitwiseOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::operator&
// Il2CppName: op_BitwiseAnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SongPackMask::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
