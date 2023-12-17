#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandler)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System::Text {
class Encoding;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandler);
// Type: UnityEngine.Networking::DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15580))
// CS Name: ::UnityEngine.Networking::DownloadHandler*
class CORDL_TYPE DownloadHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

 __declspec(property(get=get_error)) ::StringW  error;

 __declspec(property(get=get_text)) ::StringW  text;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

/// @brief Method Release addr 0x2eaf378 size 0x3c virtual false final false
inline void Release() ;

static inline ::UnityEngine::Networking::DownloadHandler* New_ctor() ;

/// @brief Method .ctor addr 0x2eaf3b4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Finalize addr 0x2eaf3bc size 0x9c virtual true final false
inline void Finalize() ;

/// @brief Method Dispose addr 0x2eaf458 size 0x94 virtual true final false
inline void Dispose() ;

/// @brief Method get_error addr 0x2eaf4ec size 0x3c virtual false final false
inline ::StringW get_error() ;

/// @brief Method GetErrorMsg addr 0x2eaf528 size 0x3c virtual false final false
inline ::StringW GetErrorMsg() ;

/// @brief Method get_text addr 0x2eaf564 size 0xc virtual false final false
inline ::StringW get_text() ;

/// @brief Method GetNativeData addr 0x2eaf570 size 0xc virtual true final false
inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData() ;

/// @brief Method GetData addr 0x2eaf57c size 0x4 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetData() ;

/// @brief Method GetText addr 0x2eaf624 size 0xe8 virtual true final false
inline ::StringW GetText() ;

/// @brief Method GetTextEncoder addr 0x2eaf70c size 0x270 virtual false final false
inline ::System::Text::Encoding* GetTextEncoder() ;

/// @brief Method GetContentType addr 0x2eaf97c size 0x3c virtual false final false
inline ::StringW GetContentType() ;

/// @brief Method ReceiveContentLengthHeader addr 0x2eaf9b8 size 0xc virtual true final false
inline void ReceiveContentLengthHeader(uint64_t  contentLength) ;

/// @brief Method ReceiveContentLength addr 0x2eaf9c4 size 0x4 virtual true final false
inline void ReceiveContentLength(int32_t  contentLength) ;

/// @brief Method GetCheckedDownloader addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T GetCheckedDownloader(::UnityEngine::Networking::UnityWebRequest*  www) ;

/// @brief Method InternalGetByteArray addr 0x2eaf9c8 size 0x44 virtual false final false
static inline ::cordl_internals::Ptr<uint8_t> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler*  dh, ByRef<int32_t>  length) ;

/// @brief Method InternalGetByteArray addr 0x2eaf580 size 0xa4 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler*  dh) ;

/// @brief Method InternalGetNativeArray addr 0x2eafa0c size 0xbc virtual false final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> InternalGetNativeArray(::UnityEngine::Networking::DownloadHandler*  dh, ByRef<::Unity::Collections::NativeArray_1<uint8_t>>  nativeArray) ;

/// @brief Method DisposeNativeArray addr 0x2eafac8 size 0x54 virtual false final false
static inline void DisposeNativeArray(ByRef<::Unity::Collections::NativeArray_1<uint8_t>>  data) ;

/// @brief Method CreateNativeArrayForNativeData addr 0x2eafb1c size 0x68 virtual false final false
static inline void CreateNativeArrayForNativeData(ByRef<::Unity::Collections::NativeArray_1<uint8_t>>  data, ::cordl_internals::Ptr<uint8_t>  bytes, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadHandler(DownloadHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadHandler(DownloadHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DownloadHandler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandler, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandler*, "UnityEngine.Networking", "DownloadHandler");
