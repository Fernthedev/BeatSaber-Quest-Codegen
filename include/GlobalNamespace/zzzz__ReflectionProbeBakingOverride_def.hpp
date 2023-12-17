#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeBakingOverride)
namespace GlobalNamespace {
struct __ReflectionProbeBakingOverride__ActiveStateHandling;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ReflectionProbeBakingOverride__ActiveStateHandling;
}
namespace GlobalNamespace {
class ReflectionProbeBakingOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling);
MARK_REF_PTR_T(::GlobalNamespace::ReflectionProbeBakingOverride);
// Type: ::ActiveStateHandling
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5865))
// CS Name: ::ReflectionProbeBakingOverride::ActiveStateHandling
struct CORDL_TYPE __ReflectionProbeBakingOverride__ActiveStateHandling : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped
enum struct ____ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped : int32_t {
__E_LeaveAsIs = static_cast<int32_t>(0x0),
__E_Enable = static_cast<int32_t>(0x1),
__E_Disable = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LeaveAsIs value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const LeaveAsIs;

/// @brief Field Enable value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const Enable;

/// @brief Field Disable value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const Disable;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped () const noexcept {
return std::bit_cast<____ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReflectionProbeBakingOverride__ActiveStateHandling(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReflectionProbeBakingOverride__ActiveStateHandling(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReflectionProbeBakingOverride__ActiveStateHandling()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ReflectionProbeBakingOverride
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5866))
// CS Name: ::ReflectionProbeBakingOverride*
class CORDL_TYPE ReflectionProbeBakingOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActiveStateHandling = ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _stateHandling offset 0x18
 __declspec(property(get=__get__stateHandling, put=__set__stateHandling)) ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling  _stateHandling;

/// @brief Field _setPosition offset 0x1c
 __declspec(property(get=__get__setPosition, put=__set__setPosition)) bool  _setPosition;

/// @brief Field _localPosition offset 0x20
 __declspec(property(get=__get__localPosition, put=__set__localPosition)) ::UnityEngine::Vector3  _localPosition;

/// @brief Field _setRotation offset 0x2c
 __declspec(property(get=__get__setRotation, put=__set__setRotation)) bool  _setRotation;

/// @brief Field _localRotation offset 0x30
 __declspec(property(get=__get__localRotation, put=__set__localRotation)) ::UnityEngine::Vector3  _localRotation;

/// @brief Field _setScale offset 0x3c
 __declspec(property(get=__get__setScale, put=__set__setScale)) bool  _setScale;

/// @brief Field _localScale offset 0x40
 __declspec(property(get=__get__localScale, put=__set__localScale)) ::UnityEngine::Vector3  _localScale;

constexpr void __set__stateHandling(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling  value) ;

constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling& __get__stateHandling() ;

constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const& __get__stateHandling() const;

constexpr void __set__setPosition(bool  value) ;

constexpr bool& __get__setPosition() ;

constexpr bool const& __get__setPosition() const;

constexpr void __set__localPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__localPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__localPosition() const;

constexpr void __set__setRotation(bool  value) ;

constexpr bool& __get__setRotation() ;

constexpr bool const& __get__setRotation() const;

constexpr void __set__localRotation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__localRotation() ;

constexpr ::UnityEngine::Vector3 const& __get__localRotation() const;

constexpr void __set__setScale(bool  value) ;

constexpr bool& __get__setScale() ;

constexpr bool const& __get__setScale() const;

constexpr void __set__localScale(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__localScale() ;

constexpr ::UnityEngine::Vector3 const& __get__localScale() const;

/// @brief Method UpdateForProbeBaking addr 0x22f82f8 size 0xe8 virtual false final false
inline void UpdateForProbeBaking() ;

static inline ::GlobalNamespace::ReflectionProbeBakingOverride* New_ctor() ;

/// @brief Method .ctor addr 0x22f83e0 size 0xa8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionProbeBakingOverride(ReflectionProbeBakingOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionProbeBakingOverride(ReflectionProbeBakingOverride const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionProbeBakingOverride()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReflectionProbeBakingOverride, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling, "", "ReflectionProbeBakingOverride/ActiveStateHandling");
NEED_NO_BOX(::GlobalNamespace::ReflectionProbeBakingOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionProbeBakingOverride*, "", "ReflectionProbeBakingOverride");
