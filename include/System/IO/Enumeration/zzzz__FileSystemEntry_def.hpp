#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FileSystemEntry)
namespace System::IO {
struct FileAttributes;
}
namespace System::IO::Enumeration {
struct __FileSystemEntry____fileNameBuffer_e__FixedBuffer;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System::IO {
struct FileStatus;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace GlobalNamespace {
struct __Interop__Sys__DirectoryEntry;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO::Enumeration {
struct __FileSystemEntry____fileNameBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::System::IO::Enumeration::FileSystemEntry);
MARK_VAL_T(::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer);
// Type: ::<_fileNameBuffer>e__FixedBuffer
namespace System::IO::Enumeration {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3641))
// CS Name: ::FileSystemEntry::<_fileNameBuffer>e__FixedBuffer
struct CORDL_TYPE __FileSystemEntry____fileNameBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x200> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x200};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) char16_t  FixedElementField;

constexpr void __set_FixedElementField(char16_t  value) ;

constexpr char16_t& __get_FixedElementField() ;

constexpr char16_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr __FileSystemEntry____fileNameBuffer_e__FixedBuffer(char16_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FileSystemEntry____fileNameBuffer_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x200>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FileSystemEntry____fileNameBuffer_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer, 0x200>, "Size mismatch!");

} // namespace end def System::IO::Enumeration
// Type: System.IO.Enumeration::FileSystemEntry
namespace System::IO::Enumeration {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3642))
// CS Name: ::System.IO.Enumeration::FileSystemEntry
struct CORDL_TYPE FileSystemEntry : public ::bs_hook::ValueTypeWrapper<0x2f0> {
public:
// Declarations
using __fileNameBuffer_e__FixedBuffer = ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2f0};

/// @brief Field _directoryEntry offset 0x0
 __declspec(property(get=__get__directoryEntry, put=__set__directoryEntry)) ::GlobalNamespace::__Interop__Sys__DirectoryEntry  _directoryEntry;

/// @brief Field _status offset 0x10
 __declspec(property(get=__get__status, put=__set__status)) ::System::IO::FileStatus  _status;

/// @brief Field _pathBuffer offset 0x88
 __declspec(property(get=__get__pathBuffer, put=__set__pathBuffer)) ::System::Span_1<char16_t>  _pathBuffer;

/// @brief Field _fullPath offset 0x98
 __declspec(property(get=__get__fullPath, put=__set__fullPath)) ::System::ReadOnlySpan_1<char16_t>  _fullPath;

/// @brief Field _fileName offset 0xa8
 __declspec(property(get=__get__fileName, put=__set__fileName)) ::System::ReadOnlySpan_1<char16_t>  _fileName;

/// @brief Field _fileNameBuffer offset 0xb8
 __declspec(property(get=__get__fileNameBuffer, put=__set__fileNameBuffer)) ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer  _fileNameBuffer;

/// @brief Field _initialAttributes offset 0x2b8
 __declspec(property(get=__get__initialAttributes, put=__set__initialAttributes)) ::System::IO::FileAttributes  _initialAttributes;

/// @brief Field <Directory>k__BackingField offset 0x2c0
 __declspec(property(get=__get__Directory_k__BackingField, put=__set__Directory_k__BackingField)) ::System::ReadOnlySpan_1<char16_t>  _Directory_k__BackingField;

/// @brief Field <RootDirectory>k__BackingField offset 0x2d0
 __declspec(property(get=__get__RootDirectory_k__BackingField, put=__set__RootDirectory_k__BackingField)) ::System::ReadOnlySpan_1<char16_t>  _RootDirectory_k__BackingField;

/// @brief Field <OriginalRootDirectory>k__BackingField offset 0x2e0
 __declspec(property(get=__get__OriginalRootDirectory_k__BackingField, put=__set__OriginalRootDirectory_k__BackingField)) ::System::ReadOnlySpan_1<char16_t>  _OriginalRootDirectory_k__BackingField;

 __declspec(property(get=get_FullPath)) ::System::ReadOnlySpan_1<char16_t>  FullPath;

 __declspec(property(get=get_FileName)) ::System::ReadOnlySpan_1<char16_t>  FileName;

 __declspec(property(get=get_Directory, put=set_Directory)) ::System::ReadOnlySpan_1<char16_t>  Directory;

 __declspec(property(get=get_RootDirectory, put=set_RootDirectory)) ::System::ReadOnlySpan_1<char16_t>  RootDirectory;

 __declspec(property(get=get_OriginalRootDirectory, put=set_OriginalRootDirectory)) ::System::ReadOnlySpan_1<char16_t>  OriginalRootDirectory;

 __declspec(property(get=get_Attributes)) ::System::IO::FileAttributes  Attributes;

 __declspec(property(get=get_IsDirectory)) bool  IsDirectory;

constexpr void __set__directoryEntry(::GlobalNamespace::__Interop__Sys__DirectoryEntry  value) ;

constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry& __get__directoryEntry() ;

constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry const& __get__directoryEntry() const;

constexpr void __set__status(::System::IO::FileStatus  value) ;

constexpr ::System::IO::FileStatus& __get__status() ;

