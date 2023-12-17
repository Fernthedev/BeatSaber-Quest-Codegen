#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoIO)
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::IO {
struct MonoIOError;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileAccess;
}
namespace System {
class Exception;
}
namespace System::IO {
struct FileOptions;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
struct MonoFileType;
}
// Forward declare root types
namespace System::IO {
class MonoIO;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::MonoIO);
// Type: System.IO::MonoIO
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3630))
// CS Name: ::System.IO::MonoIO*
class CORDL_TYPE MonoIO : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_InvalidHandle(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_InvalidHandle() ;

static inline void setStaticF_dump_handles(bool  value) ;

static inline bool getStaticF_dump_handles() ;

/// @brief Method GetException addr 0x2541608 size 0x130 virtual false final false
static inline ::System::Exception* GetException(::System::IO::MonoIOError  error) ;

/// @brief Method GetException addr 0x253dc54 size 0x71c virtual false final false
static inline ::System::Exception* GetException(::StringW  path, ::System::IO::MonoIOError  error) ;

/// @brief Method GetCurrentDirectory addr 0x254173c size 0x4 virtual false final false
static inline ::StringW GetCurrentDirectory(ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method GetFileType addr 0x2541740 size 0x4 virtual false final false
static inline ::System::IO::MonoFileType GetFileType(::cordl_internals::intptr_t  handle, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method GetFileType addr 0x253e370 size 0x128 virtual false final false
static inline ::System::IO::MonoFileType GetFileType(::System::Runtime::InteropServices::SafeHandle*  safeHandle, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Open addr 0x2541744 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t Open(::cordl_internals::Ptr<char16_t>  filename, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share, ::System::IO::FileOptions  options, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Open addr 0x253db40 size 0x9c virtual false final false
static inline ::cordl_internals::intptr_t Open(::StringW  filename, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share, ::System::IO::FileOptions  options, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Cancel_internal addr 0x2541748 size 0x4 virtual false final false
static inline bool Cancel_internal(::cordl_internals::intptr_t  handle, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Cancel addr 0x254174c size 0x128 virtual false final false
static inline bool Cancel(::System::Runtime::InteropServices::SafeHandle*  safeHandle, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Close addr 0x25412d8 size 0x4 virtual false final false
static inline bool Close(::cordl_internals::intptr_t  handle, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Read addr 0x2541874 size 0x4 virtual false final false
static inline int32_t Read(::cordl_internals::intptr_t  handle, ::ArrayW<uint8_t,::Array<uint8_t>*>  dest, int32_t  dest_offset, int32_t  count, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Read addr 0x254136c size 0x148 virtual false final false
static inline int32_t Read(::System::Runtime::InteropServices::SafeHandle*  safeHandle, ::ArrayW<uint8_t,::Array<uint8_t>*>  dest, int32_t  dest_offset, int32_t  count, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Write addr 0x2541878 size 0x4 virtual false final false
static inline int32_t Write(::cordl_internals::intptr_t  handle, ByRefConst<::ArrayW<uint8_t,::Array<uint8_t>*>>  src, int32_t  src_offset, int32_t  count, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Write addr 0x2540064 size 0x148 virtual false final false
static inline int32_t Write(::System::Runtime::InteropServices::SafeHandle*  safeHandle, ::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  src_offset, int32_t  count, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Seek addr 0x254187c size 0x4 virtual false final false
static inline int64_t Seek(::cordl_internals::intptr_t  handle, int64_t  offset, ::System::IO::SeekOrigin  origin, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method Seek addr 0x253e74c size 0x140 virtual false final false
static inline int64_t Seek(::System::Runtime::InteropServices::SafeHandle*  safeHandle, int64_t  offset, ::System::IO::SeekOrigin  origin, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method GetLength addr 0x2541880 size 0x4 virtual false final false
static inline int64_t GetLength(::cordl_internals::intptr_t  handle, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method GetLength addr 0x253ea30 size 0x128 virtual false final false
static inline int64_t GetLength(::System::Runtime::InteropServices::SafeHandle*  safeHandle, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method SetLength addr 0x2541884 size 0x4 virtual false final false
static inline bool SetLength(::cordl_internals::intptr_t  handle, int64_t  length, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method SetLength addr 0x2540d58 size 0x130 virtual false final false
static inline bool SetLength(::System::Runtime::InteropServices::SafeHandle*  safeHandle, int64_t  length, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method get_ConsoleOutput addr 0x2541888 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t get_ConsoleOutput() ;

/// @brief Method get_ConsoleInput addr 0x254188c size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t get_ConsoleInput() ;

/// @brief Method get_ConsoleError addr 0x2541890 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t get_ConsoleError() ;

/// @brief Method CreatePipe addr 0x2541894 size 0x4 virtual false final false
static inline bool CreatePipe(ByRef<::cordl_internals::intptr_t>  read_handle, ByRef<::cordl_internals::intptr_t>  write_handle, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method DuplicateHandle addr 0x2541898 size 0x4 virtual false final false
static inline bool DuplicateHandle(::cordl_internals::intptr_t  source_process_handle, ::cordl_internals::intptr_t  source_handle, ::cordl_internals::intptr_t  target_process_handle, ByRef<::cordl_internals::intptr_t>  target_handle, int32_t  access, int32_t  inherit, int32_t  options, ByRef<::System::IO::MonoIOError>  error) ;

/// @brief Method get_VolumeSeparatorChar addr 0x254189c size 0x4 virtual false final false
static inline char16_t get_VolumeSeparatorChar() ;

/// @brief Method get_DirectorySeparatorChar addr 0x25418a0 size 0x4 virtual false final false
static inline char16_t get_DirectorySeparatorChar() ;

/// @brief Method get_AltDirectorySeparatorChar addr 0x25418a4 size 0x4 virtual false final false
static inline char16_t get_AltDirectorySeparatorChar() ;

/// @brief Method get_PathSeparator addr 0x25418a8 size 0x4 virtual false final false
static inline char16_t get_PathSeparator() ;

/// @brief Method DumpHandles addr 0x2541738 size 0x4 virtual false final false
static inline void DumpHandles() ;

/// @brief Method RemapPath addr 0x25418ac size 0x4 virtual false final false
static inline bool RemapPath(::StringW  path, ByRef<::StringW>  newPath) ;

// Ctor Parameters [CppParam { name: "", ty: "MonoIO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoIO(MonoIO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoIO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoIO(MonoIO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoIO()  = default;
public:


// Fields

// Static field InvalidHandle

// Static field dump_handles


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoIO, 0x10>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::MonoIO);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIO*, "System.IO", "MonoIO");
