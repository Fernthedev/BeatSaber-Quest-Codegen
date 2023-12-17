#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo)
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
class __TimeZoneInfo____c__DisplayClass16_0;
}
namespace System {
struct DateTime;
}
namespace System::Globalization {
struct DaylightTimeStruct;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct __TimeZoneInfo__TZifType;
}
namespace System {
struct DayOfWeek;
}
namespace System {
class Object;
}
namespace System {
class __TimeZoneInfo____c;
}
namespace System {
class __TimeZoneInfo__CachedData;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace GlobalNamespace {
struct __Interop__Sys__DirectoryEntry;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct __TimeZoneInfo__TZVersion;
}
namespace System {
struct __TimeZoneInfo__TZifHead;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
struct __TimeZoneInfo__TransitionTime;
}
namespace System {
class __TimeZoneInfo__AdjustmentRule;
}
namespace System {
struct TimeZoneInfoOptions;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
struct DateTimeKind;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace System {
struct __TimeZoneInfo__TZVersion;
}
namespace System {
class TimeZoneInfo;
}
namespace System {
class __TimeZoneInfo__AdjustmentRule;
}
namespace System {
class __TimeZoneInfo__CachedData;
}
namespace System {
class __TimeZoneInfo____c;
}
namespace System {
class __TimeZoneInfo____c__DisplayClass16_0;
}
namespace System {
struct __TimeZoneInfo__TZifHead;
}
namespace System {
struct __TimeZoneInfo__TZifType;
}
namespace System {
struct __TimeZoneInfo__TransitionTime;
}
// Write type traits
MARK_VAL_T(::System::__TimeZoneInfo__TZVersion);
MARK_REF_PTR_T(::System::TimeZoneInfo);
MARK_REF_PTR_T(::System::__TimeZoneInfo__AdjustmentRule);
MARK_REF_PTR_T(::System::__TimeZoneInfo__CachedData);
MARK_REF_PTR_T(::System::__TimeZoneInfo____c);
MARK_REF_PTR_T(::System::__TimeZoneInfo____c__DisplayClass16_0);
MARK_VAL_T(::System::__TimeZoneInfo__TZifHead);
MARK_VAL_T(::System::__TimeZoneInfo__TZifType);
MARK_VAL_T(::System::__TimeZoneInfo__TransitionTime);
// Type: ::TZifType
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2313))
// CS Name: ::TimeZoneInfo::TZifType
struct CORDL_TYPE __TimeZoneInfo__TZifType : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field UtcOffset offset 0x0
 __declspec(property(get=__get_UtcOffset, put=__set_UtcOffset)) ::System::TimeSpan  UtcOffset;

/// @brief Field IsDst offset 0x8
 __declspec(property(get=__get_IsDst, put=__set_IsDst)) bool  IsDst;

/// @brief Field AbbreviationIndex offset 0x9
 __declspec(property(get=__get_AbbreviationIndex, put=__set_AbbreviationIndex)) uint8_t  AbbreviationIndex;

constexpr void __set_UtcOffset(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_UtcOffset() ;

constexpr ::System::TimeSpan const& __get_UtcOffset() const;

constexpr void __set_IsDst(bool  value) ;

constexpr bool& __get_IsDst() ;

constexpr bool const& __get_IsDst() const;

constexpr void __set_AbbreviationIndex(uint8_t  value) ;

constexpr uint8_t& __get_AbbreviationIndex() ;

constexpr uint8_t const& __get_AbbreviationIndex() const;

/// @brief Method .ctor addr 0x25186b0 size 0x140 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  index) ;

// Ctor Parameters [CppParam { name: "UtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __TimeZoneInfo__TZifType(::System::TimeSpan  UtcOffset, bool  IsDst, uint8_t  AbbreviationIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeZoneInfo__TZifType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeZoneInfo__TZifType()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__TZifType, 0x10>, "Size mismatch!");

} // namespace end def System
// Type: ::TZifHead
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2314))
// CS Name: ::TimeZoneInfo::TZifHead
struct CORDL_TYPE __TimeZoneInfo__TZifHead : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Magic offset 0x0
 __declspec(property(get=__get_Magic, put=__set_Magic)) uint32_t  Magic;

/// @brief Field Version offset 0x4
 __declspec(property(get=__get_Version, put=__set_Version)) ::System::__TimeZoneInfo__TZVersion  Version;

/// @brief Field IsGmtCount offset 0x8
 __declspec(property(get=__get_IsGmtCount, put=__set_IsGmtCount)) uint32_t  IsGmtCount;

/// @brief Field IsStdCount offset 0xc
 __declspec(property(get=__get_IsStdCount, put=__set_IsStdCount)) uint32_t  IsStdCount;

/// @brief Field LeapCount offset 0x10
 __declspec(property(get=__get_LeapCount, put=__set_LeapCount)) uint32_t  LeapCount;

/// @brief Field TimeCount offset 0x14
 __declspec(property(get=__get_TimeCount, put=__set_TimeCount)) uint32_t  TimeCount;

/// @brief Field TypeCount offset 0x18
 __declspec(property(get=__get_TypeCount, put=__set_TypeCount)) uint32_t  TypeCount;

/// @brief Field CharCount offset 0x1c
 __declspec(property(get=__get_CharCount, put=__set_CharCount)) uint32_t  CharCount;

constexpr void __set_Magic(uint32_t  value) ;

constexpr uint32_t& __get_Magic() ;

constexpr uint32_t const& __get_Magic() const;

constexpr void __set_Version(::System::__TimeZoneInfo__TZVersion  value) ;

constexpr ::System::__TimeZoneInfo__TZVersion& __get_Version() ;

constexpr ::System::__TimeZoneInfo__TZVersion const& __get_Version() const;

constexpr void __set_IsGmtCount(uint32_t  value) ;

constexpr uint32_t& __get_IsGmtCount() ;

constexpr uint32_t const& __get_IsGmtCount() const;

constexpr void __set_IsStdCount(uint32_t  value) ;

constexpr uint32_t& __get_IsStdCount() ;

constexpr uint32_t const& __get_IsStdCount() const;

constexpr void __set_LeapCount(uint32_t  value) ;

constexpr uint32_t& __get_LeapCount() ;

constexpr uint32_t const& __get_LeapCount() const;

constexpr void __set_TimeCount(uint32_t  value) ;

constexpr uint32_t& __get_TimeCount() ;

constexpr uint32_t const& __get_TimeCount() const;

constexpr void __set_TypeCount(uint32_t  value) ;

constexpr uint32_t& __get_TypeCount() ;

constexpr uint32_t const& __get_TypeCount() const;

constexpr void __set_CharCount(uint32_t  value) ;

constexpr uint32_t& __get_CharCount() ;

constexpr uint32_t const& __get_CharCount() const;

/// @brief Method .ctor addr 0x25184fc size 0x1b4 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  index) ;

// Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "::System::__TimeZoneInfo__TZVersion", modifiers: "", def_value: None }, CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LeapCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TypeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __TimeZoneInfo__TZifHead(uint32_t  Magic, ::System::__TimeZoneInfo__TZVersion  Version, uint32_t  IsGmtCount, uint32_t  IsStdCount, uint32_t  LeapCount, uint32_t  TimeCount, uint32_t  TypeCount, uint32_t  CharCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeZoneInfo__TZifHead(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeZoneInfo__TZifHead()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__TZifHead, 0x20>, "Size mismatch!");

} // namespace end def System
// Type: ::TZVersion
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2315))
// CS Name: ::TimeZoneInfo::TZVersion
struct CORDL_TYPE __TimeZoneInfo__TZVersion : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____TimeZoneInfo__TZVersion_Unwrapped
enum struct ____TimeZoneInfo__TZVersion_Unwrapped : uint8_t {
__E_V1 = static_cast<uint8_t>(0x0u),
__E_V2 = static_cast<uint8_t>(0x1u),
__E_V3 = static_cast<uint8_t>(0x2u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field V1 value: static_cast<uint8_t>(0x0u)
static ::System::__TimeZoneInfo__TZVersion const V1;

/// @brief Field V2 value: static_cast<uint8_t>(0x1u)
static ::System::__TimeZoneInfo__TZVersion const V2;

/// @brief Field V3 value: static_cast<uint8_t>(0x2u)
static ::System::__TimeZoneInfo__TZVersion const V3;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TimeZoneInfo__TZVersion_Unwrapped () const noexcept {
return std::bit_cast<____TimeZoneInfo__TZVersion_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __TimeZoneInfo__TZVersion(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeZoneInfo__TZVersion(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeZoneInfo__TZVersion()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__TZVersion, 0x1>, "Size mismatch!");

} // namespace end def System
// Type: ::AdjustmentRule
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2316))
// CS Name: ::TimeZoneInfo::AdjustmentRule*
class CORDL_TYPE __TimeZoneInfo__AdjustmentRule : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field _dateStart offset 0x10
 __declspec(property(get=__get__dateStart, put=__set__dateStart)) ::System::DateTime  _dateStart;

/// @brief Field _dateEnd offset 0x18
 __declspec(property(get=__get__dateEnd, put=__set__dateEnd)) ::System::DateTime  _dateEnd;

/// @brief Field _daylightDelta offset 0x20
 __declspec(property(get=__get__daylightDelta, put=__set__daylightDelta)) ::System::TimeSpan  _daylightDelta;

/// @brief Field _daylightTransitionStart offset 0x28
 __declspec(property(get=__get__daylightTransitionStart, put=__set__daylightTransitionStart)) ::System::__TimeZoneInfo__TransitionTime  _daylightTransitionStart;

/// @brief Field _daylightTransitionEnd offset 0x40
 __declspec(property(get=__get__daylightTransitionEnd, put=__set__daylightTransitionEnd)) ::System::__TimeZoneInfo__TransitionTime  _daylightTransitionEnd;

/// @brief Field _baseUtcOffsetDelta offset 0x58
 __declspec(property(get=__get__baseUtcOffsetDelta, put=__set__baseUtcOffsetDelta)) ::System::TimeSpan  _baseUtcOffsetDelta;

/// @brief Field _noDaylightTransitions offset 0x60
 __declspec(property(get=__get__noDaylightTransitions, put=__set__noDaylightTransitions)) bool  _noDaylightTransitions;

 __declspec(property(get=get_DateStart)) ::System::DateTime  DateStart;

 __declspec(property(get=get_DateEnd)) ::System::DateTime  DateEnd;

 __declspec(property(get=get_DaylightDelta)) ::System::TimeSpan  DaylightDelta;

 __declspec(property(get=get_DaylightTransitionStart)) ::System::__TimeZoneInfo__TransitionTime  DaylightTransitionStart;

 __declspec(property(get=get_DaylightTransitionEnd)) ::System::__TimeZoneInfo__TransitionTime  DaylightTransitionEnd;

 __declspec(property(get=get_BaseUtcOffsetDelta)) ::System::TimeSpan  BaseUtcOffsetDelta;

 __declspec(property(get=get_NoDaylightTransitions)) bool  NoDaylightTransitions;

