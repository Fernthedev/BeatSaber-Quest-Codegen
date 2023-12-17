#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpOperation)
// Forward declare root types
namespace System::Net {
struct FtpOperation;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpOperation);
// Type: System.Net::FtpOperation
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9044))
// CS Name: ::System.Net::FtpOperation
struct CORDL_TYPE FtpOperation : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FtpOperation_Unwrapped
enum struct __FtpOperation_Unwrapped : int32_t {
__E_DownloadFile = static_cast<int32_t>(0x0),
__E_ListDirectory = static_cast<int32_t>(0x1),
__E_ListDirectoryDetails = static_cast<int32_t>(0x2),
__E_UploadFile = static_cast<int32_t>(0x3),
__E_UploadFileUnique = static_cast<int32_t>(0x4),
__E_AppendFile = static_cast<int32_t>(0x5),
__E_DeleteFile = static_cast<int32_t>(0x6),
__E_GetDateTimestamp = static_cast<int32_t>(0x7),
__E_GetFileSize = static_cast<int32_t>(0x8),
__E_Rename = static_cast<int32_t>(0x9),
__E_MakeDirectory = static_cast<int32_t>(0xa),
__E_RemoveDirectory = static_cast<int32_t>(0xb),
__E_PrintWorkingDirectory = static_cast<int32_t>(0xc),
__E_Other = static_cast<int32_t>(0xd),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DownloadFile value: static_cast<int32_t>(0x0)
static ::System::Net::FtpOperation const DownloadFile;

/// @brief Field ListDirectory value: static_cast<int32_t>(0x1)
static ::System::Net::FtpOperation const ListDirectory;

/// @brief Field ListDirectoryDetails value: static_cast<int32_t>(0x2)
static ::System::Net::FtpOperation const ListDirectoryDetails;

/// @brief Field UploadFile value: static_cast<int32_t>(0x3)
static ::System::Net::FtpOperation const UploadFile;

/// @brief Field UploadFileUnique value: static_cast<int32_t>(0x4)
static ::System::Net::FtpOperation const UploadFileUnique;

/// @brief Field AppendFile value: static_cast<int32_t>(0x5)
static ::System::Net::FtpOperation const AppendFile;

/// @brief Field DeleteFile value: static_cast<int32_t>(0x6)
static ::System::Net::FtpOperation const DeleteFile;

/// @brief Field GetDateTimestamp value: static_cast<int32_t>(0x7)
static ::System::Net::FtpOperation const GetDateTimestamp;

/// @brief Field GetFileSize value: static_cast<int32_t>(0x8)
static ::System::Net::FtpOperation const GetFileSize;

/// @brief Field Rename value: static_cast<int32_t>(0x9)
static ::System::Net::FtpOperation const Rename;

/// @brief Field MakeDirectory value: static_cast<int32_t>(0xa)
static ::System::Net::FtpOperation const MakeDirectory;

/// @brief Field RemoveDirectory value: static_cast<int32_t>(0xb)
static ::System::Net::FtpOperation const RemoveDirectory;

/// @brief Field PrintWorkingDirectory value: static_cast<int32_t>(0xc)
static ::System::Net::FtpOperation const PrintWorkingDirectory;

/// @brief Field Other value: static_cast<int32_t>(0xd)
static ::System::Net::FtpOperation const Other;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpOperation_Unwrapped () const noexcept {
return std::bit_cast<__FtpOperation_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FtpOperation(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FtpOperation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FtpOperation()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpOperation, 0x4>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpOperation, "System.Net", "FtpOperation");
