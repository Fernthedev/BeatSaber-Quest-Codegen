#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_SphereInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SphereInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_SphereInfo);
// Type: HoudiniEngineUnity::HAPI_SphereInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9751))
// CS Name: ::HoudiniEngineUnity::HAPI_SphereInfo
struct CORDL_TYPE HAPI_SphereInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field center offset 0x0
 __declspec(property(get=__get_center, put=__set_center)) ::ArrayW<float_t,::Array<float_t>*>  center;

/// @brief Field radius offset 0x8
 __declspec(property(get=__get_radius, put=__set_radius)) float_t  radius;

constexpr void __set_center(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_center() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_center() const;

constexpr void __set_radius(float_t  value) ;

constexpr float_t& __get_radius() ;

constexpr float_t const& __get_radius() const;

/// @brief Method .ctor addr 0x2191f20 size 0x54 virtual false final false
inline void _ctor(bool  initialize_fields) ;

// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_SphereInfo(::ArrayW<float_t,::Array<float_t>*>  center, float_t  radius) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_SphereInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_SphereInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_SphereInfo, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SphereInfo, "HoudiniEngineUnity", "HAPI_SphereInfo");
