#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConvertUtils)
namespace Newtonsoft::Json::Utilities {
class TypeInformation;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__TypeConvertKey;
}
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
struct TimeSpan;
}
namespace Newtonsoft::Json::Utilities {
struct ParseResult;
}
namespace System {
struct Guid;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json::Utilities {
class __ConvertUtils____c__DisplayClass9_0;
}
namespace System {
class IConvertible;
}
namespace System {
class Type;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__ConvertResult;
}
namespace System {
class Object;
}
namespace System {
class Version;
}
namespace Newtonsoft::Json::Utilities {
template<typename T,typename TResult>
class MethodCall_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
class ConvertUtils;
}
namespace Newtonsoft::Json::Utilities {
class __ConvertUtils____c__DisplayClass9_0;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__TypeConvertKey;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ConvertUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0);
MARK_VAL_T(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey);
// Type: ::TypeConvertKey
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11873))
// CS Name: ::ConvertUtils::TypeConvertKey
struct CORDL_TYPE __ConvertUtils__TypeConvertKey : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _initialType offset 0x0
 __declspec(property(get=__get__initialType, put=__set__initialType)) ::System::Type*  _initialType;

/// @brief Field _targetType offset 0x8
 __declspec(property(get=__get__targetType, put=__set__targetType)) ::System::Type*  _targetType;

 __declspec(property(get=get_InitialType)) ::System::Type*  InitialType;

 __declspec(property(get=get_TargetType)) ::System::Type*  TargetType;

constexpr void __set__initialType(::System::Type*  value) ;

constexpr ::System::Type* __get__initialType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__initialType() const;

constexpr void __set__targetType(::System::Type*  value) ;

constexpr ::System::Type* __get__targetType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__targetType() const;

/// @brief Method get_InitialType addr 0x265ebc0 size 0x8 virtual false final false
inline ::System::Type* get_InitialType() ;

/// @brief Method get_TargetType addr 0x265ebc8 size 0x8 virtual false final false
inline ::System::Type* get_TargetType() ;

/// @brief Method .ctor addr 0x265d5f4 size 0x8 virtual false final false
inline void _ctor(::System::Type*  initialType, ::System::Type*  targetType) ;

/// @brief Method GetHashCode addr 0x265ebd0 size 0x48 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x265ec18 size 0x88 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x265eca0 size 0x24 virtual false final false
inline bool Equals(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  other) ;

// Ctor Parameters [CppParam { name: "_initialType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_targetType", ty: "::System::Type*", modifiers: "", def_value: None }]
constexpr __ConvertUtils__TypeConvertKey(::System::Type*  _initialType, ::System::Type*  _targetType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConvertUtils__TypeConvertKey(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConvertUtils__TypeConvertKey()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Type: ::ConvertResult
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11874))
// CS Name: ::ConvertUtils::ConvertResult
struct CORDL_TYPE __ConvertUtils__ConvertResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ConvertUtils__ConvertResult_Unwrapped
enum struct ____ConvertUtils__ConvertResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_CannotConvertNull = static_cast<int32_t>(0x1),
__E_NotInstantiableType = static_cast<int32_t>(0x2),
__E_NoValidConversion = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Success value: static_cast<int32_t>(0x0)
static ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult const Success;

/// @brief Field CannotConvertNull value: static_cast<int32_t>(0x1)
static ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult const CannotConvertNull;

/// @brief Field NotInstantiableType value: static_cast<int32_t>(0x2)
static ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult const NotInstantiableType;

/// @brief Field NoValidConversion value: static_cast<int32_t>(0x3)
static ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult const NoValidConversion;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ConvertUtils__ConvertResult_Unwrapped () const noexcept {
return std::bit_cast<____ConvertUtils__ConvertResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ConvertUtils__ConvertResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConvertUtils__ConvertResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConvertUtils__ConvertResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass9_0
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11875))
// CS Name: ::ConvertUtils::<>c__DisplayClass9_0*
class CORDL_TYPE __ConvertUtils____c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field call offset 0x10
 __declspec(property(get=__get_call, put=__set_call)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  call;

constexpr void __set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  value) ;

constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>* __get_call() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*> __get_call() const;

static inline ::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0* New_ctor() ;

