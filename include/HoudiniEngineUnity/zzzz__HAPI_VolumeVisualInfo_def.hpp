#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_VolumeVisualInfo)
namespace HoudiniEngineUnity {
struct HAPI_VolumeVisualType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeVisualInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_VolumeVisualInfo);
// Type: HoudiniEngineUnity::HAPI_VolumeVisualInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9748))
// CS Name: ::HoudiniEngineUnity::HAPI_VolumeVisualInfo
struct CORDL_TYPE HAPI_VolumeVisualInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::HoudiniEngineUnity::HAPI_VolumeVisualType  type;

/// @brief Field iso offset 0x4
 __declspec(property(get=__get_iso, put=__set_iso)) float_t  iso;

/// @brief Field density offset 0x8
 __declspec(property(get=__get_density, put=__set_density)) float_t  density;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_VolumeVisualType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType& __get_type() ;

constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType const& __get_type() const;

constexpr void __set_iso(float_t  value) ;

constexpr float_t& __get_iso() ;

constexpr float_t const& __get_iso() const;

constexpr void __set_density(float_t  value) ;

constexpr float_t& __get_density() ;

constexpr float_t const& __get_density() const;

// Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_VolumeVisualType", modifiers: "", def_value: None }, CppParam { name: "iso", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "density", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_VolumeVisualInfo(::HoudiniEngineUnity::HAPI_VolumeVisualType  type, float_t  iso, float_t  density) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_VolumeVisualInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_VolumeVisualInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_VolumeVisualInfo, 0xc>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeVisualInfo, "HoudiniEngineUnity", "HAPI_VolumeVisualInfo");
