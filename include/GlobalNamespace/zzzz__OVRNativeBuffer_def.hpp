#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNativeBuffer)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNativeBuffer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRNativeBuffer);
// Type: ::OVRNativeBuffer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7536))
// CS Name: ::OVRNativeBuffer*
class CORDL_TYPE OVRNativeBuffer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field disposed offset 0x10
 __declspec(property(get=__get_disposed, put=__set_disposed)) bool  disposed;

/// @brief Field m_numBytes offset 0x14
 __declspec(property(get=__get_m_numBytes, put=__set_m_numBytes)) int32_t  m_numBytes;

/// @brief Field m_ptr offset 0x18
 __declspec(property(get=__get_m_ptr, put=__set_m_ptr)) ::cordl_internals::intptr_t  m_ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_disposed(bool  value) ;

constexpr bool& __get_disposed() ;

constexpr bool const& __get_disposed() const;

constexpr void __set_m_numBytes(int32_t  value) ;

constexpr int32_t& __get_m_numBytes() ;

constexpr int32_t const& __get_m_numBytes() const;

constexpr void __set_m_ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_ptr() const;

static inline ::GlobalNamespace::OVRNativeBuffer* New_ctor(int32_t  numBytes) ;

/// @brief Method .ctor addr 0x2716244 size 0x70 virtual false final false
inline void _ctor(int32_t  numBytes) ;

/// @brief Method Finalize addr 0x271a75c size 0xa8 virtual true final false
inline void Finalize() ;

/// @brief Method Reset addr 0x2715de8 size 0x4 virtual false final false
inline void Reset(int32_t  numBytes) ;

/// @brief Method GetCapacity addr 0x271a828 size 0x8 virtual false final false
inline int32_t GetCapacity() ;

/// @brief Method GetPointer addr 0x2715dec size 0x9c virtual false final false
inline ::cordl_internals::intptr_t GetPointer(int32_t  byteOffset) ;

/// @brief Method Dispose addr 0x271a830 size 0x70 virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x271a804 size 0x24 virtual false final false
inline void Dispose(bool  disposing) ;

/// @brief Method Reallocate addr 0x271a6bc size 0xa0 virtual false final false
inline void Reallocate(int32_t  numBytes) ;

/// @brief Method Release addr 0x271a8a0 size 0xa4 virtual false final false
inline void Release() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRNativeBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRNativeBuffer(OVRNativeBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRNativeBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRNativeBuffer(OVRNativeBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRNativeBuffer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNativeBuffer, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRNativeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNativeBuffer*, "", "OVRNativeBuffer");
