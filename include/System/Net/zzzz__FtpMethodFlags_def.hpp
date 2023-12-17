#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpMethodFlags)
// Forward declare root types
namespace System::Net {
struct FtpMethodFlags;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpMethodFlags);
// Type: System.Net::FtpMethodFlags
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9045))
// CS Name: ::System.Net::FtpMethodFlags
struct CORDL_TYPE FtpMethodFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FtpMethodFlags_Unwrapped
enum struct __FtpMethodFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IsDownload = static_cast<int32_t>(0x1),
__E_IsUpload = static_cast<int32_t>(0x2),
__E_TakesParameter = static_cast<int32_t>(0x4),
__E_MayTakeParameter = static_cast<int32_t>(0x8),
__E_DoesNotTakeParameter = static_cast<int32_t>(0x10),
__E_ParameterIsDirectory = static_cast<int32_t>(0x20),
__E_ShouldParseForResponseUri = static_cast<int32_t>(0x40),
__E_HasHttpCommand = static_cast<int32_t>(0x80),
__E_MustChangeWorkingDirectoryToPath = static_cast<int32_t>(0x100),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Net::FtpMethodFlags const None;

/// @brief Field IsDownload value: static_cast<int32_t>(0x1)
static ::System::Net::FtpMethodFlags const IsDownload;

/// @brief Field IsUpload value: static_cast<int32_t>(0x2)
static ::System::Net::FtpMethodFlags const IsUpload;

/// @brief Field TakesParameter value: static_cast<int32_t>(0x4)
static ::System::Net::FtpMethodFlags const TakesParameter;

/// @brief Field MayTakeParameter value: static_cast<int32_t>(0x8)
static ::System::Net::FtpMethodFlags const MayTakeParameter;

/// @brief Field DoesNotTakeParameter value: static_cast<int32_t>(0x10)
static ::System::Net::FtpMethodFlags const DoesNotTakeParameter;

/// @brief Field ParameterIsDirectory value: static_cast<int32_t>(0x20)
static ::System::Net::FtpMethodFlags const ParameterIsDirectory;

/// @brief Field ShouldParseForResponseUri value: static_cast<int32_t>(0x40)
static ::System::Net::FtpMethodFlags const ShouldParseForResponseUri;

/// @brief Field HasHttpCommand value: static_cast<int32_t>(0x80)
static ::System::Net::FtpMethodFlags const HasHttpCommand;

/// @brief Field MustChangeWorkingDirectoryToPath value: static_cast<int32_t>(0x100)
static ::System::Net::FtpMethodFlags const MustChangeWorkingDirectoryToPath;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpMethodFlags_Unwrapped () const noexcept {
return std::bit_cast<__FtpMethodFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FtpMethodFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FtpMethodFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FtpMethodFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpMethodFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpMethodFlags, "System.Net", "FtpMethodFlags");
