#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__DeviceRequirement;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__MatchResult;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__SchemeJson;
}
namespace GlobalNamespace {
struct __InputControlScheme__DeviceRequirement__Flags;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Match;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Result;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Enumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
struct __InputControlScheme__SchemeJson__DeviceJson;
}
// Forward declare root types
namespace GlobalNamespace {
struct __InputControlScheme__DeviceRequirement__Flags;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Result;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Enumerator;
}
namespace GlobalNamespace {
struct __InputControlScheme__MatchResult__Match;
}
namespace GlobalNamespace {
struct __InputControlScheme__SchemeJson__DeviceJson;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__DeviceRequirement;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__MatchResult;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__SchemeJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags);
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__MatchResult__Result);
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator);
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__MatchResult__Match);
MARK_VAL_T(::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlScheme);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlScheme__MatchResult);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlScheme__SchemeJson);
// Type: ::Result
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6196))
// CS Name: ::InputControlScheme::MatchResult::Result
struct CORDL_TYPE __InputControlScheme__MatchResult__Result : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputControlScheme__MatchResult__Result_Unwrapped
enum struct ____InputControlScheme__MatchResult__Result_Unwrapped : int32_t {
__E_AllSatisfied = static_cast<int32_t>(0x0),
__E_MissingRequired = static_cast<int32_t>(0x1),
__E_MissingOptional = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AllSatisfied value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__InputControlScheme__MatchResult__Result const AllSatisfied;

/// @brief Field MissingRequired value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__InputControlScheme__MatchResult__Result const MissingRequired;

/// @brief Field MissingOptional value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__InputControlScheme__MatchResult__Result const MissingOptional;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputControlScheme__MatchResult__Result_Unwrapped () const noexcept {
return std::bit_cast<____InputControlScheme__MatchResult__Result_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputControlScheme__MatchResult__Result(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlScheme__MatchResult__Result(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlScheme__MatchResult__Result()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__MatchResult__Result, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Match
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6197))
// CS Name: ::InputControlScheme::MatchResult::Match
struct CORDL_TYPE __InputControlScheme__MatchResult__Match : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_RequirementIndex offset 0x0
 __declspec(property(get=__get_m_RequirementIndex, put=__set_m_RequirementIndex)) int32_t  m_RequirementIndex;

/// @brief Field m_Requirements offset 0x8
 __declspec(property(get=__get_m_Requirements, put=__set_m_Requirements)) ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Requirements;

/// @brief Field m_Controls offset 0x10
 __declspec(property(get=__get_m_Controls, put=__set_m_Controls)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls;

 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_device)) ::UnityEngine::InputSystem::InputDevice*  device;

 __declspec(property(get=get_requirementIndex)) int32_t  requirementIndex;

 __declspec(property(get=get_requirement)) ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  requirement;

 __declspec(property(get=get_isOptional)) bool  isOptional;

constexpr void __set_m_RequirementIndex(int32_t  value) ;

constexpr int32_t& __get_m_RequirementIndex() ;

constexpr int32_t const& __get_m_RequirementIndex() const;

