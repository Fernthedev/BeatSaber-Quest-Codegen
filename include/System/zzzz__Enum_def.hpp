#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Enum)
namespace System {
struct Decimal;
}
namespace System {
struct TypeCode;
}
namespace System {
class Array;
}
namespace System {
class Type;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
struct __Enum__ParseFailureKind;
}
namespace System {
struct __Enum__EnumResult;
}
namespace System {
class IComparable;
}
namespace System {
class RuntimeType;
}
namespace System {
class IConvertible;
}
namespace System {
class __Enum__ValuesAndNames;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class Enum;
}
namespace System {
class __Enum__ValuesAndNames;
}
namespace System {
struct __Enum__EnumResult;
}
// Write type traits
MARK_REF_PTR_T(::System::Enum);
MARK_REF_PTR_T(::System::__Enum__ValuesAndNames);
MARK_VAL_T(::System::__Enum__EnumResult);
// Type: ::EnumResult
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2557))
// CS Name: ::Enum::EnumResult
struct CORDL_TYPE __Enum__EnumResult : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field parsedEnum offset 0x0
 __declspec(property(get=__get_parsedEnum, put=__set_parsedEnum)) ::System::Object*  parsedEnum;

/// @brief Field canThrow offset 0x8
 __declspec(property(get=__get_canThrow, put=__set_canThrow)) bool  canThrow;

/// @brief Field m_failure offset 0xc
 __declspec(property(get=__get_m_failure, put=__set_m_failure)) ::System::__Enum__ParseFailureKind  m_failure;

/// @brief Field m_failureMessageID offset 0x10
 __declspec(property(get=__get_m_failureMessageID, put=__set_m_failureMessageID)) ::StringW  m_failureMessageID;

/// @brief Field m_failureParameter offset 0x18
 __declspec(property(get=__get_m_failureParameter, put=__set_m_failureParameter)) ::StringW  m_failureParameter;

/// @brief Field m_failureMessageFormatArgument offset 0x20
 __declspec(property(get=__get_m_failureMessageFormatArgument, put=__set_m_failureMessageFormatArgument)) ::System::Object*  m_failureMessageFormatArgument;

/// @brief Field m_innerException offset 0x28
 __declspec(property(get=__get_m_innerException, put=__set_m_innerException)) ::System::Exception*  m_innerException;

constexpr void __set_parsedEnum(::System::Object*  value) ;

constexpr ::System::Object* __get_parsedEnum() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_parsedEnum() const;

constexpr void __set_canThrow(bool  value) ;

constexpr bool& __get_canThrow() ;

constexpr bool const& __get_canThrow() const;

constexpr void __set_m_failure(::System::__Enum__ParseFailureKind  value) ;

constexpr ::System::__Enum__ParseFailureKind& __get_m_failure() ;

constexpr ::System::__Enum__ParseFailureKind const& __get_m_failure() const;

constexpr void __set_m_failureMessageID(::StringW  value) ;

constexpr ::StringW& __get_m_failureMessageID() ;

constexpr ::StringW const& __get_m_failureMessageID() const;

constexpr void __set_m_failureParameter(::StringW  value) ;

constexpr ::StringW& __get_m_failureParameter() ;

constexpr ::StringW const& __get_m_failureParameter() const;

constexpr void __set_m_failureMessageFormatArgument(::System::Object*  value) ;

constexpr ::System::Object* __get_m_failureMessageFormatArgument() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_failureMessageFormatArgument() const;

