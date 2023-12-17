#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerTexture)
namespace UnityEngine {
class Texture2D;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerTexture);
// Type: UnityEngine.Networking::DownloadHandlerTexture
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16141))
// CS Name: ::UnityEngine.Networking::DownloadHandlerTexture*
class CORDL_TYPE DownloadHandlerTexture : public ::UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::Networking::DownloadHandler)]{};

/// @brief Field m_NativeData offset 0x18
 __declspec(property(get=__get_m_NativeData, put=__set_m_NativeData)) ::Unity::Collections::NativeArray_1<uint8_t>  m_NativeData;

/// @brief Field mTexture offset 0x28
 __declspec(property(get=__get_mTexture, put=__set_mTexture)) ::UnityEngine::Texture2D*  mTexture;

/// @brief Field mHasTexture offset 0x30
 __declspec(property(get=__get_mHasTexture, put=__set_mHasTexture)) bool  mHasTexture;

/// @brief Field mNonReadable offset 0x31
 __declspec(property(get=__get_mNonReadable, put=__set_mNonReadable)) bool  mNonReadable;

 __declspec(property(get=get_texture)) ::UnityEngine::Texture2D*  texture;

constexpr void __set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_NativeData() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_NativeData() const;

constexpr void __set_mTexture(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_mTexture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_mTexture() const;

constexpr void __set_mHasTexture(bool  value) ;

constexpr bool& __get_mHasTexture() ;

constexpr bool const& __get_mHasTexture() const;

constexpr void __set_mNonReadable(bool  value) ;

constexpr bool& __get_mNonReadable() ;

constexpr bool const& __get_mNonReadable() const;

/// @brief Method Create addr 0x2eb0e70 size 0x44 virtual false final false
static inline ::cordl_internals::intptr_t Create(::UnityEngine::Networking::DownloadHandlerTexture*  obj, bool  readable) ;

/// @brief Method InternalCreateTexture addr 0x2eb0eb4 size 0x4c virtual false final false
inline void InternalCreateTexture(bool  readable) ;

static inline ::UnityEngine::Networking::DownloadHandlerTexture* New_ctor(bool  readable) ;

/// @brief Method .ctor addr 0x2eb0e10 size 0x60 virtual false final false
inline void _ctor(bool  readable) ;

/// @brief Method GetNativeData addr 0x2eb0f00 size 0xc virtual true final false
inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData() ;

/// @brief Method Dispose addr 0x2eb0f0c size 0x24 virtual true final false
inline void Dispose() ;

/// @brief Method get_texture addr 0x2eb0f30 size 0x4 virtual false final false
inline ::UnityEngine::Texture2D* get_texture() ;

/// @brief Method InternalGetTexture addr 0x2eb0f34 size 0x110 virtual false final false
inline ::UnityEngine::Texture2D* InternalGetTexture() ;

/// @brief Method InternalGetTextureNative addr 0x2eb1044 size 0x3c virtual false final false
inline ::UnityEngine::Texture2D* InternalGetTextureNative() ;

/// @brief Method GetContent addr 0x2eb1080 size 0x54 virtual false final false
static inline ::UnityEngine::Texture2D* GetContent(::UnityEngine::Networking::UnityWebRequest*  www) ;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadHandlerTexture(DownloadHandlerTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadHandlerTexture(DownloadHandlerTexture const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DownloadHandlerTexture()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerTexture, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerTexture*, "UnityEngine.Networking", "DownloadHandlerTexture");
