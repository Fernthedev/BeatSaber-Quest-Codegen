#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeBuffer)
namespace System {
class InvalidOperationException;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class SafeBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::SafeBuffer);
// Type: System.Runtime.InteropServices::SafeBuffer
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3309))
// CS Name: ::System.Runtime.InteropServices::SafeBuffer*
class CORDL_TYPE SafeBuffer : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid)]{};

/// @brief Field _numBytes offset 0x20
 __declspec(property(get=__get__numBytes, put=__set__numBytes)) ::cordl_internals::uintptr_t  _numBytes;

static inline void setStaticF_Uninitialized(::cordl_internals::uintptr_t  value) ;

static inline ::cordl_internals::uintptr_t getStaticF_Uninitialized() ;

constexpr void __set__numBytes(::cordl_internals::uintptr_t  value) ;

constexpr ::cordl_internals::uintptr_t& __get__numBytes() ;

constexpr ::cordl_internals::uintptr_t const& __get__numBytes() const;

/// @brief Method AcquirePointer addr 0x24d6c00 size 0x108 virtual false final false
inline void AcquirePointer(ByRef<::cordl_internals::Ptr<uint8_t>>  pointer) ;

/// @brief Method ReleasePointer addr 0x24d6e4c size 0xdc virtual false final false
inline void ReleasePointer() ;

/// @brief Method NotInitialized addr 0x24d6d08 size 0x74 virtual false final false
static inline ::System::InvalidOperationException* NotInitialized() ;

// Ctor Parameters [CppParam { name: "", ty: "SafeBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeBuffer(SafeBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeBuffer(SafeBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeBuffer()  = default;
public:


// Fields

// Static field Uninitialized


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::SafeBuffer, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::SafeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::SafeBuffer*, "System.Runtime.InteropServices", "SafeBuffer");
