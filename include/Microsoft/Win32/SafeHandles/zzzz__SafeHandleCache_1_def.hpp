#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SafeHandleCache_1)
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
template<typename T>
class SafeHandleCache_1;
}
namespace Microsoft::Win32::SafeHandles {
template<::il2cpp_utils::il2cpp_reference_type T>
class SafeHandleCache_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeHandleCache_1);
// Type: Microsoft.Win32.SafeHandles::SafeHandleCache`1
// Type: Microsoft.Win32.SafeHandles::SafeHandleCache`1
namespace Microsoft::Win32::SafeHandles {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2297)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2297), inst: 2 })
// CS Name: ::Microsoft.Win32.SafeHandles::SafeHandleCache`1<T>*
class CORDL_TYPE SafeHandleCache_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_invalidHandle(T  value) ;

static inline T getStaticF_s_invalidHandle() ;

/// @brief Method IsCachedInvalidHandle addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsCachedInvalidHandle(::System::Runtime::InteropServices::SafeHandle*  handle) ;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandleCache_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeHandleCache_1(SafeHandleCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandleCache_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeHandleCache_1(SafeHandleCache_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeHandleCache_1()  = default;
public:


// Fields

// Static field s_invalidHandle


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32::SafeHandles
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Microsoft::Win32::SafeHandles::SafeHandleCache_1, "Microsoft.Win32.SafeHandles", "SafeHandleCache`1");
