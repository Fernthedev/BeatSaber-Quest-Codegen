#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Nullable_1)
namespace ENet {
struct Address;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct __OVRPlugin__BodyState;
}
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct __OVRSceneManager__LogForwarder;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
struct __SongRunningHelper__QueuedSongParams;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace System {
struct DateTime;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__MatchResult;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Message;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::UIElements {
struct EventDispatcherGate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<>
struct Nullable_1<::ENet::Address>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::OVRPose>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::__OVRPlugin__BodyState>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::__OVRPlugin__Posef>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>;
}
namespace System {
template<>
struct Nullable_1<::Newtonsoft::Json::JsonPosition>;
}
namespace System {
template<>
struct Nullable_1<::System::DateTime>;
}
namespace System {
template<>
struct Nullable_1<::System::DateTimeOffset>;
}
namespace System {
template<>
struct Nullable_1<::System::Decimal>;
}
namespace System {
template<>
struct Nullable_1<::System::Guid>;
}
namespace System {
template<>
struct Nullable_1<::System::Net::Http::Headers::Token>;
}
namespace System {
template<>
struct Nullable_1<::System::Runtime::Serialization::StreamingContext>;
}
namespace System {
template<>
struct Nullable_1<::System::Text::RegularExpressions::RegexPrefix>;
}
namespace System {
template<>
struct Nullable_1<::System::TimeSpan>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
struct Nullable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System {
template<>
struct Nullable_1<::Unity::Jobs::JobHandle>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::Color>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::InputBinding>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::InputControlScheme>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Users::InputUser>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
struct Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::Quaternion>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::UIElements::EventDispatcherGate>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::Vector3>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint8_t> T>
struct Nullable_1<T>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct Nullable_1<T>;
}
namespace System {
template<>
struct Nullable_1<bool>;
}
namespace System {
template<>
struct Nullable_1<char16_t>;
}
namespace System {
template<>
struct Nullable_1<double_t>;
}
namespace System {
template<>
struct Nullable_1<float_t>;
}
namespace System {
template<>
struct Nullable_1<int16_t>;
}
namespace System {
template<>
struct Nullable_1<int32_t>;
}
namespace System {
template<>
struct Nullable_1<int64_t>;
}
namespace System {
template<>
struct Nullable_1<int8_t>;
}
namespace System {
template<>
struct Nullable_1<uint16_t>;
}
namespace System {
template<>
struct Nullable_1<uint32_t>;
}
namespace System {
template<>
struct Nullable_1<uint64_t>;
}
namespace System {
template<>
struct Nullable_1<uint8_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Nullable_1);
// Type: System::Nullable`1
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 7764 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::__InputControlScheme__MatchResult> : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::__InputControlScheme__MatchResult  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::__InputControlScheme__MatchResult  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::__InputControlScheme__MatchResult  value) ;

constexpr ::UnityEngine::InputSystem::__InputControlScheme__MatchResult& __get_value() ;

constexpr ::UnityEngine::InputSystem::__InputControlScheme__MatchResult const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::__InputControlScheme__MatchResult  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputControlScheme__MatchResult get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputControlScheme__MatchResult GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputControlScheme__MatchResult GetValueOrDefault(::UnityEngine::InputSystem::__InputControlScheme__MatchResult  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputControlScheme__MatchResult> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputControlScheme__MatchResult> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::__InputControlScheme__MatchResult", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::__InputControlScheme__MatchResult  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 7754 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>& __get_value() ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0> get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0> GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0> GetValueOrDefault(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_0>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint8_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 7242 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<T> : public ::bs_hook::ValueTypeWrapper<0x2> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x1
 __declspec(property(get=__get_value, put=__set_value)) T  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) T  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(T  value) ;

constexpr T& __get_value() ;

constexpr T const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetValueOrDefault(T  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<T>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<T> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<T> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, T  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 5059 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>& __get_value() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> GetValueOrDefault(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4780 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__SongRunningHelper__QueuedSongParams  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__SongRunningHelper__QueuedSongParams  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  value) ;

constexpr ::GlobalNamespace::__SongRunningHelper__QueuedSongParams& __get_value() ;

constexpr ::GlobalNamespace::__SongRunningHelper__QueuedSongParams const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__SongRunningHelper__QueuedSongParams get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__SongRunningHelper__QueuedSongParams GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__SongRunningHelper__QueuedSongParams GetValueOrDefault(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__SongRunningHelper__QueuedSongParams", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::__SongRunningHelper__QueuedSongParams  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4778 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> : public ::bs_hook::ValueTypeWrapper<0x3> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x1
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__RecordingToolManager__SetupData  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__RecordingToolManager__SetupData  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::__RecordingToolManager__SetupData  value) ;

constexpr ::GlobalNamespace::__RecordingToolManager__SetupData& __get_value() ;

constexpr ::GlobalNamespace::__RecordingToolManager__SetupData const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__RecordingToolManager__SetupData  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__RecordingToolManager__SetupData get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__RecordingToolManager__SetupData GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__RecordingToolManager__SetupData GetValueOrDefault(::GlobalNamespace::__RecordingToolManager__SetupData  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__RecordingToolManager__SetupData", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::__RecordingToolManager__SetupData  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x3>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4777 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig  value) ;

constexpr ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig& __get_value() ;

constexpr ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig GetValueOrDefault(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4776 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> : public ::bs_hook::ValueTypeWrapper<0x3> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x1
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent  value) ;

constexpr ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent& __get_value() ;

constexpr ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent GetValueOrDefault(::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x3>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4775 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> : public ::bs_hook::ValueTypeWrapper<0x2> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x1
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRSceneManager__LogForwarder  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRSceneManager__LogForwarder  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::__OVRSceneManager__LogForwarder  value) ;

constexpr ::GlobalNamespace::__OVRSceneManager__LogForwarder& __get_value() ;

constexpr ::GlobalNamespace::__OVRSceneManager__LogForwarder const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__OVRSceneManager__LogForwarder  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRSceneManager__LogForwarder get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRSceneManager__LogForwarder GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRSceneManager__LogForwarder GetValueOrDefault(::GlobalNamespace::__OVRSceneManager__LogForwarder  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRSceneManager__LogForwarder", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::__OVRSceneManager__LogForwarder  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4773 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRPlugin__Posef  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRPlugin__Posef  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::__OVRPlugin__Posef  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__Posef& __get_value() ;

constexpr ::GlobalNamespace::__OVRPlugin__Posef const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__OVRPlugin__Posef  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__Posef get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__Posef GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__Posef GetValueOrDefault(::GlobalNamespace::__OVRPlugin__Posef  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::__OVRPlugin__Posef  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4772 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::__OVRPlugin__BodyState> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::__OVRPlugin__BodyState  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::__OVRPlugin__BodyState  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::__OVRPlugin__BodyState  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__BodyState& __get_value() ;

constexpr ::GlobalNamespace::__OVRPlugin__BodyState const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__OVRPlugin__BodyState  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__BodyState get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__BodyState GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__BodyState GetValueOrDefault(::GlobalNamespace::__OVRPlugin__BodyState  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::__OVRPlugin__BodyState>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__BodyState> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__BodyState> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::__OVRPlugin__BodyState", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::__OVRPlugin__BodyState  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4768 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> : public ::bs_hook::ValueTypeWrapper<0x80> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  value) ;

constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride& __get_value() ;

constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride GetValueOrDefault(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x80>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4761 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::Net::Http::Headers::Token> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::System::Net::Http::Headers::Token  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::Net::Http::Headers::Token  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::Net::Http::Headers::Token  value) ;

constexpr ::System::Net::Http::Headers::Token& __get_value() ;

constexpr ::System::Net::Http::Headers::Token const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Net::Http::Headers::Token  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Net::Http::Headers::Token get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Net::Http::Headers::Token GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Net::Http::Headers::Token GetValueOrDefault(::System::Net::Http::Headers::Token  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::Net::Http::Headers::Token>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Net::Http::Headers::Token> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Net::Http::Headers::Token> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Net::Http::Headers::Token", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::Net::Http::Headers::Token  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4758 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::Runtime::Serialization::StreamingContext> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::Runtime::Serialization::StreamingContext  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::Runtime::Serialization::StreamingContext  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::Runtime::Serialization::StreamingContext  value) ;

constexpr ::System::Runtime::Serialization::StreamingContext& __get_value() ;

constexpr ::System::Runtime::Serialization::StreamingContext const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::StreamingContext  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::Serialization::StreamingContext get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::Serialization::StreamingContext GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::Serialization::StreamingContext GetValueOrDefault(::System::Runtime::Serialization::StreamingContext  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::Runtime::Serialization::StreamingContext>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::Runtime::Serialization::StreamingContext  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4755 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::Text::RegularExpressions::RegexPrefix> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::Text::RegularExpressions::RegexPrefix  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::Text::RegularExpressions::RegexPrefix  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::Text::RegularExpressions::RegexPrefix  value) ;

constexpr ::System::Text::RegularExpressions::RegexPrefix& __get_value() ;

constexpr ::System::Text::RegularExpressions::RegexPrefix const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Text::RegularExpressions::RegexPrefix  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Text::RegularExpressions::RegexPrefix get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Text::RegularExpressions::RegexPrefix GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Text::RegularExpressions::RegexPrefix GetValueOrDefault(::System::Text::RegularExpressions::RegexPrefix  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Text::RegularExpressions::RegexPrefix", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::Text::RegularExpressions::RegexPrefix  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4751 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::OVRPose> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::OVRPose  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::OVRPose  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::OVRPose  value) ;

constexpr ::GlobalNamespace::OVRPose& __get_value() ;

constexpr ::GlobalNamespace::OVRPose const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::OVRPose  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::OVRPose get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::OVRPose GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::OVRPose GetValueOrDefault(::GlobalNamespace::OVRPose  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::OVRPose>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::OVRPose> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::OVRPose> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::OVRPose  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4742 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::Unity::Jobs::JobHandle> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::Unity::Jobs::JobHandle  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::Unity::Jobs::JobHandle  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::Unity::Jobs::JobHandle  value) ;

constexpr ::Unity::Jobs::JobHandle& __get_value() ;

constexpr ::Unity::Jobs::JobHandle const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Jobs::JobHandle  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle GetValueOrDefault(::Unity::Jobs::JobHandle  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::Unity::Jobs::JobHandle>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::Unity::Jobs::JobHandle> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::Unity::Jobs::JobHandle> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::Unity::Jobs::JobHandle  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4728 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::ENet::Address> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x2
 __declspec(property(get=__get_value, put=__set_value)) ::ENet::Address  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::ENet::Address  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::ENet::Address  value) ;

constexpr ::ENet::Address& __get_value() ;

constexpr ::ENet::Address const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ENet::Address  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ENet::Address get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ENet::Address GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ENet::Address GetValueOrDefault(::ENet::Address  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::ENet::Address>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::ENet::Address> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::ENet::Address> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::ENet::Address", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::ENet::Address  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4387 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> : public ::bs_hook::ValueTypeWrapper<0xd8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd8};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem& __get_value() ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem GetValueOrDefault(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xd8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4213 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::Newtonsoft::Json::JsonPosition> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::Newtonsoft::Json::JsonPosition  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::Newtonsoft::Json::JsonPosition  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::Newtonsoft::Json::JsonPosition  value) ;

constexpr ::Newtonsoft::Json::JsonPosition& __get_value() ;

constexpr ::Newtonsoft::Json::JsonPosition const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Newtonsoft::Json::JsonPosition  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Newtonsoft::Json::JsonPosition get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Newtonsoft::Json::JsonPosition GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Newtonsoft::Json::JsonPosition GetValueOrDefault(::Newtonsoft::Json::JsonPosition  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::Newtonsoft::Json::JsonPosition>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::Newtonsoft::Json::JsonPosition", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::Newtonsoft::Json::JsonPosition  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3668 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::__InputRemoting__Message  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::__InputRemoting__Message  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::__InputRemoting__Message  value) ;

constexpr ::UnityEngine::InputSystem::__InputRemoting__Message& __get_value() ;

constexpr ::UnityEngine::InputSystem::__InputRemoting__Message const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::__InputRemoting__Message  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputRemoting__Message get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputRemoting__Message GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputRemoting__Message GetValueOrDefault(::UnityEngine::InputSystem::__InputRemoting__Message  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::__InputRemoting__Message", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::__InputRemoting__Message  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3342 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::Quaternion> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Quaternion  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::Quaternion  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_value() ;

constexpr ::UnityEngine::Quaternion const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Quaternion  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion GetValueOrDefault(::UnityEngine::Quaternion  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::Quaternion>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::Quaternion> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::Quaternion> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::Quaternion  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3340 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __get_value() ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue GetValueOrDefault(::UnityEngine::InputSystem::Utilities::PrimitiveValue  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3305 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Users::InputUserAccountHandle  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Users::InputUserAccountHandle  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::Users::InputUserAccountHandle  value) ;

constexpr ::UnityEngine::InputSystem::Users::InputUserAccountHandle& __get_value() ;

constexpr ::UnityEngine::InputSystem::Users::InputUserAccountHandle const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Users::InputUserAccountHandle  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Users::InputUserAccountHandle get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Users::InputUserAccountHandle GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Users::InputUserAccountHandle GetValueOrDefault(::UnityEngine::InputSystem::Users::InputUserAccountHandle  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::Users::InputUserAccountHandle  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3304 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Users::InputUser> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Users::InputUser  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Users::InputUser  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::Users::InputUser  value) ;

constexpr ::UnityEngine::InputSystem::Users::InputUser& __get_value() ;

constexpr ::UnityEngine::InputSystem::Users::InputUser const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Users::InputUser  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Users::InputUser get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Users::InputUser GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Users::InputUser GetValueOrDefault(::UnityEngine::InputSystem::Users::InputUser  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Users::InputUser", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::Users::InputUser  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3302 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& __get_value() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher GetValueOrDefault(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3283 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::UIElements::EventDispatcherGate> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::UIElements::EventDispatcherGate  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::UIElements::EventDispatcherGate  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::UIElements::EventDispatcherGate  value) ;

constexpr ::UnityEngine::UIElements::EventDispatcherGate& __get_value() ;

constexpr ::UnityEngine::UIElements::EventDispatcherGate const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::EventDispatcherGate  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::EventDispatcherGate get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::EventDispatcherGate GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::EventDispatcherGate GetValueOrDefault(::UnityEngine::UIElements::EventDispatcherGate  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::UIElements::EventDispatcherGate>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::UIElements::EventDispatcherGate> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::UIElements::EventDispatcherGate> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::UIElements::EventDispatcherGate", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::UIElements::EventDispatcherGate  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3107 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::InputControlScheme> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::InputControlScheme  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::InputControlScheme  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::InputControlScheme  value) ;

constexpr ::UnityEngine::InputSystem::InputControlScheme& __get_value() ;

constexpr ::UnityEngine::InputSystem::InputControlScheme const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputControlScheme  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::InputControlScheme get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::InputControlScheme GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::InputControlScheme GetValueOrDefault(::UnityEngine::InputSystem::InputControlScheme  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::InputControlScheme", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::InputControlScheme  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3105 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::InputBinding> : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::InputBinding  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::InputBinding  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::InputBinding  value) ;

constexpr ::UnityEngine::InputSystem::InputBinding& __get_value() ;

constexpr ::UnityEngine::InputSystem::InputBinding const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputBinding  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::InputBinding get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::InputBinding GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::InputBinding GetValueOrDefault(::UnityEngine::InputSystem::InputBinding  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::InputBinding  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2711 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::TimeSpan> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::TimeSpan  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::TimeSpan  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_value() ;

constexpr ::System::TimeSpan const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::TimeSpan  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::TimeSpan get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::TimeSpan GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::TimeSpan GetValueOrDefault(::System::TimeSpan  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::TimeSpan>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::TimeSpan> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::TimeSpan> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::TimeSpan  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2707 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<int8_t> : public ::bs_hook::ValueTypeWrapper<0x2> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x1
 __declspec(property(get=__get_value, put=__set_value)) int8_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) int8_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(int8_t  value) ;

constexpr int8_t& __get_value() ;

constexpr int8_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int8_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int8_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int8_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int8_t GetValueOrDefault(int8_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<int8_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<int8_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<int8_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int8_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, int8_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2704 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<double_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) double_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) double_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(double_t  value) ;

constexpr double_t& __get_value() ;

constexpr double_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(double_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t GetValueOrDefault(double_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<double_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<double_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<double_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "double_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, double_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2703 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::Decimal> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::Decimal  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::Decimal  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::Decimal  value) ;

constexpr ::System::Decimal& __get_value() ;

constexpr ::System::Decimal const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Decimal  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Decimal get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Decimal GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Decimal GetValueOrDefault(::System::Decimal  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::Decimal>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Decimal> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Decimal> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Decimal", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::Decimal  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2702 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::DateTimeOffset> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::DateTimeOffset  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::DateTimeOffset  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::DateTimeOffset  value) ;

constexpr ::System::DateTimeOffset& __get_value() ;

constexpr ::System::DateTimeOffset const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::DateTimeOffset  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::DateTimeOffset get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::DateTimeOffset GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::DateTimeOffset GetValueOrDefault(::System::DateTimeOffset  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::DateTimeOffset>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::DateTimeOffset> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::DateTimeOffset> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::DateTimeOffset", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::DateTimeOffset  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2701 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::DateTime> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::DateTime  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::DateTime  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_value() ;

constexpr ::System::DateTime const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::DateTime  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::DateTime get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::DateTime GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::DateTime GetValueOrDefault(::System::DateTime  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::DateTime>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::DateTime> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::DateTime> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::DateTime", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::DateTime  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 974 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) T  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) T  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(T  value) ;

constexpr T& __get_value() ;

constexpr T const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetValueOrDefault(T  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<T>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<T> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<T> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, T  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 876 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::GlobalNamespace::AuthenticationToken> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::GlobalNamespace::AuthenticationToken  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::GlobalNamespace::AuthenticationToken  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::GlobalNamespace::AuthenticationToken  value) ;

constexpr ::GlobalNamespace::AuthenticationToken& __get_value() ;

constexpr ::GlobalNamespace::AuthenticationToken const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::AuthenticationToken  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::AuthenticationToken get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::AuthenticationToken GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::AuthenticationToken GetValueOrDefault(::GlobalNamespace::AuthenticationToken  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::GlobalNamespace::AuthenticationToken>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::AuthenticationToken", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::GlobalNamespace::AuthenticationToken  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 753 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<uint32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) uint32_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) uint32_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(uint32_t  value) ;

constexpr uint32_t& __get_value() ;

constexpr uint32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t GetValueOrDefault(uint32_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<uint32_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<uint32_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<uint32_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, uint32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 752 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<uint16_t> : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x2
 __declspec(property(get=__get_value, put=__set_value)) uint16_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) uint16_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(uint16_t  value) ;

constexpr uint16_t& __get_value() ;

constexpr uint16_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint16_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t GetValueOrDefault(uint16_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<uint16_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<uint16_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<uint16_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, uint16_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 745 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<int16_t> : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x2
 __declspec(property(get=__get_value, put=__set_value)) int16_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) int16_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(int16_t  value) ;

constexpr int16_t& __get_value() ;

constexpr int16_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int16_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int16_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int16_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int16_t GetValueOrDefault(int16_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<int16_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<int16_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<int16_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int16_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, int16_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 741 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<uint8_t> : public ::bs_hook::ValueTypeWrapper<0x2> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x1
 __declspec(property(get=__get_value, put=__set_value)) uint8_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) uint8_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(uint8_t  value) ;

constexpr uint8_t& __get_value() ;

constexpr uint8_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint8_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint8_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint8_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint8_t GetValueOrDefault(uint8_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<uint8_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<uint8_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<uint8_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, uint8_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 424 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::__InputAction__CallbackContext  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::InputSystem::__InputAction__CallbackContext  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::InputSystem::__InputAction__CallbackContext  value) ;

constexpr ::UnityEngine::InputSystem::__InputAction__CallbackContext& __get_value() ;

constexpr ::UnityEngine::InputSystem::__InputAction__CallbackContext const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::__InputAction__CallbackContext  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputAction__CallbackContext get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputAction__CallbackContext GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::__InputAction__CallbackContext GetValueOrDefault(::UnityEngine::InputSystem::__InputAction__CallbackContext  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::__InputAction__CallbackContext", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::InputSystem::__InputAction__CallbackContext  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 412 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Vector3  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::Vector3  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_value() ;

constexpr ::UnityEngine::Vector3 const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Vector3  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 GetValueOrDefault(::UnityEngine::Vector3  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::Vector3>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::Vector3> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::Vector3> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::Vector3  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 407 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<uint64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) uint64_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) uint64_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(uint64_t  value) ;

constexpr uint64_t& __get_value() ;

constexpr uint64_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint64_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t GetValueOrDefault(uint64_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<uint64_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<uint64_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<uint64_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, uint64_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 391 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<float_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) float_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(float_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t GetValueOrDefault(float_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<float_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<float_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<float_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, float_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 333 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<int64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) int64_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) int64_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(int64_t  value) ;

constexpr int64_t& __get_value() ;

constexpr int64_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int64_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t GetValueOrDefault(int64_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<int64_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<int64_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<int64_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, int64_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 314 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::System::Guid> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::System::Guid  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::System::Guid  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::System::Guid  value) ;

constexpr ::System::Guid& __get_value() ;

constexpr ::System::Guid const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid GetValueOrDefault(::System::Guid  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::System::Guid>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Guid> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::System::Guid> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::System::Guid  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 293 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<::UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::Color  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) ::UnityEngine::Color  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_value() ;

constexpr ::UnityEngine::Color const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Color  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color GetValueOrDefault(::UnityEngine::Color  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<::UnityEngine::Color>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::Color> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<::UnityEngine::Color> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, ::UnityEngine::Color  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 292 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<char16_t> : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x2
 __declspec(property(get=__get_value, put=__set_value)) char16_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) char16_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(char16_t  value) ;

constexpr char16_t& __get_value() ;

constexpr char16_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(char16_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline char16_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline char16_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline char16_t GetValueOrDefault(char16_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<char16_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<char16_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<char16_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "char16_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, char16_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 105 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<bool> : public ::bs_hook::ValueTypeWrapper<0x2> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x1
 __declspec(property(get=__get_value, put=__set_value)) bool  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) bool  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(bool  value) ;

constexpr bool& __get_value() ;

constexpr bool const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool GetValueOrDefault(bool  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<bool>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<bool> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<bool> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, bool  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 })
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hasValue offset 0x0
 __declspec(property(get=__get_hasValue, put=__set_hasValue)) bool  hasValue;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_hasValue(bool  value) ;

constexpr bool& __get_hasValue() ;

constexpr bool const& __get_hasValue() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetValueOrDefault(int32_t  defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* Box(::System::Nullable_1<int32_t>  o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<int32_t> Unbox(::System::Object*  o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Nullable_1<int32_t> UnboxExact(::System::Object*  o) ;

// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool  hasValue, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Nullable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Nullable_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Nullable_1, "System", "Nullable`1");
