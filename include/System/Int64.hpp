// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Int64
  struct Int64;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Int64, "System", "Int64");
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Int64
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 103F40C
  struct Int64/*, public ::System::ValueType, public ::System::IComparable_1<int64_t>, public ::System::IEquatable_1<int64_t>, public ::System::IComparable, public ::System::IConvertible, public ::System::IFormattable*/ {
    public:
    public:
    // System.Int64 m_value
    // Size: 0x8
    // Offset: 0x0
    int64_t m_value;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: Int64
    constexpr Int64(int64_t m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<int64_t>
    operator ::System::IComparable_1<int64_t>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<int64_t>*>(this);
    }
    // Creating interface conversion operator: i_IComparable_1_int64_t
    inline ::System::IComparable_1<int64_t>* i_IComparable_1_int64_t() noexcept {
      return reinterpret_cast<::System::IComparable_1<int64_t>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<int64_t>
    operator ::System::IEquatable_1<int64_t>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<int64_t>*>(this);
    }
    // Creating interface conversion operator: i_IEquatable_1_int64_t
    inline ::System::IEquatable_1<int64_t>* i_IEquatable_1_int64_t() noexcept {
      return reinterpret_cast<::System::IEquatable_1<int64_t>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: i_IComparable
    inline ::System::IComparable* i_IComparable() noexcept {
      return reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IConvertible
    operator ::System::IConvertible() noexcept {
      return *reinterpret_cast<::System::IConvertible*>(this);
    }
    // Creating interface conversion operator: i_IConvertible
    inline ::System::IConvertible* i_IConvertible() noexcept {
      return reinterpret_cast<::System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating interface conversion operator: i_IFormattable
    inline ::System::IFormattable* i_IFormattable() noexcept {
      return reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Int64 MaxValue
    static constexpr const int64_t MaxValue = 9223372036854775807;
    // Get static field: static public System.Int64 MaxValue
    static int64_t _get_MaxValue();
    // Set static field: static public System.Int64 MaxValue
    static void _set_MaxValue(int64_t value);
    // static field const value: static public System.Int64 MinValue
    static constexpr const int64_t MinValue = -9223372036854775807 - 1;
    // Get static field: static public System.Int64 MinValue
    static int64_t _get_MinValue();
    // Set static field: static public System.Int64 MinValue
    static void _set_MinValue(int64_t value);
    // Get instance field reference: System.Int64 m_value
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_value();
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x1B92AAC
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Int64 value)
    // Offset: 0x1B92B90
    int CompareTo(int64_t value);
    // public System.Boolean Equals(System.Int64 obj)
    // Offset: 0x1B92C34
    bool Equals(int64_t obj);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0x1B92D00
    ::StringW ToString(::System::IFormatProvider* provider);
    // public System.String ToString(System.String format)
    // Offset: 0x1B92D34
    ::StringW ToString(::StringW format);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0x1B92D68
    ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);
    // static public System.Int64 Parse(System.String s)
    // Offset: 0x1B92DA0
    static int64_t Parse(::StringW s);
    // static public System.Int64 Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x1B92F3C
    static int64_t Parse(::StringW s, ::System::IFormatProvider* provider);
    // static public System.Int64 Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x1B92F70
    static int64_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);
    // static public System.Boolean TryParse(System.String s, out System.Int64 result)
    // Offset: 0x1B92FC0
    static bool TryParse(::StringW s, ByRef<int64_t> result);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, out System.Int64 result)
    // Offset: 0x1B93128
    static bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<int64_t> result);
    // public System.TypeCode GetTypeCode()
    // Offset: 0x1B93180
    ::System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0x1B93188
    bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0x1B931F4
    ::Il2CppChar System_IConvertible_ToChar(::System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0x1B93260
    int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0x1B932CC
    uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0x1B93338
    int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0x1B933A4
    uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0x1B93410
    int System_IConvertible_ToInt32(::System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0x1B9347C
    uint System_IConvertible_ToUInt32(::System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0x1B934E8
    int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0x1B934F0
    uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0x1B9355C
    float System_IConvertible_ToSingle(::System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0x1B935C8
    double System_IConvertible_ToDouble(::System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0x1B93634
    ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0x1B936A0
    ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0x1B9378C
    ::Il2CppObject* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1B92BAC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B92C44
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1B92C50
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Int64
  #pragma pack(pop)
  static check_size<sizeof(Int64), 0 + sizeof(int64_t)> __System_Int64SizeCheck;
  static_assert(sizeof(Int64) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Int64::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Int64::*)(::Il2CppObject*)>(&System::Int64::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Int64::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Int64::*)(int64_t)>(&System::Int64::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Int64::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Int64::*)(int64_t)>(&System::Int64::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Int64::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::ToString)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Int64::*)(::StringW)>(&System::Int64::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::Int64::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Int64::*)(::StringW, ::System::IFormatProvider*)>(&System::Int64::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: System::Int64::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::StringW)>(&System::Int64::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Int64::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::StringW, ::System::IFormatProvider*)>(&System::Int64::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, provider});
  }
};
// Writing MetadataGetter for method: System::Int64::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(&System::Int64::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, provider});
  }
};
// Writing MetadataGetter for method: System::Int64::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int64_t>)>(&System::Int64::TryParse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, result});
  }
};
// Writing MetadataGetter for method: System::Int64::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ByRef<int64_t>)>(&System::Int64::TryParse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, provider, result});
  }
};
// Writing MetadataGetter for method: System::Int64::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (System::Int64::*)()>(&System::Int64::GetTypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToBoolean)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToChar)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToSByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToUInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToUInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToUInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToSingle)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToDouble)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToDecimal)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Int64::*)(::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToDateTime)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Int64::*)(::System::Type*, ::System::IFormatProvider*)>(&System::Int64::System_IConvertible_ToType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "System.IConvertible.ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, provider});
  }
};
// Writing MetadataGetter for method: System::Int64::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Int64::*)(::Il2CppObject*)>(&System::Int64::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Int64::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Int64::*)()>(&System::Int64::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Int64::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Int64::*)()>(&System::Int64::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Int64), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
