#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeFileHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeFileHandle);
// Type: Microsoft.Win32.SafeHandles::SafeFileHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2299))
// CS Name: ::Microsoft.Win32.SafeHandles::SafeFileHandle*
class CORDL_TYPE SafeFileHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid)]{};

static inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* New_ctor(::cordl_internals::intptr_t  preexistingHandle, bool  ownsHandle) ;

/// @brief Method .ctor addr 0x242c11c size 0x28 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  preexistingHandle, bool  ownsHandle) ;

/// @brief Method ReleaseHandle addr 0x242c1a8 size 0x7c virtual true final false
inline bool ReleaseHandle() ;

// Ctor Parameters [CppParam { name: "", ty: "SafeFileHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeFileHandle(SafeFileHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeFileHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeFileHandle(SafeFileHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeFileHandle()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeFileHandle, 0x20>, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeFileHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeFileHandle*, "Microsoft.Win32.SafeHandles", "SafeFileHandle");
