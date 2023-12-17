#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParsingError)
// Forward declare root types
namespace System {
struct ParsingError;
}
// Write type traits
MARK_VAL_T(::System::ParsingError);
// Type: System::ParsingError
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8881))
// CS Name: ::System::ParsingError
struct CORDL_TYPE ParsingError : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParsingError_Unwrapped
enum struct __ParsingError_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_BadFormat = static_cast<int32_t>(0x1),
__E_BadScheme = static_cast<int32_t>(0x2),
__E_BadAuthority = static_cast<int32_t>(0x3),
__E_EmptyUriString = static_cast<int32_t>(0x4),
__E_LastRelativeUriOkErrIndex = static_cast<int32_t>(0x4),
__E_SchemeLimit = static_cast<int32_t>(0x5),
__E_SizeLimit = static_cast<int32_t>(0x6),
__E_MustRootedPath = static_cast<int32_t>(0x7),
__E_BadHostName = static_cast<int32_t>(0x8),
__E_NonEmptyHost = static_cast<int32_t>(0x9),
__E_BadPort = static_cast<int32_t>(0xa),
__E_BadAuthorityTerminator = static_cast<int32_t>(0xb),
__E_CannotCreateRelative = static_cast<int32_t>(0xc),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::ParsingError const None;

/// @brief Field BadFormat value: static_cast<int32_t>(0x1)
static ::System::ParsingError const BadFormat;

/// @brief Field BadScheme value: static_cast<int32_t>(0x2)
static ::System::ParsingError const BadScheme;

/// @brief Field BadAuthority value: static_cast<int32_t>(0x3)
static ::System::ParsingError const BadAuthority;

/// @brief Field EmptyUriString value: static_cast<int32_t>(0x4)
static ::System::ParsingError const EmptyUriString;

/// @brief Field LastRelativeUriOkErrIndex value: static_cast<int32_t>(0x4)
static ::System::ParsingError const LastRelativeUriOkErrIndex;

/// @brief Field SchemeLimit value: static_cast<int32_t>(0x5)
static ::System::ParsingError const SchemeLimit;

/// @brief Field SizeLimit value: static_cast<int32_t>(0x6)
static ::System::ParsingError const SizeLimit;

/// @brief Field MustRootedPath value: static_cast<int32_t>(0x7)
static ::System::ParsingError const MustRootedPath;

/// @brief Field BadHostName value: static_cast<int32_t>(0x8)
static ::System::ParsingError const BadHostName;

/// @brief Field NonEmptyHost value: static_cast<int32_t>(0x9)
static ::System::ParsingError const NonEmptyHost;

/// @brief Field BadPort value: static_cast<int32_t>(0xa)
static ::System::ParsingError const BadPort;

/// @brief Field BadAuthorityTerminator value: static_cast<int32_t>(0xb)
static ::System::ParsingError const BadAuthorityTerminator;

/// @brief Field CannotCreateRelative value: static_cast<int32_t>(0xc)
static ::System::ParsingError const CannotCreateRelative;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ParsingError_Unwrapped () const noexcept {
return std::bit_cast<__ParsingError_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParsingError(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ParsingError(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ParsingError()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParsingError, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ParsingError, "System", "ParsingError");
