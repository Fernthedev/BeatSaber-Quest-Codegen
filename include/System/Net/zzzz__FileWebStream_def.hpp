#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileWebStream)
namespace System::Net {
class FileWebRequest;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class ICloseEx;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::Net {
struct CloseExState;
}
// Forward declare root types
namespace System::Net {
class FileWebStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FileWebStream);
// Type: System.Net::FileWebStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3627))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9136))
// CS Name: ::System.Net::FileWebStream*
class CORDL_TYPE FileWebStream : public ::System::IO::FileStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::IO::FileStream)]{};

/// @brief Field m_request offset 0x70
 __declspec(property(get=__get_m_request, put=__set_m_request)) ::System::Net::FileWebRequest*  m_request;

/// @brief Convert operator to "::System::Net::ICloseEx"
constexpr operator  ::System::Net::ICloseEx*() noexcept;

constexpr void __set_m_request(::System::Net::FileWebRequest*  value) ;

constexpr ::System::Net::FileWebRequest* __get_m_request() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::FileWebRequest*> __get_m_request() const;

static inline ::System::Net::FileWebStream* New_ctor(::System::Net::FileWebRequest*  request, ::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  sharing) ;

/// @brief Method .ctor addr 0x29b51dc size 0x9c virtual false final false
inline void _ctor(::System::Net::FileWebRequest*  request, ::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  sharing) ;

static inline ::System::Net::FileWebStream* New_ctor(::System::Net::FileWebRequest*  request, ::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  sharing, int32_t  length, bool  async) ;

/// @brief Method .ctor addr 0x29b5e4c size 0xb4 virtual false final false
inline void _ctor(::System::Net::FileWebRequest*  request, ::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  sharing, int32_t  length, bool  async) ;

/// @brief Method Dispose addr 0x29b5f00 size 0xb0 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method System.Net.ICloseEx.CloseEx addr 0x29b5fb0 size 0x3c virtual true final true
inline void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState  closeState) ;

/// @brief Method Read addr 0x29b5fec size 0xc8 virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Write addr 0x29b6134 size 0xc8 virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method BeginRead addr 0x29b61fc size 0xe0 virtual true final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method EndRead addr 0x29b62dc size 0xa0 virtual true final false
inline int32_t EndRead(::System::IAsyncResult*  ar) ;

/// @brief Method BeginWrite addr 0x29b637c size 0xe0 virtual true final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method EndWrite addr 0x29b645c size 0xa0 virtual true final false
inline void EndWrite(::System::IAsyncResult*  ar) ;

/// @brief Method CheckError addr 0x29b60b4 size 0x80 virtual false final false
inline void CheckError() ;

// Ctor Parameters [CppParam { name: "", ty: "FileWebStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWebStream(FileWebStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWebStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWebStream(FileWebStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FileWebStream()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FileWebStream, 0x78>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::FileWebStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebStream*, "System.Net", "FileWebStream");
