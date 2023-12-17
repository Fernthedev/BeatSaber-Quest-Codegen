#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_Keyframe)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Keyframe;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Keyframe);
// Type: HoudiniEngineUnity::HAPI_Keyframe
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9745))
// CS Name: ::HoudiniEngineUnity::HAPI_Keyframe
struct CORDL_TYPE HAPI_Keyframe : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field time offset 0x0
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

/// @brief Field value offset 0x4
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

/// @brief Field inTangent offset 0x8
 __declspec(property(get=__get_inTangent, put=__set_inTangent)) float_t  inTangent;

/// @brief Field outTangent offset 0xc
 __declspec(property(get=__get_outTangent, put=__set_outTangent)) float_t  outTangent;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

constexpr void __set_inTangent(float_t  value) ;

constexpr float_t& __get_inTangent() ;

constexpr float_t const& __get_inTangent() const;

constexpr void __set_outTangent(float_t  value) ;

constexpr float_t& __get_outTangent() ;

constexpr float_t const& __get_outTangent() const;

/// @brief Method .ctor addr 0x2191ea4 size 0xc virtual false final false
inline void _ctor(float_t  t, float_t  v, float_t  in_tangent, float_t  out_tangent) ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "inTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "outTangent", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_Keyframe(float_t  time, float_t  value, float_t  inTangent, float_t  outTangent) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_Keyframe(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_Keyframe()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Keyframe, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Keyframe, "HoudiniEngineUnity", "HAPI_Keyframe");
