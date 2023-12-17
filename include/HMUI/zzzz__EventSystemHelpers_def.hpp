#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventSystemHelpers)
// Forward declare root types
namespace HMUI {
class EventSystemHelpers;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::EventSystemHelpers);
// Type: HMUI::EventSystemHelpers
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13530))
// CS Name: ::HMUI::EventSystemHelpers*
class CORDL_TYPE EventSystemHelpers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method IsInputFieldSelected addr 0x211c5ac size 0xf8 virtual false final false
static inline bool IsInputFieldSelected() ;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSystemHelpers(EventSystemHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSystemHelpers(EventSystemHelpers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventSystemHelpers()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::EventSystemHelpers, 0x10>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::EventSystemHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::EventSystemHelpers*, "HMUI", "EventSystemHelpers");
