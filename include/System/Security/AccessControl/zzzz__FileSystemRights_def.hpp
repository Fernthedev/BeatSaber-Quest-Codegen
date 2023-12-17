#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemRights)
// Forward declare root types
namespace System::Security::AccessControl {
struct FileSystemRights;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::FileSystemRights);
// Type: System.Security.AccessControl::FileSystemRights
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3033))
// CS Name: ::System.Security.AccessControl::FileSystemRights
struct CORDL_TYPE FileSystemRights : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FileSystemRights_Unwrapped
enum struct __FileSystemRights_Unwrapped : int32_t {
__E_ListDirectory = static_cast<int32_t>(0x1),
__E_ReadData = static_cast<int32_t>(0x1),
__E_CreateFiles = static_cast<int32_t>(0x2),
__E_WriteData = static_cast<int32_t>(0x2),
__E_AppendData = static_cast<int32_t>(0x4),
__E_CreateDirectories = static_cast<int32_t>(0x4),
__E_ReadExtendedAttributes = static_cast<int32_t>(0x8),
__E_WriteExtendedAttributes = static_cast<int32_t>(0x10),
__E_ExecuteFile = static_cast<int32_t>(0x20),
__E_Traverse = static_cast<int32_t>(0x20),
__E_DeleteSubdirectoriesAndFiles = static_cast<int32_t>(0x40),
__E_ReadAttributes = static_cast<int32_t>(0x80),
__E_WriteAttributes = static_cast<int32_t>(0x100),
__E_Write = static_cast<int32_t>(0x116),
__E_Delete = static_cast<int32_t>(0x10000),
__E_ReadPermissions = static_cast<int32_t>(0x20000),
__E_Read = static_cast<int32_t>(0x20089),
__E_ReadAndExecute = static_cast<int32_t>(0x200a9),
__E_Modify = static_cast<int32_t>(0x301bf),
__E_ChangePermissions = static_cast<int32_t>(0x40000),
__E_TakeOwnership = static_cast<int32_t>(0x80000),
__E_Synchronize = static_cast<int32_t>(0x100000),
__E_FullControl = static_cast<int32_t>(0x1f01ff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ListDirectory value: static_cast<int32_t>(0x1)
static ::System::Security::AccessControl::FileSystemRights const ListDirectory;

/// @brief Field ReadData value: static_cast<int32_t>(0x1)
static ::System::Security::AccessControl::FileSystemRights const ReadData;

/// @brief Field CreateFiles value: static_cast<int32_t>(0x2)
static ::System::Security::AccessControl::FileSystemRights const CreateFiles;

/// @brief Field WriteData value: static_cast<int32_t>(0x2)
static ::System::Security::AccessControl::FileSystemRights const WriteData;

/// @brief Field AppendData value: static_cast<int32_t>(0x4)
static ::System::Security::AccessControl::FileSystemRights const AppendData;

/// @brief Field CreateDirectories value: static_cast<int32_t>(0x4)
static ::System::Security::AccessControl::FileSystemRights const CreateDirectories;

/// @brief Field ReadExtendedAttributes value: static_cast<int32_t>(0x8)
static ::System::Security::AccessControl::FileSystemRights const ReadExtendedAttributes;

/// @brief Field WriteExtendedAttributes value: static_cast<int32_t>(0x10)
static ::System::Security::AccessControl::FileSystemRights const WriteExtendedAttributes;

/// @brief Field ExecuteFile value: static_cast<int32_t>(0x20)
static ::System::Security::AccessControl::FileSystemRights const ExecuteFile;

/// @brief Field Traverse value: static_cast<int32_t>(0x20)
static ::System::Security::AccessControl::FileSystemRights const Traverse;

/// @brief Field DeleteSubdirectoriesAndFiles value: static_cast<int32_t>(0x40)
static ::System::Security::AccessControl::FileSystemRights const DeleteSubdirectoriesAndFiles;

/// @brief Field ReadAttributes value: static_cast<int32_t>(0x80)
static ::System::Security::AccessControl::FileSystemRights const ReadAttributes;

/// @brief Field WriteAttributes value: static_cast<int32_t>(0x100)
static ::System::Security::AccessControl::FileSystemRights const WriteAttributes;

/// @brief Field Write value: static_cast<int32_t>(0x116)
static ::System::Security::AccessControl::FileSystemRights const Write;

/// @brief Field Delete value: static_cast<int32_t>(0x10000)
static ::System::Security::AccessControl::FileSystemRights const Delete;

/// @brief Field ReadPermissions value: static_cast<int32_t>(0x20000)
static ::System::Security::AccessControl::FileSystemRights const ReadPermissions;

/// @brief Field Read value: static_cast<int32_t>(0x20089)
static ::System::Security::AccessControl::FileSystemRights const Read;

/// @brief Field ReadAndExecute value: static_cast<int32_t>(0x200a9)
static ::System::Security::AccessControl::FileSystemRights const ReadAndExecute;

/// @brief Field Modify value: static_cast<int32_t>(0x301bf)
static ::System::Security::AccessControl::FileSystemRights const Modify;

/// @brief Field ChangePermissions value: static_cast<int32_t>(0x40000)
static ::System::Security::AccessControl::FileSystemRights const ChangePermissions;

/// @brief Field TakeOwnership value: static_cast<int32_t>(0x80000)
static ::System::Security::AccessControl::FileSystemRights const TakeOwnership;

/// @brief Field Synchronize value: static_cast<int32_t>(0x100000)
static ::System::Security::AccessControl::FileSystemRights const Synchronize;

/// @brief Field FullControl value: static_cast<int32_t>(0x1f01ff)
static ::System::Security::AccessControl::FileSystemRights const FullControl;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FileSystemRights_Unwrapped () const noexcept {
return std::bit_cast<__FileSystemRights_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileSystemRights(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FileSystemRights(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FileSystemRights()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::FileSystemRights, 0x4>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSystemRights, "System.Security.AccessControl", "FileSystemRights");