 __declspec(property(get=get_HasDaylightSaving)) bool  HasDaylightSaving;

/// @brief Convert operator to "::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>"
constexpr operator  ::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__dateStart(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__dateStart() ;

constexpr ::System::DateTime const& __get__dateStart() const;

constexpr void __set__dateEnd(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__dateEnd() ;

constexpr ::System::DateTime const& __get__dateEnd() const;

constexpr void __set__daylightDelta(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get__daylightDelta() ;

constexpr ::System::TimeSpan const& __get__daylightDelta() const;

constexpr void __set__daylightTransitionStart(::System::__TimeZoneInfo__TransitionTime  value) ;

constexpr ::System::__TimeZoneInfo__TransitionTime& __get__daylightTransitionStart() ;

constexpr ::System::__TimeZoneInfo__TransitionTime const& __get__daylightTransitionStart() const;

constexpr void __set__daylightTransitionEnd(::System::__TimeZoneInfo__TransitionTime  value) ;

constexpr ::System::__TimeZoneInfo__TransitionTime& __get__daylightTransitionEnd() ;

constexpr ::System::__TimeZoneInfo__TransitionTime const& __get__daylightTransitionEnd() const;

constexpr void __set__baseUtcOffsetDelta(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get__baseUtcOffsetDelta() ;

constexpr ::System::TimeSpan const& __get__baseUtcOffsetDelta() const;

constexpr void __set__noDaylightTransitions(bool  value) ;

constexpr bool& __get__noDaylightTransitions() ;

constexpr bool const& __get__noDaylightTransitions() const;

/// @brief Method get_DateStart addr 0x251d3b4 size 0x8 virtual false final false
inline ::System::DateTime get_DateStart() ;

/// @brief Method get_DateEnd addr 0x251d3bc size 0x8 virtual false final false
inline ::System::DateTime get_DateEnd() ;

/// @brief Method get_DaylightDelta addr 0x251d3c4 size 0x8 virtual false final false
inline ::System::TimeSpan get_DaylightDelta() ;

/// @brief Method get_DaylightTransitionStart addr 0x251d3cc size 0x14 virtual false final false
inline ::System::__TimeZoneInfo__TransitionTime get_DaylightTransitionStart() ;

/// @brief Method get_DaylightTransitionEnd addr 0x251d3e0 size 0x14 virtual false final false
inline ::System::__TimeZoneInfo__TransitionTime get_DaylightTransitionEnd() ;

/// @brief Method get_BaseUtcOffsetDelta addr 0x251d3f4 size 0x8 virtual false final false
inline ::System::TimeSpan get_BaseUtcOffsetDelta() ;

/// @brief Method get_NoDaylightTransitions addr 0x251d3fc size 0x8 virtual false final false
inline bool get_NoDaylightTransitions() ;

/// @brief Method get_HasDaylightSaving addr 0x25194e0 size 0x15c virtual false final false
inline bool get_HasDaylightSaving() ;

/// @brief Method Equals addr 0x251a41c size 0x164 virtual true final true
inline bool Equals(::System::__TimeZoneInfo__AdjustmentRule*  other) ;

/// @brief Method GetHashCode addr 0x251d510 size 0xc virtual true final false
inline int32_t GetHashCode() ;

static inline ::System::__TimeZoneInfo__AdjustmentRule* New_ctor(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionStart, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

/// @brief Method .ctor addr 0x251d51c size 0xc8 virtual false final false
inline void _ctor(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionStart, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

/// @brief Method CreateAdjustmentRule addr 0x2513f94 size 0x110 virtual false final false
static inline ::System::__TimeZoneInfo__AdjustmentRule* CreateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionStart, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionEnd) ;

/// @brief Method CreateAdjustmentRule addr 0x25168d0 size 0xf0 virtual false final false
static inline ::System::__TimeZoneInfo__AdjustmentRule* CreateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionStart, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

/// @brief Method IsStartDateMarkerForBeginningOfYear addr 0x251b874 size 0xb0 virtual false final false
inline bool IsStartDateMarkerForBeginningOfYear() ;

/// @brief Method IsEndDateMarkerForEndOfYear addr 0x251b924 size 0xb0 virtual false final false
inline bool IsEndDateMarkerForEndOfYear() ;

/// @brief Method ValidateAdjustmentRule addr 0x251d5e4 size 0x44c virtual false final false
static inline void ValidateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionStart, ::System::__TimeZoneInfo__TransitionTime  daylightTransitionEnd, bool  noDaylightTransitions) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x251da6c size 0x118 virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x251db84 size 0x244 virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::__TimeZoneInfo__AdjustmentRule* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x251ddc8 size 0x418 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::__TimeZoneInfo__AdjustmentRule* New_ctor() ;

/// @brief Method .ctor addr 0x251e1e0 size 0x38 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo__AdjustmentRule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TimeZoneInfo__AdjustmentRule(__TimeZoneInfo__AdjustmentRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo__AdjustmentRule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TimeZoneInfo__AdjustmentRule(__TimeZoneInfo__AdjustmentRule const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TimeZoneInfo__AdjustmentRule()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__AdjustmentRule, 0x68>, "Size mismatch!");

} // namespace end def System
// Type: ::TransitionTime
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2317))
// CS Name: ::TimeZoneInfo::TransitionTime
struct CORDL_TYPE __TimeZoneInfo__TransitionTime : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _timeOfDay offset 0x0
 __declspec(property(get=__get__timeOfDay, put=__set__timeOfDay)) ::System::DateTime  _timeOfDay;

/// @brief Field _month offset 0x8
 __declspec(property(get=__get__month, put=__set__month)) uint8_t  _month;

/// @brief Field _week offset 0x9
 __declspec(property(get=__get__week, put=__set__week)) uint8_t  _week;

/// @brief Field _day offset 0xa
 __declspec(property(get=__get__day, put=__set__day)) uint8_t  _day;

/// @brief Field _dayOfWeek offset 0xc
 __declspec(property(get=__get__dayOfWeek, put=__set__dayOfWeek)) ::System::DayOfWeek  _dayOfWeek;

/// @brief Field _isFixedDateRule offset 0x10
 __declspec(property(get=__get__isFixedDateRule, put=__set__isFixedDateRule)) bool  _isFixedDateRule;

 __declspec(property(get=get_TimeOfDay)) ::System::DateTime  TimeOfDay;

 __declspec(property(get=get_Month)) int32_t  Month;

 __declspec(property(get=get_Week)) int32_t  Week;

 __declspec(property(get=get_Day)) int32_t  Day;

 __declspec(property(get=get_DayOfWeek)) ::System::DayOfWeek  DayOfWeek;

 __declspec(property(get=get_IsFixedDateRule)) bool  IsFixedDateRule;

/// @brief Convert operator to "::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>"
constexpr operator  ::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

constexpr void __set__timeOfDay(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__timeOfDay() ;

constexpr ::System::DateTime const& __get__timeOfDay() const;

constexpr void __set__month(uint8_t  value) ;

constexpr uint8_t& __get__month() ;

constexpr uint8_t const& __get__month() const;

constexpr void __set__week(uint8_t  value) ;

constexpr uint8_t& __get__week() ;

constexpr uint8_t const& __get__week() const;

constexpr void __set__day(uint8_t  value) ;

constexpr uint8_t& __get__day() ;

constexpr uint8_t const& __get__day() const;

constexpr void __set__dayOfWeek(::System::DayOfWeek  value) ;

constexpr ::System::DayOfWeek& __get__dayOfWeek() ;

constexpr ::System::DayOfWeek const& __get__dayOfWeek() const;

constexpr void __set__isFixedDateRule(bool  value) ;

constexpr bool& __get__isFixedDateRule() ;

constexpr bool const& __get__isFixedDateRule() const;

/// @brief Method get_TimeOfDay addr 0x251e218 size 0x8 virtual false final false
inline ::System::DateTime get_TimeOfDay() ;

/// @brief Method get_Month addr 0x251e220 size 0x8 virtual false final false
inline int32_t get_Month() ;

/// @brief Method get_Week addr 0x251e228 size 0x8 virtual false final false
inline int32_t get_Week() ;

/// @brief Method get_Day addr 0x251e230 size 0x8 virtual false final false
inline int32_t get_Day() ;

/// @brief Method get_DayOfWeek addr 0x251e238 size 0x8 virtual false final false
inline ::System::DayOfWeek get_DayOfWeek() ;

/// @brief Method get_IsFixedDateRule addr 0x251e240 size 0x8 virtual false final false
inline bool get_IsFixedDateRule() ;

/// @brief Method Equals addr 0x251e248 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Inequality addr 0x251d404 size 0x34 virtual false final false
static inline bool op_Inequality(::System::__TimeZoneInfo__TransitionTime  t1, ::System::__TimeZoneInfo__TransitionTime  t2) ;

/// @brief Method Equals addr 0x251d438 size 0xd8 virtual true final true
inline bool Equals(::System::__TimeZoneInfo__TransitionTime  other) ;

/// @brief Method GetHashCode addr 0x251e2d8 size 0x14 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor addr 0x251e2ec size 0x70 virtual false final false
inline void _ctor(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek, bool  isFixedDateRule) ;

/// @brief Method CreateFixedDateRule addr 0x2513f34 size 0x60 virtual false final false
static inline ::System::__TimeZoneInfo__TransitionTime CreateFixedDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  day) ;

/// @brief Method CreateFloatingDateRule addr 0x2517a20 size 0x68 virtual false final false
static inline ::System::__TimeZoneInfo__TransitionTime CreateFloatingDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, ::System::DayOfWeek  dayOfWeek) ;

/// @brief Method ValidateTransitionTime addr 0x251e35c size 0x24c virtual false final false
static inline void ValidateTransitionTime(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x251e5a8 size 0xf0 virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x251e698 size 0x1ac virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x251e844 size 0x37c virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_dayOfWeek", ty: "::System::DayOfWeek", modifiers: "", def_value: None }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: None }]
constexpr __TimeZoneInfo__TransitionTime(::System::DateTime  _timeOfDay, uint8_t  _month, uint8_t  _week, uint8_t  _day, ::System::DayOfWeek  _dayOfWeek, bool  _isFixedDateRule) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeZoneInfo__TransitionTime(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeZoneInfo__TransitionTime()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__TransitionTime, 0x18>, "Size mismatch!");

} // namespace end def System
// Type: ::CachedData
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2318))
// CS Name: ::TimeZoneInfo::CachedData*
class CORDL_TYPE __TimeZoneInfo__CachedData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _localTimeZone offset 0x10
 __declspec(property(get=__get__localTimeZone, put=__set__localTimeZone)) ::System::TimeZoneInfo*  _localTimeZone;

 __declspec(property(get=get_Local)) ::System::TimeZoneInfo*  Local;

