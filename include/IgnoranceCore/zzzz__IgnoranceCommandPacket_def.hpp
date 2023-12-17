#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceCommandPacket)
namespace IgnoranceCore {
struct IgnoranceCommandType;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceCommandPacket);
// Type: IgnoranceCore::IgnoranceCommandPacket
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15248))
// CS Name: ::IgnoranceCore::IgnoranceCommandPacket
struct CORDL_TYPE IgnoranceCommandPacket : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Type offset 0x0
 __declspec(property(get=__get_Type, put=__set_Type)) ::IgnoranceCore::IgnoranceCommandType  Type;

/// @brief Field PeerId offset 0x4
 __declspec(property(get=__get_PeerId, put=__set_PeerId)) uint32_t  PeerId;

constexpr void __set_Type(::IgnoranceCore::IgnoranceCommandType  value) ;

constexpr ::IgnoranceCore::IgnoranceCommandType& __get_Type() ;

constexpr ::IgnoranceCore::IgnoranceCommandType const& __get_Type() const;

constexpr void __set_PeerId(uint32_t  value) ;

constexpr uint32_t& __get_PeerId() ;

constexpr uint32_t const& __get_PeerId() const;

// Ctor Parameters [CppParam { name: "Type", ty: "::IgnoranceCore::IgnoranceCommandType", modifiers: "", def_value: None }, CppParam { name: "PeerId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr IgnoranceCommandPacket(::IgnoranceCore::IgnoranceCommandType  Type, uint32_t  PeerId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IgnoranceCommandPacket(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IgnoranceCommandPacket()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceCommandPacket, 0x8>, "Size mismatch!");

} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceCommandPacket, "IgnoranceCore", "IgnoranceCommandPacket");
