#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_Transform)
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Transform);
// Type: HoudiniEngineUnity::HAPI_Transform
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9726))
// CS Name: ::HoudiniEngineUnity::HAPI_Transform
struct CORDL_TYPE HAPI_Transform : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::ArrayW<float_t,::Array<float_t>*>  position;

/// @brief Field rotationQuaternion offset 0x8
 __declspec(property(get=__get_rotationQuaternion, put=__set_rotationQuaternion)) ::ArrayW<float_t,::Array<float_t>*>  rotationQuaternion;

/// @brief Field scale offset 0x10
 __declspec(property(get=__get_scale, put=__set_scale)) ::ArrayW<float_t,::Array<float_t>*>  scale;

/// @brief Field shear offset 0x18
 __declspec(property(get=__get_shear, put=__set_shear)) ::ArrayW<float_t,::Array<float_t>*>  shear;

/// @brief Field rstOrder offset 0x20
 __declspec(property(get=__get_rstOrder, put=__set_rstOrder)) ::HoudiniEngineUnity::HAPI_RSTOrder  rstOrder;

constexpr void __set_position(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_position() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_position() const;

constexpr void __set_rotationQuaternion(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_rotationQuaternion() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_rotationQuaternion() const;

constexpr void __set_scale(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_scale() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_scale() const;

constexpr void __set_shear(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_shear() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_shear() const;

constexpr void __set_rstOrder(::HoudiniEngineUnity::HAPI_RSTOrder  value) ;

constexpr ::HoudiniEngineUnity::HAPI_RSTOrder& __get_rstOrder() ;

constexpr ::HoudiniEngineUnity::HAPI_RSTOrder const& __get_rstOrder() const;

/// @brief Method .ctor addr 0x218898c size 0xac virtual false final false
inline void _ctor(bool  initializeFields) ;

/// @brief Method Init addr 0x21919d0 size 0xe0 virtual false final false
inline void Init() ;

// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rotationQuaternion", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "shear", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rstOrder", ty: "::HoudiniEngineUnity::HAPI_RSTOrder", modifiers: "", def_value: None }]
constexpr HAPI_Transform(::ArrayW<float_t,::Array<float_t>*>  position, ::ArrayW<float_t,::Array<float_t>*>  rotationQuaternion, ::ArrayW<float_t,::Array<float_t>*>  scale, ::ArrayW<float_t,::Array<float_t>*>  shear, ::HoudiniEngineUnity::HAPI_RSTOrder  rstOrder) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_Transform(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_Transform()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Transform, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Transform, "HoudiniEngineUnity", "HAPI_Transform");