constexpr void __set__localTimeZone(::System::TimeZoneInfo*  value) ;

constexpr ::System::TimeZoneInfo* __get__localTimeZone() ;

constexpr ::cordl_internals::to_const_pointer<::System::TimeZoneInfo*> __get__localTimeZone() const;

/// @brief Method CreateLocal addr 0x251ebc0 size 0x190 virtual false final false
inline ::System::TimeZoneInfo* CreateLocal() ;

/// @brief Method get_Local addr 0x2518c84 size 0x38 virtual false final false
inline ::System::TimeZoneInfo* get_Local() ;

/// @brief Method GetCorrespondingKind addr 0x2518d34 size 0x8c virtual false final false
inline ::System::DateTimeKind GetCorrespondingKind(::System::TimeZoneInfo*  timeZone) ;

static inline ::System::__TimeZoneInfo__CachedData* New_ctor() ;

/// @brief Method .ctor addr 0x251d374 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo__CachedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TimeZoneInfo__CachedData(__TimeZoneInfo__CachedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo__CachedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TimeZoneInfo__CachedData(__TimeZoneInfo__CachedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TimeZoneInfo__CachedData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__CachedData, 0x18>, "Size mismatch!");

} // namespace end def System
// Type: ::<>c__DisplayClass16_0
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2319))
// CS Name: ::TimeZoneInfo::<>c__DisplayClass16_0*
class CORDL_TYPE __TimeZoneInfo____c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field localtimeFilePath offset 0x10
 __declspec(property(get=__get_localtimeFilePath, put=__set_localtimeFilePath)) ::StringW  localtimeFilePath;

/// @brief Field posixrulesFilePath offset 0x18
 __declspec(property(get=__get_posixrulesFilePath, put=__set_posixrulesFilePath)) ::StringW  posixrulesFilePath;

/// @brief Field buffer offset 0x20
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field rawData offset 0x28
 __declspec(property(get=__get_rawData, put=__set_rawData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  rawData;

/// @brief Field id offset 0x30
 __declspec(property(get=__get_id, put=__set_id)) ::StringW  id;

/// @brief Field timeZoneDirectory offset 0x38
 __declspec(property(get=__get_timeZoneDirectory, put=__set_timeZoneDirectory)) ::StringW  timeZoneDirectory;

constexpr void __set_localtimeFilePath(::StringW  value) ;

constexpr ::StringW& __get_localtimeFilePath() ;

constexpr ::StringW const& __get_localtimeFilePath() const;

constexpr void __set_posixrulesFilePath(::StringW  value) ;

constexpr ::StringW& __get_posixrulesFilePath() ;

constexpr ::StringW const& __get_posixrulesFilePath() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_rawData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_rawData() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_rawData() const;

constexpr void __set_id(::StringW  value) ;

constexpr ::StringW& __get_id() ;

constexpr ::StringW const& __get_id() const;

constexpr void __set_timeZoneDirectory(::StringW  value) ;

constexpr ::StringW& __get_timeZoneDirectory() ;

constexpr ::StringW const& __get_timeZoneDirectory() const;

static inline ::System::__TimeZoneInfo____c__DisplayClass16_0* New_ctor() ;

/// @brief Method .ctor addr 0x2515274 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FindTimeZoneId>b__0 addr 0x251ed50 size 0xf4 virtual false final false
inline bool _FindTimeZoneId_b__0(::StringW  filePath) ;

// Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TimeZoneInfo____c__DisplayClass16_0(__TimeZoneInfo____c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TimeZoneInfo____c__DisplayClass16_0(__TimeZoneInfo____c__DisplayClass16_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TimeZoneInfo____c__DisplayClass16_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo____c__DisplayClass16_0, 0x40>, "Size mismatch!");

} // namespace end def System
// Type: ::<>c
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2320))
// CS Name: ::TimeZoneInfo::<>c*
class CORDL_TYPE __TimeZoneInfo____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::__TimeZoneInfo____c*  value) ;

static inline ::System::__TimeZoneInfo____c* getStaticF___9() ;

static inline void setStaticF___9__34_1(::System::Func_2<char16_t,bool>*  value) ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__34_1() ;

static inline void setStaticF___9__34_0(::System::Func_2<char16_t,bool>*  value) ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__34_0() ;

static inline void setStaticF___9__35_0(::System::Func_2<char16_t,bool>*  value) ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__35_0() ;

static inline void setStaticF___9__37_0(::System::Func_2<char16_t,bool>*  value) ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__37_0() ;

static inline void setStaticF___9__38_0(::System::Func_2<char16_t,bool>*  value) ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__38_0() ;

static inline void setStaticF___9__161_0(::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>*  value) ;

static inline ::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>* getStaticF___9__161_0() ;

static inline ::System::__TimeZoneInfo____c* New_ctor() ;

/// @brief Method .ctor addr 0x251eea8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <TZif_ParsePosixName>b__34_1 addr 0x251eeb0 size 0x10 virtual false final false
inline bool _TZif_ParsePosixName_b__34_1(char16_t  c) ;

/// @brief Method <TZif_ParsePosixName>b__34_0 addr 0x251eec0 size 0x80 virtual false final false
inline bool _TZif_ParsePosixName_b__34_0(char16_t  c) ;

/// @brief Method <TZif_ParsePosixOffset>b__35_0 addr 0x251efc4 size 0x88 virtual false final false
inline bool _TZif_ParsePosixOffset_b__35_0(char16_t  c) ;

/// @brief Method <TZif_ParsePosixDate>b__37_0 addr 0x251f04c size 0x1c virtual false final false
inline bool _TZif_ParsePosixDate_b__37_0(char16_t  c) ;

/// @brief Method <TZif_ParsePosixTime>b__38_0 addr 0x251f068 size 0x10 virtual false final false
inline bool _TZif_ParsePosixTime_b__38_0(char16_t  c) ;

