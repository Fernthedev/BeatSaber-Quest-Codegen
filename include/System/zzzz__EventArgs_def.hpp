#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventArgs)
// Forward declare root types
namespace System {
class EventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::EventArgs);
// Type: System::EventArgs
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2376))
// CS Name: ::System::EventArgs*
class CORDL_TYPE EventArgs : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Empty(::System::EventArgs*  value) ;

static inline ::System::EventArgs* getStaticF_Empty() ;

static inline ::System::EventArgs* New_ctor() ;

/// @brief Method .ctor addr 0x2596f70 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventArgs(EventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventArgs(EventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventArgs()  = default;
public:


// Fields

// Static field Empty


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EventArgs, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::EventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::EventArgs*, "System", "EventArgs");
