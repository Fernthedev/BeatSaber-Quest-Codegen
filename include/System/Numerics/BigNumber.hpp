// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Numerics
namespace System::Numerics {
  // Forward declaring type: BigInteger
  struct BigInteger;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArgumentException
  class ArgumentException;
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
}
// Completed forward declares
// Type namespace: System.Numerics
namespace System::Numerics {
  // Forward declaring type: BigNumber
  class BigNumber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Numerics::BigNumber);
DEFINE_IL2CPP_ARG_TYPE(System::Numerics::BigNumber*, "System.Numerics", "BigNumber");
// Type namespace: System.Numerics
namespace System::Numerics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Numerics.BigNumber
  // [TokenAttribute] Offset: FFFFFFFF
  class BigNumber : public ::Il2CppObject {
    public:
    // Nested type: System::Numerics::BigNumber::BigNumberBuffer
    struct BigNumberBuffer;
    // static System.Boolean TryValidateParseStyleInteger(System.Globalization.NumberStyles style, out System.ArgumentException e)
    // Offset: 0x29F0E0C
    static bool TryValidateParseStyleInteger(System::Globalization::NumberStyles style, ByRef<System::ArgumentException*> e);
    // static System.Boolean TryParseBigInteger(System.ReadOnlySpan`1<System.Char> value, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Numerics.BigInteger result)
    // Offset: 0x29F0EE8
    static bool TryParseBigInteger(System::ReadOnlySpan_1<::Il2CppChar> value, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, ByRef<System::Numerics::BigInteger> result);
    // static System.Numerics.BigInteger ParseBigInteger(System.String value, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x29ED514
    static System::Numerics::BigInteger ParseBigInteger(::StringW value, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // static private System.ReadOnlySpan`1<System.Char> AsReadOnlySpan(System.String s)
    // Offset: 0x29F1460
    static System::ReadOnlySpan_1<::Il2CppChar> AsReadOnlySpan(::StringW s);
    // static System.Numerics.BigInteger ParseBigInteger(System.ReadOnlySpan`1<System.Char> value, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x29F14DC
    static System::Numerics::BigInteger ParseBigInteger(System::ReadOnlySpan_1<::Il2CppChar> value, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // static private System.Boolean HexNumberToBigInteger(ref System.Numerics.BigNumber/System.Numerics.BigNumberBuffer number, ref System.Numerics.BigInteger value)
    // Offset: 0x29F10B4
    static bool HexNumberToBigInteger(ByRef<System::Numerics::BigNumber::BigNumberBuffer> number, ByRef<System::Numerics::BigInteger> value);
    // static private System.Boolean NumberToBigInteger(ref System.Numerics.BigNumber/System.Numerics.BigNumberBuffer number, ref System.Numerics.BigInteger value)
    // Offset: 0x29F1268
    static bool NumberToBigInteger(ByRef<System::Numerics::BigNumber::BigNumberBuffer> number, ByRef<System::Numerics::BigInteger> value);
    // static System.Char ParseFormatSpecifier(System.String format, out System.Int32 digits)
    // Offset: 0x29F163C
    static ::Il2CppChar ParseFormatSpecifier(::StringW format, ByRef<int> digits);
    // static private System.String FormatBigIntegerToHexString(System.Numerics.BigInteger value, System.Char format, System.Int32 digits, System.Globalization.NumberFormatInfo info)
    // Offset: 0x29F17E8
    static ::StringW FormatBigIntegerToHexString(System::Numerics::BigInteger value, ::Il2CppChar format, int digits, System::Globalization::NumberFormatInfo* info);
    // static System.String FormatBigInteger(System.Numerics.BigInteger value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x29EE018
    static ::StringW FormatBigInteger(System::Numerics::BigInteger value, ::StringW format, System::Globalization::NumberFormatInfo* info);
  }; // System.Numerics.BigNumber
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Numerics::BigNumber::TryValidateParseStyleInteger
// Il2CppName: TryValidateParseStyleInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Globalization::NumberStyles, ByRef<System::ArgumentException*>)>(&System::Numerics::BigNumber::TryValidateParseStyleInteger)> {
  static const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "ArgumentException")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "TryValidateParseStyleInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style, e});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::TryParseBigInteger
// Il2CppName: TryParseBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<::Il2CppChar>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo*, ByRef<System::Numerics::BigInteger>)>(&System::Numerics::BigNumber::TryParseBigInteger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "TryParseBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, style, info, result});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::ParseBigInteger
// Il2CppName: ParseBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(::StringW, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo*)>(&System::Numerics::BigNumber::ParseBigInteger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "ParseBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, style, info});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::AsReadOnlySpan
// Il2CppName: AsReadOnlySpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ReadOnlySpan_1<::Il2CppChar> (*)(::StringW)>(&System::Numerics::BigNumber::AsReadOnlySpan)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "AsReadOnlySpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::ParseBigInteger
// Il2CppName: ParseBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(System::ReadOnlySpan_1<::Il2CppChar>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo*)>(&System::Numerics::BigNumber::ParseBigInteger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "ParseBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, style, info});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::HexNumberToBigInteger
// Il2CppName: HexNumberToBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::Numerics::BigNumber::BigNumberBuffer>, ByRef<System::Numerics::BigInteger>)>(&System::Numerics::BigNumber::HexNumberToBigInteger)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigNumber/BigNumberBuffer")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "HexNumberToBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number, value});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::NumberToBigInteger
// Il2CppName: NumberToBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::Numerics::BigNumber::BigNumberBuffer>, ByRef<System::Numerics::BigInteger>)>(&System::Numerics::BigNumber::NumberToBigInteger)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigNumber/BigNumberBuffer")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "NumberToBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number, value});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::ParseFormatSpecifier
// Il2CppName: ParseFormatSpecifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::StringW, ByRef<int>)>(&System::Numerics::BigNumber::ParseFormatSpecifier)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "ParseFormatSpecifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, digits});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::FormatBigIntegerToHexString
// Il2CppName: FormatBigIntegerToHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Numerics::BigInteger, ::Il2CppChar, int, System::Globalization::NumberFormatInfo*)>(&System::Numerics::BigNumber::FormatBigIntegerToHexString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "FormatBigIntegerToHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, digits, info});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigNumber::FormatBigInteger
// Il2CppName: FormatBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Numerics::BigInteger, ::StringW, System::Globalization::NumberFormatInfo*)>(&System::Numerics::BigNumber::FormatBigInteger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigNumber*), "FormatBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, info});
  }
};
