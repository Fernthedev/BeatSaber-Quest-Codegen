#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BladeMovementDataElement)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BladeMovementDataElement);
// Type: ::BladeMovementDataElement
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15009))
// CS Name: ::BladeMovementDataElement
struct CORDL_TYPE BladeMovementDataElement : public ::bs_hook::ValueTypeWrapper<0x2c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field time offset 0x0
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

/// @brief Field segmentAngle offset 0x4
 __declspec(property(get=__get_segmentAngle, put=__set_segmentAngle)) float_t  segmentAngle;

/// @brief Field topPos offset 0x8
 __declspec(property(get=__get_topPos, put=__set_topPos)) ::UnityEngine::Vector3  topPos;

/// @brief Field bottomPos offset 0x14
 __declspec(property(get=__get_bottomPos, put=__set_bottomPos)) ::UnityEngine::Vector3  bottomPos;

/// @brief Field segmentNormal offset 0x20
 __declspec(property(get=__get_segmentNormal, put=__set_segmentNormal)) ::UnityEngine::Vector3  segmentNormal;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

constexpr void __set_segmentAngle(float_t  value) ;

constexpr float_t& __get_segmentAngle() ;

constexpr float_t const& __get_segmentAngle() const;

constexpr void __set_topPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_topPos() ;

constexpr ::UnityEngine::Vector3 const& __get_topPos() const;

constexpr void __set_bottomPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bottomPos() ;

constexpr ::UnityEngine::Vector3 const& __get_bottomPos() const;

constexpr void __set_segmentNormal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_segmentNormal() ;

constexpr ::UnityEngine::Vector3 const& __get_segmentNormal() const;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "segmentAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "segmentNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr BladeMovementDataElement(float_t  time, float_t  segmentAngle, ::UnityEngine::Vector3  topPos, ::UnityEngine::Vector3  bottomPos, ::UnityEngine::Vector3  segmentNormal) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BladeMovementDataElement(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BladeMovementDataElement()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BladeMovementDataElement, 0x2c>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BladeMovementDataElement, "", "BladeMovementDataElement");
