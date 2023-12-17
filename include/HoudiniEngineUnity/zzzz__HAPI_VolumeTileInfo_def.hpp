#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_VolumeTileInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeTileInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_VolumeTileInfo);
// Type: HoudiniEngineUnity::HAPI_VolumeTileInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9747))
// CS Name: ::HoudiniEngineUnity::HAPI_VolumeTileInfo
struct CORDL_TYPE HAPI_VolumeTileInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field minX offset 0x0
 __declspec(property(get=__get_minX, put=__set_minX)) int32_t  minX;

/// @brief Field minY offset 0x4
 __declspec(property(get=__get_minY, put=__set_minY)) int32_t  minY;

/// @brief Field minZ offset 0x8
 __declspec(property(get=__get_minZ, put=__set_minZ)) int32_t  minZ;

/// @brief Field isValid offset 0xc
 __declspec(property(get=__get_isValid, put=__set_isValid)) bool  isValid;

constexpr void __set_minX(int32_t  value) ;

constexpr int32_t& __get_minX() ;

constexpr int32_t const& __get_minX() const;

constexpr void __set_minY(int32_t  value) ;

constexpr int32_t& __get_minY() ;

constexpr int32_t const& __get_minY() const;

constexpr void __set_minZ(int32_t  value) ;

constexpr int32_t& __get_minZ() ;

constexpr int32_t const& __get_minZ() const;

constexpr void __set_isValid(bool  value) ;

constexpr bool& __get_isValid() ;

constexpr bool const& __get_isValid() const;

// Ctor Parameters [CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minZ", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_VolumeTileInfo(int32_t  minX, int32_t  minY, int32_t  minZ, bool  isValid) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_VolumeTileInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_VolumeTileInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_VolumeTileInfo, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeTileInfo, "HoudiniEngineUnity", "HAPI_VolumeTileInfo");