/// @brief Method <CreateLocalUnity>b__161_0 addr 0x251f078 size 0x34 virtual false final false
inline int32_t _CreateLocalUnity_b__161_0(::System::__TimeZoneInfo__AdjustmentRule*  rule1, ::System::__TimeZoneInfo__AdjustmentRule*  rule2) ;

// Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TimeZoneInfo____c(__TimeZoneInfo____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TimeZoneInfo____c(__TimeZoneInfo____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TimeZoneInfo____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__34_1

// Static field <>9__34_0

// Static field <>9__35_0

// Static field <>9__37_0

// Static field <>9__38_0

// Static field <>9__161_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo____c, 0x10>, "Size mismatch!");

} // namespace end def System
// Type: System::TimeZoneInfo
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2321))
// CS Name: ::System::TimeZoneInfo*
class CORDL_TYPE TimeZoneInfo : public ::System::Object {
public:
// Declarations
using __c = ::System::__TimeZoneInfo____c;

using __c__DisplayClass16_0 = ::System::__TimeZoneInfo____c__DisplayClass16_0;

using CachedData = ::System::__TimeZoneInfo__CachedData;

using TransitionTime = ::System::__TimeZoneInfo__TransitionTime;

using AdjustmentRule = ::System::__TimeZoneInfo__AdjustmentRule;

using TZVersion = ::System::__TimeZoneInfo__TZVersion;

using TZifHead = ::System::__TimeZoneInfo__TZifHead;

using TZifType = ::System::__TimeZoneInfo__TZifType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field _id offset 0x10
 __declspec(property(get=__get__id, put=__set__id)) ::StringW  _id;

/// @brief Field _displayName offset 0x18
 __declspec(property(get=__get__displayName, put=__set__displayName)) ::StringW  _displayName;

/// @brief Field _standardDisplayName offset 0x20
 __declspec(property(get=__get__standardDisplayName, put=__set__standardDisplayName)) ::StringW  _standardDisplayName;

/// @brief Field _daylightDisplayName offset 0x28
 __declspec(property(get=__get__daylightDisplayName, put=__set__daylightDisplayName)) ::StringW  _daylightDisplayName;

/// @brief Field _baseUtcOffset offset 0x30
 __declspec(property(get=__get__baseUtcOffset, put=__set__baseUtcOffset)) ::System::TimeSpan  _baseUtcOffset;

/// @brief Field _supportsDaylightSavingTime offset 0x38
 __declspec(property(get=__get__supportsDaylightSavingTime, put=__set__supportsDaylightSavingTime)) bool  _supportsDaylightSavingTime;

/// @brief Field _adjustmentRules offset 0x40
 __declspec(property(get=__get__adjustmentRules, put=__set__adjustmentRules)) ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>  _adjustmentRules;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_StandardName)) ::StringW  StandardName;

 __declspec(property(get=get_DaylightName)) ::StringW  DaylightName;

 __declspec(property(get=get_BaseUtcOffset)) ::System::TimeSpan  BaseUtcOffset;

 __declspec(property(get=get_SupportsDaylightSavingTime)) bool  SupportsDaylightSavingTime;

/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr operator  ::System::IEquatable_1<::System::TimeZoneInfo*>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set__id(::StringW  value) ;

constexpr ::StringW& __get__id() ;

constexpr ::StringW const& __get__id() const;

constexpr void __set__displayName(::StringW  value) ;

constexpr ::StringW& __get__displayName() ;

constexpr ::StringW const& __get__displayName() const;

constexpr void __set__standardDisplayName(::StringW  value) ;

constexpr ::StringW& __get__standardDisplayName() ;

constexpr ::StringW const& __get__standardDisplayName() const;

constexpr void __set__daylightDisplayName(::StringW  value) ;

constexpr ::StringW& __get__daylightDisplayName() ;

constexpr ::StringW const& __get__daylightDisplayName() const;

constexpr void __set__baseUtcOffset(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get__baseUtcOffset() ;

constexpr ::System::TimeSpan const& __get__baseUtcOffset() const;

constexpr void __set__supportsDaylightSavingTime(bool  value) ;

constexpr bool& __get__supportsDaylightSavingTime() ;

constexpr bool const& __get__supportsDaylightSavingTime() const;

constexpr void __set__adjustmentRules(::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>  value) ;

constexpr ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>& __get__adjustmentRules() ;

constexpr ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> const& __get__adjustmentRules() const;

static inline void setStaticF_s_utcTimeZone(::System::TimeZoneInfo*  value) ;

static inline ::System::TimeZoneInfo* getStaticF_s_utcTimeZone() ;

static inline void setStaticF_s_cachedData(::System::__TimeZoneInfo__CachedData*  value) ;

static inline ::System::__TimeZoneInfo__CachedData* getStaticF_s_cachedData() ;

static inline void setStaticF_s_maxDateOnly(::System::DateTime  value) ;

static inline ::System::DateTime getStaticF_s_maxDateOnly() ;

static inline void setStaticF_s_minDateOnly(::System::DateTime  value) ;

static inline ::System::DateTime getStaticF_s_minDateOnly() ;

static inline void setStaticF_MaxOffset(::System::TimeSpan  value) ;

static inline ::System::TimeSpan getStaticF_MaxOffset() ;

static inline void setStaticF_MinOffset(::System::TimeSpan  value) ;

static inline ::System::TimeSpan getStaticF_MinOffset() ;

static inline ::System::TimeZoneInfo* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::StringW  id, bool  dstDisabled) ;

/// @brief Method .ctor addr 0x2512d34 size 0x434 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::StringW  id, bool  dstDisabled) ;

/// @brief Method GetAdjustmentRules addr 0x2513b64 size 0x3d0 virtual false final false
inline ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> GetAdjustmentRules() ;

/// @brief Method GetLocalTimeZone addr 0x25140a4 size 0x4c virtual false final false
static inline ::System::TimeZoneInfo* GetLocalTimeZone(::System::__TimeZoneInfo__CachedData*  cachedData) ;

/// @brief Method TryGetLocalTzFile addr 0x2514254 size 0x1b0 virtual false final false
static inline bool TryGetLocalTzFile(ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  rawData, ByRef<::StringW>  id) ;

/// @brief Method GetTzEnvironmentVariable addr 0x2514404 size 0x98 virtual false final false
static inline ::StringW GetTzEnvironmentVariable() ;

/// @brief Method TryLoadTzFile addr 0x251449c size 0x190 virtual false final false
static inline bool TryLoadTzFile(::StringW  tzFilePath, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  rawData, ByRef<::StringW>  id) ;

/// @brief Method FindTimeZoneIdUsingReadLink addr 0x2514778 size 0x10c virtual false final false
static inline ::StringW FindTimeZoneIdUsingReadLink(::StringW  tzFilePath) ;

/// @brief Method GetDirectoryEntryFullPath addr 0x2514af8 size 0x18c virtual false final false
static inline ::StringW GetDirectoryEntryFullPath(ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry>  dirent, ::StringW  currentPath) ;