constexpr void __set_m_Requirements(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>& __get_m_Requirements() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> const& __get_m_Requirements() const;

constexpr void __set_m_Controls(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>& __get_m_Controls() ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> const& __get_m_Controls() const;

/// @brief Method get_control addr 0x2a5d1a4 size 0x4c virtual false final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method get_device addr 0x2a5d1f0 size 0x18 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* get_device() ;

/// @brief Method get_requirementIndex addr 0x2a5d208 size 0x8 virtual false final false
inline int32_t get_requirementIndex() ;

/// @brief Method get_requirement addr 0x2a5d210 size 0x34 virtual false final false
inline ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement get_requirement() ;

/// @brief Method get_isOptional addr 0x2a5d244 size 0x14 virtual false final false
inline bool get_isOptional() ;

// Ctor Parameters [CppParam { name: "m_RequirementIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }]
constexpr __InputControlScheme__MatchResult__Match(int32_t  m_RequirementIndex, ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Requirements, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlScheme__MatchResult__Match(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlScheme__MatchResult__Match()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__MatchResult__Match, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Enumerator
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6198))
// CS Name: ::InputControlScheme::MatchResult::Enumerator
struct CORDL_TYPE __InputControlScheme__MatchResult__Enumerator : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_Index offset 0x0
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

/// @brief Field m_Requirements offset 0x8
 __declspec(property(get=__get_m_Requirements, put=__set_m_Requirements)) ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Requirements;

/// @brief Field m_Controls offset 0x10
 __declspec(property(get=__get_m_Controls, put=__set_m_Controls)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__InputControlScheme__MatchResult__Match  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

constexpr void __set_m_Requirements(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>& __get_m_Requirements() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> const& __get_m_Requirements() const;

constexpr void __set_m_Controls(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>& __get_m_Controls() ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> const& __get_m_Controls() const;

/// @brief Method MoveNext addr 0x2a5d264 size 0x2c virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2a5d290 size 0xc virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x2a5d29c size 0x84 virtual true final true
inline ::GlobalNamespace::__InputControlScheme__MatchResult__Match get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2a5d320 size 0x70 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x2a5d390 size 0x4 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }]
constexpr __InputControlScheme__MatchResult__Enumerator(int32_t  m_Index, ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Requirements, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlScheme__MatchResult__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlScheme__MatchResult__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MatchResult
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6199))
// CS Name: ::InputControlScheme::MatchResult
struct CORDL_TYPE __InputControlScheme__MatchResult : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
using Enumerator = ::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator;

using Match = ::GlobalNamespace::__InputControlScheme__MatchResult__Match;

using Result = ::GlobalNamespace::__InputControlScheme__MatchResult__Result;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_Result offset 0x0
 __declspec(property(get=__get_m_Result, put=__set_m_Result)) ::GlobalNamespace::__InputControlScheme__MatchResult__Result  m_Result;

/// @brief Field m_Score offset 0x4
 __declspec(property(get=__get_m_Score, put=__set_m_Score)) float_t  m_Score;

/// @brief Field m_Devices offset 0x8
 __declspec(property(get=__get_m_Devices, put=__set_m_Devices)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>  m_Devices;

/// @brief Field m_Controls offset 0x28
 __declspec(property(get=__get_m_Controls, put=__set_m_Controls)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls;

/// @brief Field m_Requirements offset 0x48
 __declspec(property(get=__get_m_Requirements, put=__set_m_Requirements)) ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Requirements;

 __declspec(property(get=get_score)) float_t  score;

 __declspec(property(get=get_isSuccessfulMatch)) bool  isSuccessfulMatch;

 __declspec(property(get=get_hasMissingRequiredDevices)) bool  hasMissingRequiredDevices;

 __declspec(property(get=get_hasMissingOptionalDevices)) bool  hasMissingOptionalDevices;

 __declspec(property(get=get_devices)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>  devices;

 __declspec(property(get=get_Item)) ::GlobalNamespace::__InputControlScheme__MatchResult__Match  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Result(::GlobalNamespace::__InputControlScheme__MatchResult__Result  value) ;

constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Result& __get_m_Result() ;

constexpr ::GlobalNamespace::__InputControlScheme__MatchResult__Result const& __get_m_Result() const;

constexpr void __set_m_Score(float_t  value) ;

constexpr float_t& __get_m_Score() ;

constexpr float_t const& __get_m_Score() const;

constexpr void __set_m_Devices(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>  value) ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>& __get_m_Devices() ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> const& __get_m_Devices() const;

constexpr void __set_m_Controls(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>& __get_m_Controls() ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> const& __get_m_Controls() const;

constexpr void __set_m_Requirements(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>& __get_m_Requirements() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> const& __get_m_Requirements() const;

/// @brief Method get_score addr 0x2a5cec8 size 0x8 virtual false final false
inline float_t get_score() ;

/// @brief Method get_isSuccessfulMatch addr 0x2a5ced0 size 0x10 virtual false final false
inline bool get_isSuccessfulMatch() ;

/// @brief Method get_hasMissingRequiredDevices addr 0x2a5cee0 size 0x10 virtual false final false
inline bool get_hasMissingRequiredDevices() ;

/// @brief Method get_hasMissingOptionalDevices addr 0x2a5cef0 size 0x10 virtual false final false
inline bool get_hasMissingOptionalDevices() ;

/// @brief Method get_devices addr 0x2a5cf00 size 0x13c virtual false final false
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> get_devices() ;

/// @brief Method get_Item addr 0x2a5d03c size 0x84 virtual false final false
inline ::GlobalNamespace::__InputControlScheme__MatchResult__Match get_Item(int32_t  index) ;

/// @brief Method GetEnumerator addr 0x2a5d0c0 size 0x70 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__InputControlScheme__MatchResult__Match>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2a5d130 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dispose addr 0x2a5d134 size 0x70 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "m_Result", ty: "::GlobalNamespace::__InputControlScheme__MatchResult__Result", modifiers: "", def_value: None }, CppParam { name: "m_Score", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Devices", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: None }]
constexpr __InputControlScheme__MatchResult(::GlobalNamespace::__InputControlScheme__MatchResult__Result  m_Result, float_t  m_Score, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>  m_Devices, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls, ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Requirements) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlScheme__MatchResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlScheme__MatchResult()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlScheme__MatchResult, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6200))
// CS Name: ::InputControlScheme::DeviceRequirement::Flags
struct CORDL_TYPE __InputControlScheme__DeviceRequirement__Flags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputControlScheme__DeviceRequirement__Flags_Unwrapped
enum struct ____InputControlScheme__DeviceRequirement__Flags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Optional = static_cast<int32_t>(0x1),
__E_Or = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags const None;

/// @brief Field Optional value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags const Optional;

/// @brief Field Or value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags const Or;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputControlScheme__DeviceRequirement__Flags_Unwrapped () const noexcept {
return std::bit_cast<____InputControlScheme__DeviceRequirement__Flags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputControlScheme__DeviceRequirement__Flags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlScheme__DeviceRequirement__Flags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlScheme__DeviceRequirement__Flags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DeviceRequirement
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6201))
// CS Name: ::InputControlScheme::DeviceRequirement
struct CORDL_TYPE __InputControlScheme__DeviceRequirement : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Flags = ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ControlPath offset 0x0
 __declspec(property(get=__get_m_ControlPath, put=__set_m_ControlPath)) ::StringW  m_ControlPath;

/// @brief Field m_Flags offset 0x8
 __declspec(property(get=__get_m_Flags, put=__set_m_Flags)) ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags  m_Flags;

 __declspec(property(get=get_controlPath, put=set_controlPath)) ::StringW  controlPath;

 __declspec(property(get=get_isOptional, put=set_isOptional)) bool  isOptional;

 __declspec(property(get=get_isAND, put=set_isAND)) bool  isAND;

 __declspec(property(get=get_isOR, put=set_isOR)) bool  isOR;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*() ;

constexpr void __set_m_ControlPath(::StringW  value) ;

constexpr ::StringW& __get_m_ControlPath() ;

constexpr ::StringW const& __get_m_ControlPath() const;

constexpr void __set_m_Flags(::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags  value) ;

constexpr ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags& __get_m_Flags() ;

constexpr ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags const& __get_m_Flags() const;

/// @brief Method get_controlPath addr 0x2a5d394 size 0x8 virtual false final false
inline ::StringW get_controlPath() ;

/// @brief Method set_controlPath addr 0x2a5d39c size 0x8 virtual false final false
inline void set_controlPath(::StringW  value) ;

/// @brief Method get_isOptional addr 0x2a5d258 size 0xc virtual false final false
inline bool get_isOptional() ;

/// @brief Method set_isOptional addr 0x2a5d3a4 size 0x1c virtual false final false
inline void set_isOptional(bool  value) ;

/// @brief Method get_isAND addr 0x2a5d3c0 size 0x10 virtual false final false
inline bool get_isAND() ;

/// @brief Method set_isAND addr 0x2a5d3dc size 0x1c virtual false final false
inline void set_isAND(bool  value) ;

/// @brief Method get_isOR addr 0x2a5d3d0 size 0xc virtual false final false
inline bool get_isOR() ;

/// @brief Method set_isOR addr 0x2a5d3f8 size 0x1c virtual false final false
inline void set_isOR(bool  value) ;

/// @brief Method ToString addr 0x2a5d414 size 0xc4 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0x2a5d4d8 size 0x6c virtual true final true
inline bool Equals(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  other) ;

/// @brief Method Equals addr 0x2a5d544 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2a5d5bc size 0xac virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2a5d668 size 0x2c virtual false final false
static inline bool op_Equality(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  left, ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  right) ;

/// @brief Method op_Inequality addr 0x2a5d694 size 0x30 virtual false final false
static inline bool op_Inequality(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  left, ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  right) ;

// Ctor Parameters [CppParam { name: "m_ControlPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags", modifiers: "", def_value: None }]
constexpr __InputControlScheme__DeviceRequirement(::StringW  m_ControlPath, ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags  m_Flags) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlScheme__DeviceRequirement(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlScheme__DeviceRequirement()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::DeviceJson
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6202))
// CS Name: ::InputControlScheme::SchemeJson::DeviceJson
struct CORDL_TYPE __InputControlScheme__SchemeJson__DeviceJson : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field devicePath offset 0x0
 __declspec(property(get=__get_devicePath, put=__set_devicePath)) ::StringW  devicePath;

/// @brief Field isOptional offset 0x8
 __declspec(property(get=__get_isOptional, put=__set_isOptional)) bool  isOptional;

/// @brief Field isOR offset 0x9
 __declspec(property(get=__get_isOR, put=__set_isOR)) bool  isOR;

constexpr void __set_devicePath(::StringW  value) ;

constexpr ::StringW& __get_devicePath() ;

constexpr ::StringW const& __get_devicePath() const;

constexpr void __set_isOptional(bool  value) ;

constexpr bool& __get_isOptional() ;

constexpr bool const& __get_isOptional() const;

constexpr void __set_isOR(bool  value) ;

constexpr bool& __get_isOR() ;

constexpr bool const& __get_isOR() const;

/// @brief Method ToDeviceEntry addr 0x2a5d808 size 0x1c virtual false final false
inline ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement ToDeviceEntry() ;

/// @brief Method From addr 0x2a5d904 size 0x14 virtual false final false
static inline ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson From(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  requirement) ;

// Ctor Parameters [CppParam { name: "devicePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOR", ty: "bool", modifiers: "", def_value: None }]
constexpr __InputControlScheme__SchemeJson__DeviceJson(::StringW  devicePath, bool  isOptional, bool  isOR) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlScheme__SchemeJson__DeviceJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlScheme__SchemeJson__DeviceJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SchemeJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6203))
// CS Name: ::InputControlScheme::SchemeJson
struct CORDL_TYPE __InputControlScheme__SchemeJson : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using DeviceJson = ::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field bindingGroup offset 0x8
 __declspec(property(get=__get_bindingGroup, put=__set_bindingGroup)) ::StringW  bindingGroup;