constexpr void __set_m_innerException(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_innerException() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_innerException() const;

/// @brief Method Init addr 0x25e2a24 size 0x64 virtual false final false
inline void Init(bool  canMethodThrow) ;

/// @brief Method SetFailure addr 0x25e387c size 0x10 virtual false final false
inline void SetFailure(::System::Exception*  unhandledException) ;

/// @brief Method SetFailure addr 0x25e327c size 0x3c virtual false final false
inline void SetFailure(::System::__Enum__ParseFailureKind  failure, ::StringW  failureParameter) ;

/// @brief Method SetFailure addr 0x25e32b8 size 0x40 virtual false final false
inline void SetFailure(::System::__Enum__ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument) ;

/// @brief Method GetEnumParseException addr 0x25e3100 size 0x17c virtual false final false
inline ::System::Exception* GetEnumParseException() ;

// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_failure", ty: "::System::__Enum__ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "m_innerException", ty: "::System::Exception*", modifiers: "", def_value: None }]
constexpr __Enum__EnumResult(::System::Object*  parsedEnum, bool  canThrow, ::System::__Enum__ParseFailureKind  m_failure, ::StringW  m_failureMessageID, ::StringW  m_failureParameter, ::System::Object*  m_failureMessageFormatArgument, ::System::Exception*  m_innerException) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Enum__EnumResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Enum__EnumResult()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Enum__EnumResult, 0x30>, "Size mismatch!");

} // namespace end def System
// Type: ::ValuesAndNames
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2558))
// CS Name: ::Enum::ValuesAndNames*
class CORDL_TYPE __Enum__ValuesAndNames : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Values offset 0x10
 __declspec(property(get=__get_Values, put=__set_Values)) ::ArrayW<uint64_t,::Array<uint64_t>*>  Values;

/// @brief Field Names offset 0x18
 __declspec(property(get=__get_Names, put=__set_Names)) ::ArrayW<::StringW,::Array<::StringW>*>  Names;

constexpr void __set_Values(::ArrayW<uint64_t,::Array<uint64_t>*>  value) ;

constexpr ::ArrayW<uint64_t,::Array<uint64_t>*>& __get_Values() ;

constexpr ::ArrayW<uint64_t,::Array<uint64_t>*> const& __get_Values() const;

constexpr void __set_Names(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_Names() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_Names() const;

static inline ::System::__Enum__ValuesAndNames* New_ctor(::ArrayW<uint64_t,::Array<uint64_t>*>  values, ::ArrayW<::StringW,::Array<::StringW>*>  names) ;

/// @brief Method .ctor addr 0x25e1ec0 size 0x2c virtual false final false
inline void _ctor(::ArrayW<uint64_t,::Array<uint64_t>*>  values, ::ArrayW<::StringW,::Array<::StringW>*>  names) ;

// Ctor Parameters [CppParam { name: "", ty: "__Enum__ValuesAndNames", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Enum__ValuesAndNames(__Enum__ValuesAndNames && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Enum__ValuesAndNames", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Enum__ValuesAndNames(__Enum__ValuesAndNames const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Enum__ValuesAndNames()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Enum__ValuesAndNames, 0x20>, "Size mismatch!");

} // namespace end def System
// Type: System::Enum
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2559))
// CS Name: ::System::Enum*
class CORDL_TYPE Enum : public ::System::ValueType {
public:
// Declarations
using ValuesAndNames = ::System::__Enum__ValuesAndNames;

using EnumResult = ::System::__Enum__EnumResult;

using ParseFailureKind = ::System::__Enum__ParseFailureKind;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::ValueType)]{};

/// @brief Field enumSeperator offset 0x0
static constexpr ::ConstString  enumSeperator{u", "};

// Ctor Parameters [CppParam { name: "", ty: "Enum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Enum(Enum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Enum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Enum(Enum const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Enum()  = default;
public:


// Fields

// Static field enumSeperatorCharArray


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Enum, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Enum);
DEFINE_IL2CPP_ARG_TYPE(::System::Enum*, "System", "Enum");
NEED_NO_BOX(::System::__Enum__ValuesAndNames);
DEFINE_IL2CPP_ARG_TYPE(::System::__Enum__ValuesAndNames*, "System", "Enum/ValuesAndNames");
DEFINE_IL2CPP_ARG_TYPE(::System::__Enum__EnumResult, "System", "Enum/EnumResult");
