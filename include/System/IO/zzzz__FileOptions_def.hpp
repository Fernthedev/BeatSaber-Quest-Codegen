#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileOptions)
// Forward declare root types
namespace System::IO {
struct FileOptions;
}
// Write type traits
MARK_VAL_T(::System::IO::FileOptions);
// Type: System.IO::FileOptions
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3563))
// CS Name: ::System.IO::FileOptions
struct CORDL_TYPE FileOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FileOptions_Unwrapped
enum struct __FileOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_WriteThrough = static_cast<int32_t>(0x80000000),
__E_Asynchronous = static_cast<int32_t>(0x40000000),
__E_RandomAccess = static_cast<int32_t>(0x10000000),
__E_DeleteOnClose = static_cast<int32_t>(0x4000000),
__E_SequentialScan = static_cast<int32_t>(0x8000000),
__E_Encrypted = static_cast<int32_t>(0x4000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::IO::FileOptions const None;

/// @brief Field WriteThrough value: static_cast<int32_t>(0x80000000)
static ::System::IO::FileOptions const WriteThrough;

/// @brief Field Asynchronous value: static_cast<int32_t>(0x40000000)
static ::System::IO::FileOptions const Asynchronous;

/// @brief Field RandomAccess value: static_cast<int32_t>(0x10000000)
static ::System::IO::FileOptions const RandomAccess;

/// @brief Field DeleteOnClose value: static_cast<int32_t>(0x4000000)
static ::System::IO::FileOptions const DeleteOnClose;

/// @brief Field SequentialScan value: static_cast<int32_t>(0x8000000)
static ::System::IO::FileOptions const SequentialScan;

/// @brief Field Encrypted value: static_cast<int32_t>(0x4000)
static ::System::IO::FileOptions const Encrypted;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FileOptions_Unwrapped () const noexcept {
return std::bit_cast<__FileOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FileOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FileOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileOptions, 0x4>, "Size mismatch!");

} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileOptions, "System.IO", "FileOptions");