/// @brief Field devices offset 0x10
 __declspec(property(get=__get_devices, put=__set_devices)) ::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson,::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*>  devices;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_bindingGroup(::StringW  value) ;

constexpr ::StringW& __get_bindingGroup() ;

constexpr ::StringW const& __get_bindingGroup() const;

constexpr void __set_devices(::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson,::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson,::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*>& __get_devices() ;

constexpr ::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson,::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*> const& __get_devices() const;

/// @brief Method ToScheme addr 0x2a5d6c4 size 0x144 virtual false final false
inline ::UnityEngine::InputSystem::InputControlScheme ToScheme() ;

/// @brief Method ToJson addr 0x2a5d824 size 0xe0 virtual false final false
static inline ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson ToJson(::UnityEngine::InputSystem::InputControlScheme  scheme) ;

/// @brief Method ToJson addr 0x2a5d918 size 0x108 virtual false final false
static inline ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> ToJson(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  schemes) ;

/// @brief Method ToSchemes addr 0x2a5da20 size 0xf8 virtual false final false
static inline ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*> ToSchemes(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>  schemes) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bindingGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "devices", ty: "::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson,::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*>", modifiers: "", def_value: None }]
constexpr __InputControlScheme__SchemeJson(::StringW  name, ::StringW  bindingGroup, ::ArrayW<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson,::Array<::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson>*>  devices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputControlScheme__SchemeJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputControlScheme__SchemeJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlScheme
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6204))
// CS Name: ::UnityEngine.InputSystem::InputControlScheme
struct CORDL_TYPE InputControlScheme : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using SchemeJson = ::UnityEngine::InputSystem::__InputControlScheme__SchemeJson;