constexpr ::System::IO::FileStatus const& __get__status() const;

constexpr void __set__pathBuffer(::System::Span_1<char16_t>  value) ;

constexpr ::System::Span_1<char16_t>& __get__pathBuffer() ;

constexpr ::System::Span_1<char16_t> const& __get__pathBuffer() const;

constexpr void __set__fullPath(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__fullPath() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__fullPath() const;

constexpr void __set__fileName(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__fileName() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__fileName() const;

constexpr void __set__fileNameBuffer(::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer  value) ;

constexpr ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer& __get__fileNameBuffer() ;

constexpr ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer const& __get__fileNameBuffer() const;

constexpr void __set__initialAttributes(::System::IO::FileAttributes  value) ;

constexpr ::System::IO::FileAttributes& __get__initialAttributes() ;

constexpr ::System::IO::FileAttributes const& __get__initialAttributes() const;

constexpr void __set__Directory_k__BackingField(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__Directory_k__BackingField() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__Directory_k__BackingField() const;

constexpr void __set__RootDirectory_k__BackingField(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__RootDirectory_k__BackingField() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__RootDirectory_k__BackingField() const;

constexpr void __set__OriginalRootDirectory_k__BackingField(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__OriginalRootDirectory_k__BackingField() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__OriginalRootDirectory_k__BackingField() const;

/// @brief Method Initialize addr 0x25460e4 size 0x280 virtual false final false
static inline ::System::IO::FileAttributes Initialize(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry, ::GlobalNamespace::__Interop__Sys__DirectoryEntry  directoryEntry, ::System::ReadOnlySpan_1<char16_t>  directory, ::System::ReadOnlySpan_1<char16_t>  rootDirectory, ::System::ReadOnlySpan_1<char16_t>  originalRootDirectory, ::System::Span_1<char16_t>  pathBuffer) ;

/// @brief Method get_FullPath addr 0x2546364 size 0x130 virtual false final false
inline ::System::ReadOnlySpan_1<char16_t> get_FullPath() ;

/// @brief Method get_FileName addr 0x2546494 size 0x94 virtual false final false
inline ::System::ReadOnlySpan_1<char16_t> get_FileName() ;

/// @brief Method get_Directory addr 0x2546528 size 0x10 virtual false final false
inline ::System::ReadOnlySpan_1<char16_t> get_Directory() ;

/// @brief Method set_Directory addr 0x2546538 size 0xc virtual false final false
inline void set_Directory(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method get_RootDirectory addr 0x2546544 size 0x10 virtual false final false
inline ::System::ReadOnlySpan_1<char16_t> get_RootDirectory() ;

/// @brief Method set_RootDirectory addr 0x2546554 size 0xc virtual false final false
inline void set_RootDirectory(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method get_OriginalRootDirectory addr 0x2546560 size 0x10 virtual false final false
inline ::System::ReadOnlySpan_1<char16_t> get_OriginalRootDirectory() ;

/// @brief Method set_OriginalRootDirectory addr 0x2546570 size 0xc virtual false final false
inline void set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method get_Attributes addr 0x254657c size 0x48 virtual false final false
inline ::System::IO::FileAttributes get_Attributes() ;

/// @brief Method get_IsDirectory addr 0x25465c4 size 0x8 virtual false final false
inline bool get_IsDirectory() ;

/// @brief Method ToFileSystemInfo addr 0x25465cc size 0x70 virtual false final false
inline ::System::IO::FileSystemInfo* ToFileSystemInfo() ;

/// @brief Method ToFullPath addr 0x254663c size 0x28 virtual false final false
inline ::StringW ToFullPath() ;

/// @brief Method ToSpecifiedFullPath addr 0x2546664 size 0x184 virtual false final false
inline ::StringW ToSpecifiedFullPath() ;

// Ctor Parameters [CppParam { name: "_directoryEntry", ty: "::GlobalNamespace::__Interop__Sys__DirectoryEntry", modifiers: "", def_value: None }, CppParam { name: "_status", ty: "::System::IO::FileStatus", modifiers: "", def_value: None }, CppParam { name: "_pathBuffer", ty: "::System::Span_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_fullPath", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_fileName", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_fileNameBuffer", ty: "::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "_initialAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: None }, CppParam { name: "_Directory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_RootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_OriginalRootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr FileSystemEntry(::GlobalNamespace::__Interop__Sys__DirectoryEntry  _directoryEntry, ::System::IO::FileStatus  _status, ::System::Span_1<char16_t>  _pathBuffer, ::System::ReadOnlySpan_1<char16_t>  _fullPath, ::System::ReadOnlySpan_1<char16_t>  _fileName, ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer  _fileNameBuffer, ::System::IO::FileAttributes  _initialAttributes, ::System::ReadOnlySpan_1<char16_t>  _Directory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _RootDirectory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _OriginalRootDirectory_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FileSystemEntry(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2f0>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FileSystemEntry()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemEntry, 0x2f0>, "Size mismatch!");

} // namespace end def System::IO::Enumeration
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEntry, "System.IO.Enumeration", "FileSystemEntry");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer, "System.IO.Enumeration", "FileSystemEntry/<_fileNameBuffer>e__FixedBuffer");