/// @brief Method .ctor addr 0x265c338 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CreateCastConverter>b__0 addr 0x265ecc4 size 0xb4 virtual false final false
inline ::System::Object* _CreateCastConverter_b__0(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "", ty: "__ConvertUtils____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConvertUtils____c__DisplayClass9_0(__ConvertUtils____c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConvertUtils____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConvertUtils____c__DisplayClass9_0(__ConvertUtils____c__DisplayClass9_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConvertUtils____c__DisplayClass9_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ConvertUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11876))
// CS Name: ::Newtonsoft.Json.Utilities::ConvertUtils*
class CORDL_TYPE ConvertUtils : public ::System::Object {
public:
// Declarations
using __c__DisplayClass9_0 = ::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0;

using ConvertResult = ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult;

using TypeConvertKey = ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_TypeCodeMap(::System::Collections::Generic::Dictionary_2<::System::Type*,::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* getStaticF_TypeCodeMap() ;

static inline void setStaticF_PrimitiveTypeCodes(::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*,::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*>  value) ;

static inline ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*,::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*> getStaticF_PrimitiveTypeCodes() ;

static inline void setStaticF_CastConverters(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,::System::Func_2<::System::Object*,::System::Object*>*>*  value) ;

static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,::System::Func_2<::System::Object*,::System::Object*>*>* getStaticF_CastConverters() ;

/// @brief Method GetTypeCode addr 0x26575f8 size 0x68 virtual false final false
static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type*  t) ;

/// @brief Method GetTypeCode addr 0x265bc98 size 0x280 virtual false final false
static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type*  t, ByRef<bool>  isEnum) ;

/// @brief Method GetTypeInformation addr 0x2658878 size 0xec virtual false final false
static inline ::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible*  convertable) ;

/// @brief Method IsConvertible addr 0x265c018 size 0x94 virtual false final false
static inline bool IsConvertible(::System::Type*  t) ;

/// @brief Method ParseTimeSpan addr 0x265c0ac size 0x58 virtual false final false
static inline ::System::TimeSpan ParseTimeSpan(::StringW  input) ;

/// @brief Method CreateCastConverter addr 0x265c104 size 0x234 virtual false final false
static inline ::System::Func_2<::System::Object*,::System::Object*>* CreateCastConverter(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  t) ;

/// @brief Method Convert addr 0x265c340 size 0x274 virtual false final false
static inline ::System::Object* Convert(::System::Object*  initialValue, ::System::Globalization::CultureInfo*  culture, ::System::Type*  targetType) ;

/// @brief Method TryConvert addr 0x265cec4 size 0x108 virtual false final false
static inline bool TryConvert(::System::Object*  initialValue, ::System::Globalization::CultureInfo*  culture, ::System::Type*  targetType, ByRef<::System::Object*>  value) ;

/// @brief Method TryConvertInternal addr 0x265c5b4 size 0x910 virtual false final false
static inline ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult TryConvertInternal(::System::Object*  initialValue, ::System::Globalization::CultureInfo*  culture, ::System::Type*  targetType, ByRef<::System::Object*>  value) ;

/// @brief Method ConvertOrCast addr 0x265d474 size 0x170 virtual false final false
static inline ::System::Object* ConvertOrCast(::System::Object*  initialValue, ::System::Globalization::CultureInfo*  culture, ::System::Type*  targetType) ;

/// @brief Method EnsureTypeAssignable addr 0x265d240 size 0x1ec virtual false final false
static inline ::System::Object* EnsureTypeAssignable(::System::Object*  value, ::System::Type*  initialType, ::System::Type*  targetType) ;

/// @brief Method GetConverter addr 0x265d14c size 0x58 virtual false final false
static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type*  t) ;

/// @brief Method VersionTryParse addr 0x265d05c size 0xf0 virtual false final false
static inline bool VersionTryParse(::StringW  input, ByRef<::System::Version*>  result) ;

/// @brief Method IsInteger addr 0x265cfcc size 0x90 virtual false final false
static inline bool IsInteger(::System::Object*  value) ;

/// @brief Method Int32TryParse addr 0x265d5fc size 0x164 virtual false final false
static inline ::Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  start, int32_t  length, ByRef<int32_t>  value) ;

/// @brief Method Int64TryParse addr 0x265d760 size 0x158 virtual false final false
static inline ::Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  start, int32_t  length, ByRef<int64_t>  value) ;

/// @brief Method TryConvertGuid addr 0x265d8b8 size 0x138 virtual false final false
static inline bool TryConvertGuid(::StringW  s, ByRef<::System::Guid>  g) ;

/// @brief Method HexTextToInt addr 0x265d9f0 size 0xe0 virtual false final false
static inline int32_t HexTextToInt(::ArrayW<char16_t,::Array<char16_t>*>  text, int32_t  start, int32_t  end) ;

/// @brief Method HexCharToInt addr 0x265dad0 size 0xcc virtual false final false
static inline int32_t HexCharToInt(char16_t  ch) ;

// Ctor Parameters [CppParam { name: "", ty: "ConvertUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConvertUtils(ConvertUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConvertUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConvertUtils(ConvertUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConvertUtils()  = default;
public:


// Fields

// Static field TypeCodeMap

// Static field PrimitiveTypeCodes

// Static field CastConverters


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ConvertUtils, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult, "Newtonsoft.Json.Utilities", "ConvertUtils/ConvertResult");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ConvertUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ConvertUtils*, "Newtonsoft.Json.Utilities", "ConvertUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0*, "Newtonsoft.Json.Utilities", "ConvertUtils/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, "Newtonsoft.Json.Utilities", "ConvertUtils/TypeConvertKey");
