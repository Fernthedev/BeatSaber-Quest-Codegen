#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DirectoryInfo)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
struct SearchTarget;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class DirectoryInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::DirectoryInfo);
// Type: System.IO::DirectoryInfo
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3596))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3590))
// CS Name: ::System.IO::DirectoryInfo*
class CORDL_TYPE DirectoryInfo : public ::System::IO::FileSystemInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::IO::FileSystemInfo)]{};

static inline ::System::IO::DirectoryInfo* New_ctor(::StringW  path) ;

/// @brief Method .ctor addr 0x2509b70 size 0x84 virtual false final false
inline void _ctor(::StringW  path) ;

static inline ::System::IO::DirectoryInfo* New_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method .ctor addr 0x250a324 size 0x48 virtual false final false
inline void _ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method Init addr 0x250adcc size 0x290 virtual false final false
inline void Init(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method GetDirectories addr 0x250b05c size 0xa8 virtual false final false
inline ::ArrayW<::System::IO::DirectoryInfo*,::Array<::System::IO::DirectoryInfo*>*> GetDirectories() ;

/// @brief Method GetDirectories addr 0x250b104 size 0xa0 virtual false final false
inline ::ArrayW<::System::IO::DirectoryInfo*,::Array<::System::IO::DirectoryInfo*>*> GetDirectories(::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method InternalEnumerateInfos addr 0x250b1a4 size 0x1c0 virtual false final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* InternalEnumerateInfos(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options) ;

/// @brief Method Delete addr 0x250b364 size 0xc virtual true final false
inline void Delete() ;

static inline ::System::IO::DirectoryInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x250b434 size 0x4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectoryInfo(DirectoryInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectoryInfo(DirectoryInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DirectoryInfo()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::DirectoryInfo, 0xa8>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::DirectoryInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DirectoryInfo*, "System.IO", "DirectoryInfo");
