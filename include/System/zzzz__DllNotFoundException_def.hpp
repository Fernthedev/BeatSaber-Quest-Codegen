#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeLoadException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DllNotFoundException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class DllNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::DllNotFoundException);
// Type: System::DllNotFoundException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2573))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2373))
// CS Name: ::System::DllNotFoundException*
class CORDL_TYPE DllNotFoundException : public ::System::TypeLoadException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::TypeLoadException)]{};

static inline ::System::DllNotFoundException* New_ctor() ;

/// @brief Method .ctor addr 0x259568c size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::DllNotFoundException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25956e8 size 0x24 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::DllNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x259570c size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "DllNotFoundException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DllNotFoundException(DllNotFoundException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DllNotFoundException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DllNotFoundException(DllNotFoundException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DllNotFoundException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DllNotFoundException, 0xb0>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::DllNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::DllNotFoundException*, "System", "DllNotFoundException");
