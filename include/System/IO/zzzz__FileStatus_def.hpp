#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileStatus)
namespace GlobalNamespace {
struct __Interop__Sys__FileStatus;
}
namespace System {
struct DateTimeOffset;
}
namespace System::IO {
struct FileAttributes;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
struct FileStatus;
}
// Write type traits
MARK_VAL_T(::System::IO::FileStatus);
// Type: System.IO::FileStatus
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3594))
// CS Name: ::System.IO::FileStatus
struct CORDL_TYPE FileStatus : public ::bs_hook::ValueTypeWrapper<0x78> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field _fileStatus offset 0x0
 __declspec(property(get=__get__fileStatus, put=__set__fileStatus)) ::GlobalNamespace::__Interop__Sys__FileStatus  _fileStatus;

/// @brief Field _fileStatusInitialized offset 0x70
 __declspec(property(get=__get__fileStatusInitialized, put=__set__fileStatusInitialized)) int32_t  _fileStatusInitialized;

/// @brief Field <InitiallyDirectory>k__BackingField offset 0x74
 __declspec(property(get=__get__InitiallyDirectory_k__BackingField, put=__set__InitiallyDirectory_k__BackingField)) bool  _InitiallyDirectory_k__BackingField;

/// @brief Field _isDirectory offset 0x75
 __declspec(property(get=__get__isDirectory, put=__set__isDirectory)) bool  _isDirectory;

/// @brief Field _exists offset 0x76
 __declspec(property(get=__get__exists, put=__set__exists)) bool  _exists;

 __declspec(property(get=get_InitiallyDirectory, put=set_InitiallyDirectory)) bool  InitiallyDirectory;

constexpr void __set__fileStatus(::GlobalNamespace::__Interop__Sys__FileStatus  value) ;

constexpr ::GlobalNamespace::__Interop__Sys__FileStatus& __get__fileStatus() ;

constexpr ::GlobalNamespace::__Interop__Sys__FileStatus const& __get__fileStatus() const;

constexpr void __set__fileStatusInitialized(int32_t  value) ;

constexpr int32_t& __get__fileStatusInitialized() ;

constexpr int32_t const& __get__fileStatusInitialized() const;

constexpr void __set__InitiallyDirectory_k__BackingField(bool  value) ;

constexpr bool& __get__InitiallyDirectory_k__BackingField() ;

constexpr bool const& __get__InitiallyDirectory_k__BackingField() const;

constexpr void __set__isDirectory(bool  value) ;

constexpr bool& __get__isDirectory() ;

constexpr bool const& __get__isDirectory() const;

constexpr void __set__exists(bool  value) ;

constexpr bool& __get__exists() ;

constexpr bool const& __get__exists() const;

/// @brief Method get_InitiallyDirectory addr 0x250e1e0 size 0x8 virtual false final false
inline bool get_InitiallyDirectory() ;

/// @brief Method set_InitiallyDirectory addr 0x250e1e8 size 0xc virtual false final false
inline void set_InitiallyDirectory(bool  value) ;

/// @brief Method Initialize addr 0x250e1f4 size 0x14 virtual false final false
static inline void Initialize(ByRef<::System::IO::FileStatus>  status, bool  isDirectory) ;

/// @brief Method IsReadOnly addr 0x250e208 size 0xf0 virtual false final false
inline bool IsReadOnly(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError) ;

/// @brief Method GetAttributes addr 0x250e3b4 size 0xe8 virtual false final false
inline ::System::IO::FileAttributes GetAttributes(::System::ReadOnlySpan_1<char16_t>  path, ::System::ReadOnlySpan_1<char16_t>  fileName) ;

/// @brief Method GetExists addr 0x250e49c size 0x44 virtual false final false
inline bool GetExists(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method GetLastWriteTime addr 0x250e674 size 0x9c virtual false final false
inline ::System::DateTimeOffset GetLastWriteTime(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError) ;

/// @brief Method UnixTimeToDateTimeOffset addr 0x250e710 size 0xb4 virtual false final false
inline ::System::DateTimeOffset UnixTimeToDateTimeOffset(int64_t  seconds, int64_t  nanoseconds) ;

/// @brief Method GetLength addr 0x250e7c4 size 0x1c virtual false final false
inline int64_t GetLength(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError) ;

/// @brief Method Refresh addr 0x250e4e0 size 0x194 virtual false final false
inline void Refresh(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method EnsureStatInitialized addr 0x250e2f8 size 0xbc virtual false final false
inline void EnsureStatInitialized(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError) ;

// Ctor Parameters [CppParam { name: "_fileStatus", ty: "::GlobalNamespace::__Interop__Sys__FileStatus", modifiers: "", def_value: None }, CppParam { name: "_fileStatusInitialized", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_InitiallyDirectory_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_isDirectory", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_exists", ty: "bool", modifiers: "", def_value: None }]
constexpr FileStatus(::GlobalNamespace::__Interop__Sys__FileStatus  _fileStatus, int32_t  _fileStatusInitialized, bool  _InitiallyDirectory_k__BackingField, bool  _isDirectory, bool  _exists) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FileStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x78>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FileStatus()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileStatus, 0x78>, "Size mismatch!");

} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStatus, "System.IO", "FileStatus");
