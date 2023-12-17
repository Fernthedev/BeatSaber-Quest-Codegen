#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoIOStat)
namespace System::IO {
struct FileAttributes;
}
// Forward declare root types
namespace System::IO {
struct MonoIOStat;
}
// Write type traits
MARK_VAL_T(::System::IO::MonoIOStat);
// Type: System.IO::MonoIOStat
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3632))
// CS Name: ::System.IO::MonoIOStat
struct CORDL_TYPE MonoIOStat : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field fileAttributes offset 0x0
 __declspec(property(get=__get_fileAttributes, put=__set_fileAttributes)) ::System::IO::FileAttributes  fileAttributes;

/// @brief Field Length offset 0x8
 __declspec(property(get=__get_Length, put=__set_Length)) int64_t  Length;

/// @brief Field CreationTime offset 0x10
 __declspec(property(get=__get_CreationTime, put=__set_CreationTime)) int64_t  CreationTime;

/// @brief Field LastAccessTime offset 0x18
 __declspec(property(get=__get_LastAccessTime, put=__set_LastAccessTime)) int64_t  LastAccessTime;

/// @brief Field LastWriteTime offset 0x20
 __declspec(property(get=__get_LastWriteTime, put=__set_LastWriteTime)) int64_t  LastWriteTime;

constexpr void __set_fileAttributes(::System::IO::FileAttributes  value) ;

constexpr ::System::IO::FileAttributes& __get_fileAttributes() ;

constexpr ::System::IO::FileAttributes const& __get_fileAttributes() const;

constexpr void __set_Length(int64_t  value) ;

constexpr int64_t& __get_Length() ;

constexpr int64_t const& __get_Length() const;

constexpr void __set_CreationTime(int64_t  value) ;

constexpr int64_t& __get_CreationTime() ;

constexpr int64_t const& __get_CreationTime() const;

constexpr void __set_LastAccessTime(int64_t  value) ;

constexpr int64_t& __get_LastAccessTime() ;

constexpr int64_t const& __get_LastAccessTime() const;

constexpr void __set_LastWriteTime(int64_t  value) ;

constexpr int64_t& __get_LastWriteTime() ;

constexpr int64_t const& __get_LastWriteTime() const;

// Ctor Parameters [CppParam { name: "fileAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "CreationTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "LastAccessTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "LastWriteTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr MonoIOStat(::System::IO::FileAttributes  fileAttributes, int64_t  Length, int64_t  CreationTime, int64_t  LastAccessTime, int64_t  LastWriteTime) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MonoIOStat(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MonoIOStat()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoIOStat, 0x28>, "Size mismatch!");

} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIOStat, "System.IO", "MonoIOStat");
