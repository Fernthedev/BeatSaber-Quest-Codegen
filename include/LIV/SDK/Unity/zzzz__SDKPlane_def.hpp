#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SDKPlane)
namespace UnityEngine {
struct Plane;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPlane;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKPlane);
// Type: LIV.SDK.Unity::SDKPlane
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15112))
// CS Name: ::LIV.SDK.Unity::SDKPlane
struct CORDL_TYPE SDKPlane : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field distance offset 0x0
 __declspec(property(get=__get_distance, put=__set_distance)) float_t  distance;

/// @brief Field normal offset 0x4
 __declspec(property(get=__get_normal, put=__set_normal)) ::LIV::SDK::Unity::SDKVector3  normal;

constexpr void __set_distance(float_t  value) ;

constexpr float_t& __get_distance() ;

constexpr float_t const& __get_distance() const;

constexpr void __set_normal(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_normal() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_normal() const;

/// @brief Method op_Implicit addr 0x2214c44 size 0x5c virtual false final false
static inline ::LIV::SDK::Unity::SDKPlane op_Implicit___LIV__SDK__Unity__SDKPlane(::UnityEngine::Plane  v) ;

/// @brief Method get_empty addr 0x2214ca0 size 0x14 virtual false final false
static inline ::LIV::SDK::Unity::SDKPlane get_empty() ;

/// @brief Method ToString addr 0x2214cb4 size 0xc4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }]
constexpr SDKPlane(float_t  distance, ::LIV::SDK::Unity::SDKVector3  normal) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKPlane(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKPlane()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKPlane, 0x10>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPlane, "LIV.SDK.Unity", "SDKPlane");
