#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerBuffer)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerBuffer);
// Type: UnityEngine.Networking::DownloadHandlerBuffer
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15581))
// CS Name: ::UnityEngine.Networking::DownloadHandlerBuffer*
class CORDL_TYPE DownloadHandlerBuffer : public ::UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::Networking::DownloadHandler)]{};

/// @brief Field m_NativeData offset 0x18
 __declspec(property(get=__get_m_NativeData, put=__set_m_NativeData)) ::Unity::Collections::NativeArray_1<uint8_t>  m_NativeData;

constexpr void __set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_NativeData() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_NativeData() const;

/// @brief Method Create addr 0x2eafb84 size 0x3c virtual false final false
static inline ::cordl_internals::intptr_t Create(::UnityEngine::Networking::DownloadHandlerBuffer*  obj) ;

/// @brief Method InternalCreateBuffer addr 0x2eafbc0 size 0x44 virtual false final false
inline void InternalCreateBuffer() ;

static inline ::UnityEngine::Networking::DownloadHandlerBuffer* New_ctor() ;

/// @brief Method .ctor addr 0x2eaf234 size 0x4c virtual false final false
inline void _ctor() ;

/// @brief Method GetNativeData addr 0x2eafc04 size 0x8 virtual true final false
inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData() ;

/// @brief Method Dispose addr 0x2eafc0c size 0x1c virtual true final false
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadHandlerBuffer(DownloadHandlerBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadHandlerBuffer(DownloadHandlerBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DownloadHandlerBuffer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerBuffer, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerBuffer*, "UnityEngine.Networking", "DownloadHandlerBuffer");
