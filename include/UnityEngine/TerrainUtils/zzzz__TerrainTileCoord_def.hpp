#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainTileCoord)
// Forward declare root types
namespace UnityEngine::TerrainUtils {
struct TerrainTileCoord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainUtils::TerrainTileCoord);
// Type: UnityEngine.TerrainUtils::TerrainTileCoord
namespace UnityEngine::TerrainUtils {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15477))
// CS Name: ::UnityEngine.TerrainUtils::TerrainTileCoord
struct CORDL_TYPE TerrainTileCoord : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field tileX offset 0x0
 __declspec(property(get=__get_tileX, put=__set_tileX)) int32_t  tileX;

/// @brief Field tileZ offset 0x4
 __declspec(property(get=__get_tileZ, put=__set_tileZ)) int32_t  tileZ;

constexpr void __set_tileX(int32_t  value) ;

constexpr int32_t& __get_tileX() ;

constexpr int32_t const& __get_tileX() const;

constexpr void __set_tileZ(int32_t  value) ;

constexpr int32_t& __get_tileZ() ;

constexpr int32_t const& __get_tileZ() const;

/// @brief Method .ctor addr 0x2d1e87c size 0x8 virtual false final false
inline void _ctor(int32_t  tileX, int32_t  tileZ) ;

// Ctor Parameters [CppParam { name: "tileX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tileZ", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainTileCoord(int32_t  tileX, int32_t  tileZ) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TerrainTileCoord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TerrainTileCoord()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainTileCoord, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::TerrainUtils
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainTileCoord, "UnityEngine.TerrainUtils", "TerrainTileCoord");
