#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IOSelector)
namespace System {
class IOSelectorJob;
}
// Forward declare root types
namespace System {
class IOSelector;
}
// Write type traits
MARK_REF_PTR_T(::System::IOSelector);
// Type: System::IOSelector
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8897))
// CS Name: ::System::IOSelector*
class CORDL_TYPE IOSelector : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Add addr 0x294d8fc size 0x4 virtual false final false
static inline void Add(::cordl_internals::intptr_t  handle, ::System::IOSelectorJob*  job) ;

// Ctor Parameters [CppParam { name: "", ty: "IOSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IOSelector(IOSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IOSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOSelector(IOSelector const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IOSelector()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IOSelector, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::IOSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::IOSelector*, "System", "IOSelector");
