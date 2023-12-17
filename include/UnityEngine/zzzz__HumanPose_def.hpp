#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HumanPose)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct HumanPose;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanPose);
// Type: UnityEngine::HumanPose
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14884))
// CS Name: ::UnityEngine::HumanPose
struct CORDL_TYPE HumanPose : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field bodyPosition offset 0x0
 __declspec(property(get=__get_bodyPosition, put=__set_bodyPosition)) ::UnityEngine::Vector3  bodyPosition;

/// @brief Field bodyRotation offset 0xc
 __declspec(property(get=__get_bodyRotation, put=__set_bodyRotation)) ::UnityEngine::Quaternion  bodyRotation;

/// @brief Field muscles offset 0x20
 __declspec(property(get=__get_muscles, put=__set_muscles)) ::ArrayW<float_t,::Array<float_t>*>  muscles;

constexpr void __set_bodyPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bodyPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_bodyPosition() const;

constexpr void __set_bodyRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_bodyRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_bodyRotation() const;

constexpr void __set_muscles(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_muscles() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_muscles() const;

/// @brief Method Init addr 0x2c96338 size 0x138 virtual false final false
inline void Init() ;

// Ctor Parameters [CppParam { name: "bodyPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bodyRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "muscles", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
constexpr HumanPose(::UnityEngine::Vector3  bodyPosition, ::UnityEngine::Quaternion  bodyRotation, ::ArrayW<float_t,::Array<float_t>*>  muscles) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HumanPose(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HumanPose()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanPose, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanPose, "UnityEngine", "HumanPose");
