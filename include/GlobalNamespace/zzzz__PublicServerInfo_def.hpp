#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PublicServerInfo)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct PublicServerInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PublicServerInfo);
// Type: ::PublicServerInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12934))
// CS Name: ::PublicServerInfo
struct CORDL_TYPE PublicServerInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field code offset 0x0
 __declspec(property(get=__get_code, put=__set_code)) ::StringW  code;

/// @brief Field currentPlayerCount offset 0x8
 __declspec(property(get=__get_currentPlayerCount, put=__set_currentPlayerCount)) int32_t  currentPlayerCount;

constexpr void __set_code(::StringW  value) ;

constexpr ::StringW& __get_code() ;

constexpr ::StringW const& __get_code() const;

constexpr void __set_currentPlayerCount(int32_t  value) ;

constexpr int32_t& __get_currentPlayerCount() ;

constexpr int32_t const& __get_currentPlayerCount() const;

/// @brief Method .ctor addr 0xe54368 size 0xc virtual false final false
inline void _ctor(::StringW  code, int32_t  currentPlayerCount) ;

/// @brief Method Serialize addr 0xe54374 size 0x40 virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0xe543b4 size 0x40 virtual false final false
static inline ::GlobalNamespace::PublicServerInfo Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

// Ctor Parameters [CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "currentPlayerCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PublicServerInfo(::StringW  code, int32_t  currentPlayerCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PublicServerInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PublicServerInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PublicServerInfo, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PublicServerInfo, "", "PublicServerInfo");
