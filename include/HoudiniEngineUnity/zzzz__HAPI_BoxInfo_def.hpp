#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_BoxInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_BoxInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_BoxInfo);
// Type: HoudiniEngineUnity::HAPI_BoxInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9750))
// CS Name: ::HoudiniEngineUnity::HAPI_BoxInfo
struct CORDL_TYPE HAPI_BoxInfo : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field center offset 0x0
 __declspec(property(get=__get_center, put=__set_center)) ::ArrayW<float_t,::Array<float_t>*>  center;

/// @brief Field size offset 0x8
 __declspec(property(get=__get_size, put=__set_size)) ::ArrayW<float_t,::Array<float_t>*>  size;

/// @brief Field rotation offset 0x10
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::ArrayW<float_t,::Array<float_t>*>  rotation;

constexpr void __set_center(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_center() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_center() const;

constexpr void __set_size(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_size() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_size() const;

constexpr void __set_rotation(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_rotation() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_rotation() const;

/// @brief Method .ctor addr 0x2191eb0 size 0x70 virtual false final false
inline void _ctor(bool  initialize_fields) ;

// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "size", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
constexpr HAPI_BoxInfo(::ArrayW<float_t,::Array<float_t>*>  center, ::ArrayW<float_t,::Array<float_t>*>  size, ::ArrayW<float_t,::Array<float_t>*>  rotation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_BoxInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_BoxInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_BoxInfo, 0x18>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_BoxInfo, "HoudiniEngineUnity", "HAPI_BoxInfo");