/// @brief Method EnumerateFilesRecursively addr 0x2514c84 size 0x5f0 virtual false final false
static inline void EnumerateFilesRecursively(::StringW  path, ::System::Predicate_1<::StringW>*  condition) ;

/// @brief Method FindTimeZoneId addr 0x2514884 size 0x274 virtual false final false
static inline ::StringW FindTimeZoneId(::ArrayW<uint8_t,::Array<uint8_t>*>  rawData) ;

/// @brief Method CompareTimeZoneFile addr 0x251527c size 0x38c virtual false final false
static inline bool CompareTimeZoneFile(::StringW  filePath, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ::ArrayW<uint8_t,::Array<uint8_t>*>  rawData) ;

/// @brief Method GetLocalTimeZoneFromTzFile addr 0x25140f0 size 0x164 virtual false final false
static inline ::System::TimeZoneInfo* GetLocalTimeZoneFromTzFile() ;

/// @brief Method GetTimeZoneFromTzData addr 0x2515608 size 0x1c0 virtual false final false
static inline ::System::TimeZoneInfo* GetTimeZoneFromTzData(::ArrayW<uint8_t,::Array<uint8_t>*>  rawData, ::StringW  id) ;

/// @brief Method GetTimeZoneDirectory addr 0x251462c size 0x14c virtual false final false
static inline ::StringW GetTimeZoneDirectory() ;

/// @brief Method GetDateTimeNowUtcOffsetFromUtc addr 0x2515cc4 size 0x78 virtual false final false
static inline ::System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(::System::DateTime  time, ByRef<bool>  isAmbiguousLocalDst) ;

/// @brief Method TZif_GenerateAdjustmentRules addr 0x25136e4 size 0x14c virtual false final false
static inline void TZif_GenerateAdjustmentRules(ByRef<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>  rules, ::System::TimeSpan  baseUtcOffset, ::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  dts, ::ArrayW<uint8_t,::Array<uint8_t>*>  typeOfLocalTime, ::ArrayW<::System::__TimeZoneInfo__TZifType,::Array<::System::__TimeZoneInfo__TZifType>*>  transitionType, ::ArrayW<bool,::Array<bool>*>  StandardTime, ::ArrayW<bool,::Array<bool>*>  GmtTime, ::StringW  futureTransitionsPosixFormat) ;

/// @brief Method TZif_GenerateAdjustmentRule addr 0x251608c size 0x6c8 virtual false final false
static inline void TZif_GenerateAdjustmentRule(ByRef<int32_t>  index, ::System::TimeSpan  timeZoneBaseUtcOffset, ::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>*  rulesList, ::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  dts, ::ArrayW<uint8_t,::Array<uint8_t>*>  typeOfLocalTime, ::ArrayW<::System::__TimeZoneInfo__TZifType,::Array<::System::__TimeZoneInfo__TZifType>*>  transitionTypes, ::ArrayW<bool,::Array<bool>*>  StandardTime, ::ArrayW<bool,::Array<bool>*>  GmtTime, ::StringW  futureTransitionsPosixFormat) ;

/// @brief Method TZif_CalculateTransitionOffsetFromBase addr 0x25167f8 size 0xd8 virtual false final false
static inline ::System::TimeSpan TZif_CalculateTransitionOffsetFromBase(::System::TimeSpan  transitionOffset, ::System::TimeSpan  timeZoneBaseUtcOffset) ;

/// @brief Method TZif_GetEarlyDateTransitionType addr 0x2516754 size 0xa4 virtual false final false
static inline ::System::__TimeZoneInfo__TZifType TZif_GetEarlyDateTransitionType(::ArrayW<::System::__TimeZoneInfo__TZifType,::Array<::System::__TimeZoneInfo__TZifType>*>  transitionTypes) ;

/// @brief Method TZif_CreateAdjustmentRuleForPosixFormat addr 0x2516c74 size 0x324 virtual false final false
static inline ::System::__TimeZoneInfo__AdjustmentRule* TZif_CreateAdjustmentRuleForPosixFormat(::StringW  posixFormat, ::System::DateTime  startTransitionDate, ::System::TimeSpan  timeZoneBaseUtcOffset) ;

/// @brief Method TZif_ParseOffsetString addr 0x2517194 size 0x1f8 virtual false final false
static inline ::System::Nullable_1<::System::TimeSpan> TZif_ParseOffsetString(::StringW  offset) ;

/// @brief Method ParseTimeOfDay addr 0x25175e8 size 0x23c virtual false final false
static inline ::System::DateTime ParseTimeOfDay(::StringW  time) ;

/// @brief Method TZif_CreateTransitionTimeFromPosixRule addr 0x251738c size 0x25c virtual false final false
static inline ::System::__TimeZoneInfo__TransitionTime TZif_CreateTransitionTimeFromPosixRule(::StringW  date, ::StringW  time) ;

/// @brief Method TZif_ParseJulianDay addr 0x2517a88 size 0x1cc virtual false final false
static inline void TZif_ParseJulianDay(::StringW  date, ByRef<int32_t>  month, ByRef<int32_t>  day) ;

/// @brief Method TZif_ParseMDateRule addr 0x2517824 size 0x1fc virtual false final false
static inline bool TZif_ParseMDateRule(::StringW  dateRule, ByRef<int32_t>  month, ByRef<int32_t>  week, ByRef<::System::DayOfWeek>  dayOfWeek) ;

/// @brief Method TZif_ParsePosixFormat addr 0x2516f98 size 0x1fc virtual false final false
static inline bool TZif_ParsePosixFormat(::StringW  posixFormat, ByRef<::StringW>  standardName, ByRef<::StringW>  standardOffset, ByRef<::StringW>  daylightSavingsName, ByRef<::StringW>  daylightSavingsOffset, ByRef<::StringW>  start, ByRef<::StringW>  startTime, ByRef<::StringW>  end, ByRef<::StringW>  endTime) ;

/// @brief Method TZif_ParsePosixName addr 0x2517c54 size 0x234 virtual false final false
static inline ::StringW TZif_ParsePosixName(::StringW  posixFormat, ByRef<int32_t>  index) ;

/// @brief Method TZif_ParsePosixOffset addr 0x2517e88 size 0x10c virtual false final false
static inline ::StringW TZif_ParsePosixOffset(::StringW  posixFormat, ByRef<int32_t>  index) ;

/// @brief Method TZif_ParsePosixDateTime addr 0x2517f94 size 0xdc virtual false final false
static inline void TZif_ParsePosixDateTime(::StringW  posixFormat, ByRef<int32_t>  index, ByRef<::StringW>  date, ByRef<::StringW>  time) ;

/// @brief Method TZif_ParsePosixDate addr 0x2518108 size 0x10c virtual false final false
static inline ::StringW TZif_ParsePosixDate(::StringW  posixFormat, ByRef<int32_t>  index) ;

/// @brief Method TZif_ParsePosixTime addr 0x2518214 size 0x10c virtual false final false
static inline ::StringW TZif_ParsePosixTime(::StringW  posixFormat, ByRef<int32_t>  index) ;

