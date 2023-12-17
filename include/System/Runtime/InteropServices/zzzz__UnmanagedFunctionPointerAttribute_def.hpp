#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnmanagedFunctionPointerAttribute)
namespace System::Runtime::InteropServices {
struct CallingConvention;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class UnmanagedFunctionPointerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute);
// Type: System.Runtime.InteropServices::UnmanagedFunctionPointerAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3313))
// CS Name: ::System.Runtime.InteropServices::UnmanagedFunctionPointerAttribute*
class CORDL_TYPE UnmanagedFunctionPointerAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field m_callingConvention offset 0x10
 __declspec(property(get=__get_m_callingConvention, put=__set_m_callingConvention)) ::System::Runtime::InteropServices::CallingConvention  m_callingConvention;

constexpr void __set_m_callingConvention(::System::Runtime::InteropServices::CallingConvention  value) ;

constexpr ::System::Runtime::InteropServices::CallingConvention& __get_m_callingConvention() ;

constexpr ::System::Runtime::InteropServices::CallingConvention const& __get_m_callingConvention() const;

static inline ::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute* New_ctor(::System::Runtime::InteropServices::CallingConvention  callingConvention) ;

/// @brief Method .ctor addr 0x24d71d0 size 0x28 virtual false final false
inline void _ctor(::System::Runtime::InteropServices::CallingConvention  callingConvention) ;

// Ctor Parameters [CppParam { name: "", ty: "UnmanagedFunctionPointerAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnmanagedFunctionPointerAttribute(UnmanagedFunctionPointerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnmanagedFunctionPointerAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnmanagedFunctionPointerAttribute(UnmanagedFunctionPointerAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnmanagedFunctionPointerAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*, "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute");
