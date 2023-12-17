#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetLoadingSubsystem)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct AssetLoadingSubsystem;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem);
// Type: Unity.IO.LowLevel.Unsafe::AssetLoadingSubsystem
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9986))
// CS Name: ::Unity.IO.LowLevel.Unsafe::AssetLoadingSubsystem
struct CORDL_TYPE AssetLoadingSubsystem : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AssetLoadingSubsystem_Unwrapped
enum struct __AssetLoadingSubsystem_Unwrapped : int32_t {
__E_Other = static_cast<int32_t>(0x0),
__E_Texture = static_cast<int32_t>(0x1),
__E_VirtualTexture = static_cast<int32_t>(0x2),
__E_Mesh = static_cast<int32_t>(0x3),
__E_Audio = static_cast<int32_t>(0x4),
__E_Scripts = static_cast<int32_t>(0x5),
__E_EntitiesScene = static_cast<int32_t>(0x6),
__E_EntitiesStreamBinaryReader = static_cast<int32_t>(0x7),
__E_FileInfo = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Other value: static_cast<int32_t>(0x0)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Other;

/// @brief Field Texture value: static_cast<int32_t>(0x1)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Texture;

/// @brief Field VirtualTexture value: static_cast<int32_t>(0x2)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const VirtualTexture;

/// @brief Field Mesh value: static_cast<int32_t>(0x3)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Mesh;

/// @brief Field Audio value: static_cast<int32_t>(0x4)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Audio;

/// @brief Field Scripts value: static_cast<int32_t>(0x5)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Scripts;

/// @brief Field EntitiesScene value: static_cast<int32_t>(0x6)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const EntitiesScene;

/// @brief Field EntitiesStreamBinaryReader value: static_cast<int32_t>(0x7)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const EntitiesStreamBinaryReader;

/// @brief Field FileInfo value: static_cast<int32_t>(0x8)
static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const FileInfo;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AssetLoadingSubsystem_Unwrapped () const noexcept {
return std::bit_cast<__AssetLoadingSubsystem_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssetLoadingSubsystem(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AssetLoadingSubsystem(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AssetLoadingSubsystem()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, 0x4>, "Size mismatch!");

} // namespace end def Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, "Unity.IO.LowLevel.Unsafe", "AssetLoadingSubsystem");
