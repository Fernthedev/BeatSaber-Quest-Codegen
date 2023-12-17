#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerAvatarData)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerAvatarData);
// Type: ::MultiplayerAvatarData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15020))
// CS Name: ::MultiplayerAvatarData
struct CORDL_TYPE MultiplayerAvatarData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field avatarTypeIdentifierHash offset 0x0
 __declspec(property(get=__get_avatarTypeIdentifierHash, put=__set_avatarTypeIdentifierHash)) uint32_t  avatarTypeIdentifierHash;

/// @brief Field data offset 0x8
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

constexpr void __set_avatarTypeIdentifierHash(uint32_t  value) ;

constexpr uint32_t& __get_avatarTypeIdentifierHash() ;

constexpr uint32_t const& __get_avatarTypeIdentifierHash() const;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

/// @brief Method .ctor addr 0x12a341c size 0xc virtual false final false
inline void _ctor(uint32_t  avatarTypeIdentifierHash, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

// Ctor Parameters [CppParam { name: "avatarTypeIdentifierHash", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr MultiplayerAvatarData(uint32_t  avatarTypeIdentifierHash, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MultiplayerAvatarData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MultiplayerAvatarData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerAvatarData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarData, "", "MultiplayerAvatarData");
