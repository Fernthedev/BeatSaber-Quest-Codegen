#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeProcessHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeProcessHandle);
// Type: Microsoft.Win32.SafeHandles::SafeProcessHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8860))
// CS Name: ::Microsoft.Win32.SafeHandles::SafeProcessHandle*
class CORDL_TYPE SafeProcessHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid)]{};

static inline void setStaticF_InvalidHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  value) ;

static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* getStaticF_InvalidHandle() ;

static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* New_ctor(::cordl_internals::intptr_t  handle) ;

/// @brief Method .ctor addr 0x282addc size 0x2c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  handle) ;

static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* New_ctor(::cordl_internals::intptr_t  existingHandle, bool  ownsHandle) ;

/// @brief Method .ctor addr 0x282abac size 0x2c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  existingHandle, bool  ownsHandle) ;

/// @brief Method ReleaseHandle addr 0x282ae08 size 0x8 virtual true final false
inline bool ReleaseHandle() ;

// Ctor Parameters [CppParam { name: "", ty: "SafeProcessHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeProcessHandle(SafeProcessHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeProcessHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeProcessHandle(SafeProcessHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeProcessHandle()  = default;
public:


// Fields

// Static field InvalidHandle


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeProcessHandle, 0x20>, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeProcessHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "Microsoft.Win32.SafeHandles", "SafeProcessHandle");