using DeviceRequirement = ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement;

using MatchResult = ::UnityEngine::InputSystem::__InputControlScheme__MatchResult;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Name offset 0x0
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_BindingGroup offset 0x8
 __declspec(property(get=__get_m_BindingGroup, put=__set_m_BindingGroup)) ::StringW  m_BindingGroup;

/// @brief Field m_DeviceRequirements offset 0x10
 __declspec(property(get=__get_m_DeviceRequirements, put=__set_m_DeviceRequirements)) ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_DeviceRequirements;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_bindingGroup, put=set_bindingGroup)) ::StringW  bindingGroup;

 __declspec(property(get=get_deviceRequirements)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>  deviceRequirements;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*() ;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_BindingGroup(::StringW  value) ;

constexpr ::StringW& __get_m_BindingGroup() ;

constexpr ::StringW const& __get_m_BindingGroup() const;

constexpr void __set_m_DeviceRequirements(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>& __get_m_DeviceRequirements() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> const& __get_m_DeviceRequirements() const;

/// @brief Method get_name addr 0x2a58c94 size 0x8 virtual false final false
inline ::StringW get_name() ;

/// @brief Method get_bindingGroup addr 0x2a58c9c size 0x8 virtual false final false
inline ::StringW get_bindingGroup() ;

/// @brief Method set_bindingGroup addr 0x2a58ca4 size 0x8 virtual false final false
inline void set_bindingGroup(::StringW  value) ;

/// @brief Method get_deviceRequirements addr 0x2a58cac size 0x60 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement> get_deviceRequirements() ;

/// @brief Method .ctor addr 0x2a58d0c size 0xf4 virtual false final false
inline void _ctor(::StringW  name, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*  devices, ::StringW  bindingGroup) ;

/// @brief Method SetNameAndBindingGroup addr 0x2a58e00 size 0xb8 virtual false final false
inline void SetNameAndBindingGroup(::StringW  name, ::StringW  bindingGroup) ;

/// @brief Method FindControlSchemeForDevices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevices,typename TSchemes>
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlSchemeForDevices(TDevices  devices, TSchemes  schemes, ::UnityEngine::InputSystem::InputDevice*  mustIncludeDevice, bool  allowUnsuccesfulMatch) ;

/// @brief Method FindControlSchemeForDevices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevices,typename TSchemes>
static inline bool FindControlSchemeForDevices(TDevices  devices, TSchemes  schemes, ByRef<::UnityEngine::InputSystem::InputControlScheme>  controlScheme, ByRef<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>  matchResult, ::UnityEngine::InputSystem::InputDevice*  mustIncludeDevice, bool  allowUnsuccessfulMatch) ;

/// @brief Method FindControlSchemeForDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSchemes>
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlSchemeForDevice(::UnityEngine::InputSystem::InputDevice*  device, TSchemes  schemes) ;

/// @brief Method SupportsDevice addr 0x2a58eb8 size 0xd4 virtual false final false
inline bool SupportsDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method PickDevicesFrom addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevices>
inline ::UnityEngine::InputSystem::__InputControlScheme__MatchResult PickDevicesFrom(TDevices  devices, ::UnityEngine::InputSystem::InputDevice*  favorDevice) ;

/// @brief Method Equals addr 0x2a58f8c size 0x13c virtual true final true
inline bool Equals(::UnityEngine::InputSystem::InputControlScheme  other) ;

/// @brief Method Equals addr 0x2a590c8 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2a59158 size 0x80 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2a591d8 size 0x184 virtual true final false
inline ::StringW ToString() ;

/// @brief Method op_Equality addr 0x2a5935c size 0x30 virtual false final false
static inline bool op_Equality(::UnityEngine::InputSystem::InputControlScheme  left, ::UnityEngine::InputSystem::InputControlScheme  right) ;

/// @brief Method op_Inequality addr 0x2a5938c size 0x34 virtual false final false
static inline bool op_Inequality(::UnityEngine::InputSystem::InputControlScheme  left, ::UnityEngine::InputSystem::InputControlScheme  right) ;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_BindingGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_DeviceRequirements", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: None }]
constexpr InputControlScheme(::StringW  m_Name, ::StringW  m_BindingGroup, ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_DeviceRequirements) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputControlScheme(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputControlScheme()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlScheme, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement/Flags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__MatchResult__Result, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Result");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__MatchResult__Enumerator, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__MatchResult__Match, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Match");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlScheme__SchemeJson__DeviceJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson/DeviceJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlScheme, "UnityEngine.InputSystem", "InputControlScheme");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement, "UnityEngine.InputSystem", "InputControlScheme/DeviceRequirement");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlScheme__MatchResult, "UnityEngine.InputSystem", "InputControlScheme/MatchResult");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson");