/// @brief Method TZif_ParsePosixString addr 0x2518070 size 0x98 virtual false final false
static inline ::StringW TZif_ParsePosixString(::StringW  posixFormat, ByRef<int32_t>  index, ::System::Func_2<char16_t,bool>*  breakCondition) ;

/// @brief Method TZif_GetZoneAbbreviation addr 0x2513680 size 0x64 virtual false final false
static inline ::StringW TZif_GetZoneAbbreviation(::StringW  zoneAbbreviations, int32_t  index) ;

/// @brief Method TZif_ToInt32 addr 0x2518320 size 0x30 virtual false final false
static inline int32_t TZif_ToInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex) ;

/// @brief Method TZif_ToInt64 addr 0x2518350 size 0x30 virtual false final false
static inline int64_t TZif_ToInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex) ;

/// @brief Method TZif_ToUnixTime addr 0x2518380 size 0x88 virtual false final false
static inline int64_t TZif_ToUnixTime(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex, ::System::__TimeZoneInfo__TZVersion  version) ;

/// @brief Method TZif_UnixTimeToDateTime addr 0x2518408 size 0xf4 virtual false final false
static inline ::System::DateTime TZif_UnixTimeToDateTime(int64_t  unixTime) ;

/// @brief Method TZif_ParseRaw addr 0x2513168 size 0x518 virtual false final false
static inline void TZif_ParseRaw(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ByRef<::System::__TimeZoneInfo__TZifHead>  t, ByRef<::ArrayW<::System::DateTime,::Array<::System::DateTime>*>>  dts, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  typeOfLocalTime, ByRef<::ArrayW<::System::__TimeZoneInfo__TZifType,::Array<::System::__TimeZoneInfo__TZifType>*>>  transitionType, ByRef<::StringW>  zoneAbbreviations, ByRef<::ArrayW<bool,::Array<bool>*>>  StandardTime, ByRef<::ArrayW<bool,::Array<bool>*>>  GmtTime, ByRef<::StringW>  futureTransitionsPosixFormat) ;

/// @brief Method get_DisplayName addr 0x25187f0 size 0x54 virtual false final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_StandardName addr 0x2518844 size 0x54 virtual false final false
inline ::StringW get_StandardName() ;

/// @brief Method get_DaylightName addr 0x2518898 size 0x54 virtual false final false
inline ::StringW get_DaylightName() ;

/// @brief Method get_BaseUtcOffset addr 0x25188ec size 0x8 virtual false final false
inline ::System::TimeSpan get_BaseUtcOffset() ;

/// @brief Method get_SupportsDaylightSavingTime addr 0x25188f4 size 0x8 virtual false final false
inline bool get_SupportsDaylightSavingTime() ;

/// @brief Method GetPreviousAdjustmentRule addr 0x25188fc size 0x124 virtual false final false
inline ::System::__TimeZoneInfo__AdjustmentRule* GetPreviousAdjustmentRule(::System::__TimeZoneInfo__AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetUtcOffset addr 0x2518a20 size 0x74 virtual false final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime) ;

/// @brief Method GetLocalUtcOffset addr 0x2518be8 size 0x9c virtual false final false
static inline ::System::TimeSpan GetLocalUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetUtcOffset addr 0x2518cbc size 0x78 virtual false final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetUtcOffset addr 0x2518a94 size 0x154 virtual false final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags, ::System::__TimeZoneInfo__CachedData*  cachedData) ;

/// @brief Method ConvertTime addr 0x2518dc0 size 0x88 virtual false final false
static inline ::System::DateTime ConvertTime(::System::DateTime  dateTime, ::System::TimeZoneInfo*  sourceTimeZone, ::System::TimeZoneInfo*  destinationTimeZone, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method ConvertTime addr 0x251904c size 0x3e8 virtual false final false
static inline ::System::DateTime ConvertTime(::System::DateTime  dateTime, ::System::TimeZoneInfo*  sourceTimeZone, ::System::TimeZoneInfo*  destinationTimeZone, ::System::TimeZoneInfoOptions  flags, ::System::__TimeZoneInfo__CachedData*  cachedData) ;

/// @brief Method ConvertTimeToUtc addr 0x251a084 size 0xd0 virtual false final false
static inline ::System::DateTime ConvertTimeToUtc(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method Equals addr 0x251a154 size 0x50 virtual true final true
inline bool Equals(::System::TimeZoneInfo*  other) ;

/// @brief Method Equals addr 0x251a318 size 0x64 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x251a37c size 0xa0 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method HasSameRules addr 0x251a1a4 size 0x174 virtual false final false
inline bool HasSameRules(::System::TimeZoneInfo*  other) ;

/// @brief Method get_Local addr 0x2515d3c size 0x80 virtual false final false
static inline ::System::TimeZoneInfo* get_Local() ;

/// @brief Method ToString addr 0x251a580 size 0x54 virtual true final false
inline ::StringW ToString() ;

/// @brief Method get_Utc addr 0x251a5d4 size 0x58 virtual false final false
static inline ::System::TimeZoneInfo* get_Utc() ;

static inline ::System::TimeZoneInfo* New_ctor(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>  adjustmentRules, bool  disableDaylightSavingTime) ;

/// @brief Method .ctor addr 0x251a62c size 0xec virtual false final false
inline void _ctor(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>  adjustmentRules, bool  disableDaylightSavingTime) ;

/// @brief Method CreateCustomTimeZone addr 0x251a718 size 0x9c virtual false final false
static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName) ;

/// @brief Method CreateCustomTimeZone addr 0x251a7b4 size 0x10c virtual false final false
static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>  adjustmentRules, bool  disableDaylightSavingTime) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x251a8c0 size 0x1e4 virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x251aaa4 size 0x1dc virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::TimeZoneInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x251ac80 size 0x414 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetAdjustmentRuleForTime addr 0x25194d4 size 0xc virtual false final false
inline ::System::__TimeZoneInfo__AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime  dateTime, ByRef<::System::Nullable_1<int32_t>>  ruleIndex) ;

/// @brief Method GetAdjustmentRuleForTime addr 0x251b094 size 0x1b0 virtual false final false
inline ::System::__TimeZoneInfo__AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime  dateTime, bool  dateTimeisUtc, ByRef<::System::Nullable_1<int32_t>>  ruleIndex) ;

/// @brief Method CompareAdjustmentRuleToDateTime addr 0x251b244 size 0x190 virtual false final false
inline int32_t CompareAdjustmentRuleToDateTime(::System::__TimeZoneInfo__AdjustmentRule*  rule, ::System::__TimeZoneInfo__AdjustmentRule*  previousRule, ::System::DateTime  dateTime, ::System::DateTime  dateOnly, bool  dateTimeisUtc) ;

/// @brief Method ConvertToUtc addr 0x251b3d4 size 0x8 virtual false final false
inline ::System::DateTime ConvertToUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta) ;

