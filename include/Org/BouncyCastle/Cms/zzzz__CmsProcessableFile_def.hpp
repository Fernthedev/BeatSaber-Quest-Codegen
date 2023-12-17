#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsProcessableFile)
namespace System::IO {
class FileInfo;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessableFile;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsProcessableFile);
// Type: Org.BouncyCastle.Cms::CmsProcessableFile
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(646))
// CS Name: ::Org.BouncyCastle.Cms::CmsProcessableFile*
class CORDL_TYPE CmsProcessableFile : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field DefaultBufSize offset 0x0
static constexpr int32_t  DefaultBufSize{static_cast<int32_t>(0x8000)};

/// @brief Field _file offset 0x10
 __declspec(property(get=__get__file, put=__set__file)) ::System::IO::FileInfo*  _file;

/// @brief Field _bufSize offset 0x18
 __declspec(property(get=__get__bufSize, put=__set__bufSize)) int32_t  _bufSize;

/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
constexpr operator  ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
constexpr operator  ::Org::BouncyCastle::Cms::CmsReadable*() noexcept;

constexpr void __set__file(::System::IO::FileInfo*  value) ;

constexpr ::System::IO::FileInfo* __get__file() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::FileInfo*> __get__file() const;

constexpr void __set__bufSize(int32_t  value) ;

constexpr int32_t& __get__bufSize() ;

constexpr int32_t const& __get__bufSize() const;

static inline ::Org::BouncyCastle::Cms::CmsProcessableFile* New_ctor(::System::IO::FileInfo*  file) ;

/// @brief Method .ctor addr 0x11e5190 size 0x30 virtual false final false
inline void _ctor(::System::IO::FileInfo*  file) ;

static inline ::Org::BouncyCastle::Cms::CmsProcessableFile* New_ctor(::System::IO::FileInfo*  file, int32_t  bufSize) ;

/// @brief Method .ctor addr 0x11e51c0 size 0x30 virtual false final false
inline void _ctor(::System::IO::FileInfo*  file, int32_t  bufSize) ;

/// @brief Method GetInputStream addr 0x11e51f0 size 0x94 virtual true final false
inline ::System::IO::Stream* GetInputStream() ;

/// @brief Method Write addr 0x11e5284 size 0x84 virtual true final false
inline void Write(::System::IO::Stream*  zOut) ;

/// @brief Method GetContent addr 0x11e5308 size 0x8 virtual true final false
inline ::System::Object* GetContent() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsProcessableFile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsProcessableFile(CmsProcessableFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsProcessableFile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsProcessableFile(CmsProcessableFile const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsProcessableFile()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsProcessableFile, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsProcessableFile);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsProcessableFile*, "Org.BouncyCastle.Cms", "CmsProcessableFile");
