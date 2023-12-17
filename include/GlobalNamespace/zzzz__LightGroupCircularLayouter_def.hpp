#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupCircularLayouter)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __LightGroupCircularLayouter__RotationDirection;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LightGroupCircularLayouter__RotationDirection;
}
namespace GlobalNamespace {
class LightGroupCircularLayouter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection);
MARK_REF_PTR_T(::GlobalNamespace::LightGroupCircularLayouter);
// Type: ::RotationDirection
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4928))
// CS Name: ::LightGroupCircularLayouter::RotationDirection
struct CORDL_TYPE __LightGroupCircularLayouter__RotationDirection : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____LightGroupCircularLayouter__RotationDirection_Unwrapped
enum struct ____LightGroupCircularLayouter__RotationDirection_Unwrapped : int32_t {
__E_Clockwise = static_cast<int32_t>(0x0),
__E_Counterclockwise = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Clockwise value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const Clockwise;

/// @brief Field Counterclockwise value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const Counterclockwise;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____LightGroupCircularLayouter__RotationDirection_Unwrapped () const noexcept {
return std::bit_cast<____LightGroupCircularLayouter__RotationDirection_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LightGroupCircularLayouter__RotationDirection(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LightGroupCircularLayouter__RotationDirection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LightGroupCircularLayouter__RotationDirection()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LightGroupCircularLayouter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4935))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4929))
// CS Name: ::LightGroupCircularLayouter*
class CORDL_TYPE LightGroupCircularLayouter : public ::GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
using RotationDirection = ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::LightGroupSubsystem)]{};

/// @brief Field _radius offset 0x20
 __declspec(property(get=__get__radius, put=__set__radius)) float_t  _radius;

/// @brief Field _angle offset 0x24
 __declspec(property(get=__get__angle, put=__set__angle)) float_t  _angle;

/// @brief Field _startingAngle offset 0x28
 __declspec(property(get=__get__startingAngle, put=__set__startingAngle)) float_t  _startingAngle;

/// @brief Field _rotationDirection offset 0x2c
 __declspec(property(get=__get__rotationDirection, put=__set__rotationDirection)) ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection  _rotationDirection;

/// @brief Field _staticRotation offset 0x30
 __declspec(property(get=__get__staticRotation, put=__set__staticRotation)) bool  _staticRotation;

/// @brief Field _additionalAngle offset 0x34
 __declspec(property(get=__get__additionalAngle, put=__set__additionalAngle)) ::UnityEngine::Vector3  _additionalAngle;

constexpr void __set__radius(float_t  value) ;

constexpr float_t& __get__radius() ;

constexpr float_t const& __get__radius() const;

constexpr void __set__angle(float_t  value) ;

constexpr float_t& __get__angle() ;

constexpr float_t const& __get__angle() const;

constexpr void __set__startingAngle(float_t  value) ;

constexpr float_t& __get__startingAngle() ;

constexpr float_t const& __get__startingAngle() const;

constexpr void __set__rotationDirection(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection  value) ;

constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection& __get__rotationDirection() ;

constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const& __get__rotationDirection() const;

constexpr void __set__staticRotation(bool  value) ;

constexpr bool& __get__staticRotation() ;

constexpr bool const& __get__staticRotation() const;

constexpr void __set__additionalAngle(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__additionalAngle() ;

constexpr ::UnityEngine::Vector3 const& __get__additionalAngle() const;

static inline ::GlobalNamespace::LightGroupCircularLayouter* New_ctor() ;

/// @brief Method .ctor addr 0x23a9830 size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupCircularLayouter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightGroupCircularLayouter(LightGroupCircularLayouter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupCircularLayouter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightGroupCircularLayouter(LightGroupCircularLayouter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightGroupCircularLayouter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupCircularLayouter, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, "", "LightGroupCircularLayouter/RotationDirection");
NEED_NO_BOX(::GlobalNamespace::LightGroupCircularLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupCircularLayouter*, "", "LightGroupCircularLayouter");
