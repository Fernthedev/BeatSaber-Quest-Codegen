#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerAudioClip)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct AudioType;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerAudioClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerAudioClip);
// Type: UnityEngine.Networking::DownloadHandlerAudioClip
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16162))
// CS Name: ::UnityEngine.Networking::DownloadHandlerAudioClip*
class CORDL_TYPE DownloadHandlerAudioClip : public ::UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::Networking::DownloadHandler)]{};

/// @brief Field m_NativeData offset 0x18
 __declspec(property(get=__get_m_NativeData, put=__set_m_NativeData)) ::Unity::Collections::NativeArray_1<uint8_t>  m_NativeData;

 __declspec(property(get=get_audioClip)) ::UnityEngine::AudioClip*  audioClip;

 __declspec(property(put=set_streamAudio)) bool  streamAudio;

constexpr void __set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_NativeData() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_NativeData() const;

/// @brief Method Create addr 0x2eac068 size 0x54 virtual false final false
static inline ::cordl_internals::intptr_t Create(::UnityEngine::Networking::DownloadHandlerAudioClip*  obj, ::StringW  url, ::UnityEngine::AudioType  audioType) ;

/// @brief Method InternalCreateAudioClip addr 0x2eac0bc size 0x5c virtual false final false
inline void InternalCreateAudioClip(::StringW  url, ::UnityEngine::AudioType  audioType) ;

static inline ::UnityEngine::Networking::DownloadHandlerAudioClip* New_ctor(::StringW  url, ::UnityEngine::AudioType  audioType) ;

/// @brief Method .ctor addr 0x2eac004 size 0x64 virtual false final false
inline void _ctor(::StringW  url, ::UnityEngine::AudioType  audioType) ;

/// @brief Method GetNativeData addr 0x2eac118 size 0xc virtual true final false
inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData() ;

/// @brief Method Dispose addr 0x2eac124 size 0x24 virtual true final false
inline void Dispose() ;

/// @brief Method GetText addr 0x2eac148 size 0x50 virtual true final false
inline ::StringW GetText() ;

/// @brief Method get_audioClip addr 0x2eac198 size 0x3c virtual false final false
inline ::UnityEngine::AudioClip* get_audioClip() ;

/// @brief Method set_streamAudio addr 0x2eac1d4 size 0x44 virtual false final false
inline void set_streamAudio(bool  value) ;

/// @brief Method GetContent addr 0x2eac218 size 0x7c virtual false final false
static inline ::UnityEngine::AudioClip* GetContent(::UnityEngine::Networking::UnityWebRequest*  www) ;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadHandlerAudioClip(DownloadHandlerAudioClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadHandlerAudioClip(DownloadHandlerAudioClip const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DownloadHandlerAudioClip()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerAudioClip, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerAudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerAudioClip*, "UnityEngine.Networking", "DownloadHandlerAudioClip");
