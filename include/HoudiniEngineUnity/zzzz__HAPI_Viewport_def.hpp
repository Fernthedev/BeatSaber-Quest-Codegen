#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_Viewport)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Viewport;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Viewport);
// Type: HoudiniEngineUnity::HAPI_Viewport
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9755))
// CS Name: ::HoudiniEngineUnity::HAPI_Viewport
struct CORDL_TYPE HAPI_Viewport : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::ArrayW<float_t,::Array<float_t>*>  position;

/// @brief Field rotationQuaternion offset 0x8
 __declspec(property(get=__get_rotationQuaternion, put=__set_rotationQuaternion)) ::ArrayW<float_t,::Array<float_t>*>  rotationQuaternion;

/// @brief Field offset offset 0x10
 __declspec(property(get=__get_offset, put=__set_offset)) float_t  offset;

constexpr void __set_position(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_position() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_position() const;

constexpr void __set_rotationQuaternion(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_rotationQuaternion() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_rotationQuaternion() const;

constexpr void __set_offset(float_t  value) ;

constexpr float_t& __get_offset() ;

constexpr float_t const& __get_offset() const;

/// @brief Method .ctor addr 0x2191f74 size 0x88 virtual false final false
inline void _ctor(bool  initializeFields) ;

/// @brief Method Init addr 0x2191ffc size 0x70 virtual false final false
inline void Init() ;

// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rotationQuaternion", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_Viewport(::ArrayW<float_t,::Array<float_t>*>  position, ::ArrayW<float_t,::Array<float_t>*>  rotationQuaternion, float_t  offset) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_Viewport(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_Viewport()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Viewport, 0x18>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Viewport, "HoudiniEngineUnity", "HAPI_Viewport");
