#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorWrapper)
// Forward declare root types
namespace System::Runtime::InteropServices {
class ErrorWrapper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ErrorWrapper);
// Type: System.Runtime.InteropServices::ErrorWrapper
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3311))
// CS Name: ::System.Runtime.InteropServices::ErrorWrapper*
class CORDL_TYPE ErrorWrapper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_ErrorCode offset 0x10
 __declspec(property(get=__get_m_ErrorCode, put=__set_m_ErrorCode)) int32_t  m_ErrorCode;

constexpr void __set_m_ErrorCode(int32_t  value) ;

constexpr int32_t& __get_m_ErrorCode() ;

constexpr int32_t const& __get_m_ErrorCode() const;

// Ctor Parameters [CppParam { name: "", ty: "ErrorWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorWrapper(ErrorWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorWrapper(ErrorWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ErrorWrapper()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ErrorWrapper, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ErrorWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ErrorWrapper*, "System.Runtime.InteropServices", "ErrorWrapper");
