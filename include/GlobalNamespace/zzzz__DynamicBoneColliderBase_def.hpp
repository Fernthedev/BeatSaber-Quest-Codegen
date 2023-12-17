#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicBoneColliderBase)
namespace GlobalNamespace {
struct __DynamicBoneColliderBase__Bound;
}
namespace GlobalNamespace {
struct __DynamicBoneColliderBase__Direction;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __DynamicBoneColliderBase__Bound;
}
namespace GlobalNamespace {
struct __DynamicBoneColliderBase__Direction;
}
namespace GlobalNamespace {
class DynamicBoneColliderBase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DynamicBoneColliderBase__Bound);
MARK_VAL_T(::GlobalNamespace::__DynamicBoneColliderBase__Direction);
MARK_REF_PTR_T(::GlobalNamespace::DynamicBoneColliderBase);
// Type: ::Direction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16047))
// CS Name: ::DynamicBoneColliderBase::Direction
struct CORDL_TYPE __DynamicBoneColliderBase__Direction : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____DynamicBoneColliderBase__Direction_Unwrapped
enum struct ____DynamicBoneColliderBase__Direction_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field X value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__DynamicBoneColliderBase__Direction const X;

/// @brief Field Y value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__DynamicBoneColliderBase__Direction const Y;

/// @brief Field Z value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__DynamicBoneColliderBase__Direction const Z;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____DynamicBoneColliderBase__Direction_Unwrapped () const noexcept {
return std::bit_cast<____DynamicBoneColliderBase__Direction_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __DynamicBoneColliderBase__Direction(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DynamicBoneColliderBase__Direction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DynamicBoneColliderBase__Direction()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DynamicBoneColliderBase__Direction, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Bound
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16048))
// CS Name: ::DynamicBoneColliderBase::Bound
struct CORDL_TYPE __DynamicBoneColliderBase__Bound : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____DynamicBoneColliderBase__Bound_Unwrapped
enum struct ____DynamicBoneColliderBase__Bound_Unwrapped : int32_t {
__E_Outside = static_cast<int32_t>(0x0),
__E_Inside = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Outside value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__DynamicBoneColliderBase__Bound const Outside;

/// @brief Field Inside value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__DynamicBoneColliderBase__Bound const Inside;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____DynamicBoneColliderBase__Bound_Unwrapped () const noexcept {
return std::bit_cast<____DynamicBoneColliderBase__Bound_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __DynamicBoneColliderBase__Bound(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DynamicBoneColliderBase__Bound(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DynamicBoneColliderBase__Bound()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DynamicBoneColliderBase__Bound, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DynamicBoneColliderBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16049))
// CS Name: ::DynamicBoneColliderBase*
class CORDL_TYPE DynamicBoneColliderBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Bound = ::GlobalNamespace::__DynamicBoneColliderBase__Bound;

using Direction = ::GlobalNamespace::__DynamicBoneColliderBase__Direction;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field m_Direction offset 0x18
 __declspec(property(get=__get_m_Direction, put=__set_m_Direction)) ::GlobalNamespace::__DynamicBoneColliderBase__Direction  m_Direction;

/// @brief Field m_Center offset 0x1c
 __declspec(property(get=__get_m_Center, put=__set_m_Center)) ::UnityEngine::Vector3  m_Center;

/// @brief Field m_Bound offset 0x28
 __declspec(property(get=__get_m_Bound, put=__set_m_Bound)) ::GlobalNamespace::__DynamicBoneColliderBase__Bound  m_Bound;

constexpr void __set_m_Direction(::GlobalNamespace::__DynamicBoneColliderBase__Direction  value) ;

constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction& __get_m_Direction() ;

constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction const& __get_m_Direction() const;

constexpr void __set_m_Center(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Center() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Center() const;

constexpr void __set_m_Bound(::GlobalNamespace::__DynamicBoneColliderBase__Bound  value) ;

constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound& __get_m_Bound() ;

constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound const& __get_m_Bound() const;

/// @brief Method Collide addr 0x12308e4 size 0x4 virtual true final false
inline void Collide(ByRef<::UnityEngine::Vector3>  particlePosition, float_t  particleRadius) ;

static inline ::GlobalNamespace::DynamicBoneColliderBase* New_ctor() ;

/// @brief Method .ctor addr 0x1230880 size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBoneColliderBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicBoneColliderBase(DynamicBoneColliderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBoneColliderBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicBoneColliderBase(DynamicBoneColliderBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DynamicBoneColliderBase()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DynamicBoneColliderBase, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DynamicBoneColliderBase__Bound, "", "DynamicBoneColliderBase/Bound");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DynamicBoneColliderBase__Direction, "", "DynamicBoneColliderBase/Direction");
NEED_NO_BOX(::GlobalNamespace::DynamicBoneColliderBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBoneColliderBase*, "", "DynamicBoneColliderBase");