/// @brief Method ConvertFromUtc addr 0x251b560 size 0x8 virtual false final false
inline ::System::DateTime ConvertFromUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta) ;

/// @brief Method ConvertToFromUtc addr 0x251b3dc size 0x184 virtual false final false
inline ::System::DateTime ConvertToFromUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta, bool  convertToUtc) ;

/// @brief Method ConvertUtcToTimeZone addr 0x2519ea0 size 0x1e4 virtual false final false
static inline ::System::DateTime ConvertUtcToTimeZone(int64_t  ticks, ::System::TimeZoneInfo*  destinationTimeZone, ByRef<bool>  isAmbiguousLocalDst) ;

/// @brief Method GetDaylightTime addr 0x251963c size 0x13c virtual false final false
inline ::System::Globalization::DaylightTimeStruct GetDaylightTime(int32_t  year, ::System::__TimeZoneInfo__AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetIsDaylightSavings addr 0x2519b24 size 0x37c virtual false final false
static inline bool GetIsDaylightSavings(::System::DateTime  time, ::System::__TimeZoneInfo__AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetDaylightSavingsStartOffsetFromUtc addr 0x251bf60 size 0xc8 virtual false final false
inline ::System::TimeSpan GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan  baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetDaylightSavingsEndOffsetFromUtc addr 0x251c028 size 0x78 virtual false final false
inline ::System::TimeSpan GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan  baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule*  rule) ;

/// @brief Method GetIsDaylightSavingsFromUtc addr 0x251c0a0 size 0x780 virtual false final false
static inline bool GetIsDaylightSavingsFromUtc(::System::DateTime  time, int32_t  year, ::System::TimeSpan  utc, ::System::__TimeZoneInfo__AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex, ByRef<bool>  isAmbiguousLocalDst, ::System::TimeZoneInfo*  zone) ;

/// @brief Method CheckIsDst addr 0x251b9d4 size 0x1e0 virtual false final false
static inline bool CheckIsDst(::System::DateTime  startTime, ::System::DateTime  time, ::System::DateTime  endTime, bool  ignoreYearAdjustment, ::System::__TimeZoneInfo__AdjustmentRule*  rule) ;

/// @brief Method GetIsAmbiguousTime addr 0x251bbb4 size 0x3ac virtual false final false
static inline bool GetIsAmbiguousTime(::System::DateTime  time, ::System::__TimeZoneInfo__AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime) ;

/// @brief Method GetIsInvalidTime addr 0x2519778 size 0x3ac virtual false final false
static inline bool GetIsInvalidTime(::System::DateTime  time, ::System::__TimeZoneInfo__AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime) ;

/// @brief Method GetUtcOffset addr 0x2518eb8 size 0x194 virtual false final false
static inline ::System::TimeSpan GetUtcOffset(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetUtcOffsetFromUtc addr 0x2518e48 size 0x70 virtual false final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone) ;

/// @brief Method GetUtcOffsetFromUtc addr 0x251b568 size 0x80 virtual false final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ByRef<bool>  isDaylightSavings) ;

/// @brief Method GetUtcOffsetFromUtc addr 0x2515dbc size 0x2d0 virtual false final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ByRef<bool>  isDaylightSavings, ByRef<bool>  isAmbiguousLocalDst) ;

/// @brief Method TransitionTimeToDateTime addr 0x251b5e8 size 0x28c virtual false final false
static inline ::System::DateTime TransitionTimeToDateTime(int32_t  year, ::System::__TimeZoneInfo__TransitionTime  transitionTime) ;

/// @brief Method ValidateTimeZoneInfo addr 0x2513830 size 0x334 virtual false final false
static inline void ValidateTimeZoneInfo(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*,::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>  adjustmentRules, ByRef<bool>  adjustmentRulesSupportDst) ;

/// @brief Method UtcOffsetOutOfRange addr 0x251c820 size 0xf0 virtual false final false
static inline bool UtcOffsetOutOfRange(::System::TimeSpan  offset) ;

/// @brief Method GetUtcOffset addr 0x251c948 size 0xc8 virtual false final false
static inline ::System::TimeSpan GetUtcOffset(::System::TimeSpan  baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule*  adjustmentRule) ;

/// @brief Method IsValidAdjustmentRuleOffest addr 0x25169c0 size 0x74 virtual false final false
static inline bool IsValidAdjustmentRuleOffest(::System::TimeSpan  baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule*  adjustmentRule) ;

/// @brief Method NormalizeAdjustmentRuleOffset addr 0x2516a34 size 0x240 virtual false final false
static inline void NormalizeAdjustmentRuleOffset(::System::TimeSpan  baseUtcOffset, ByRef<::System::__TimeZoneInfo__AdjustmentRule*>  adjustmentRule) ;

/// @brief Method GetTimeZoneDirectoryUnity addr 0x251ca10 size 0x48 virtual false final false
static inline ::StringW GetTimeZoneDirectoryUnity() ;

/// @brief Method CreateAdjustmentRule addr 0x251ca58 size 0x7a8 virtual false final false
static inline ::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>* CreateAdjustmentRule(int32_t  year, ByRef<::ArrayW<int64_t,::Array<int64_t>*>>  data, ByRef<::ArrayW<::StringW,::Array<::StringW>*>>  names, ::StringW  standardNameCurrentYear, ::StringW  daylightNameCurrentYear) ;

/// @brief Method CreateLocalUnity addr 0x25157c8 size 0x4a0 virtual false final false
static inline ::System::TimeZoneInfo* CreateLocalUnity() ;

static inline ::System::TimeZoneInfo* New_ctor() ;

/// @brief Method .ctor addr 0x251d37c size 0x38 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo(TimeZoneInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo(TimeZoneInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeZoneInfo()  = default;
public:


// Fields

// Static field s_utcTimeZone

// Static field s_cachedData

// Static field s_maxDateOnly

// Static field s_minDateOnly

// Static field MaxOffset

// Static field MinOffset


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo, 0x48>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__TZVersion, "System", "TimeZoneInfo/TZVersion");
NEED_NO_BOX(::System::TimeZoneInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo*, "System", "TimeZoneInfo");
NEED_NO_BOX(::System::__TimeZoneInfo__AdjustmentRule);
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__AdjustmentRule*, "System", "TimeZoneInfo/AdjustmentRule");
NEED_NO_BOX(::System::__TimeZoneInfo__CachedData);
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__CachedData*, "System", "TimeZoneInfo/CachedData");
NEED_NO_BOX(::System::__TimeZoneInfo____c);
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo____c*, "System", "TimeZoneInfo/<>c");
NEED_NO_BOX(::System::__TimeZoneInfo____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo____c__DisplayClass16_0*, "System", "TimeZoneInfo/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__TZifHead, "System", "TimeZoneInfo/TZifHead");
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__TZifType, "System", "TimeZoneInfo/TZifType");
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__TransitionTime, "System", "TimeZoneInfo/TransitionTime");
