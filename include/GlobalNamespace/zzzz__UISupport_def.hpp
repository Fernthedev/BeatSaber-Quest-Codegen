#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UISupport)
// Forward declare root types
namespace GlobalNamespace {
class UISupport;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UISupport);
// Type: ::UISupport
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6114))
// CS Name: ::UISupport*
class CORDL_TYPE UISupport : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Initialize addr 0x2a33d1c size 0x74 virtual false final false
static inline void Initialize() ;

// Ctor Parameters [CppParam { name: "", ty: "UISupport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISupport(UISupport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISupport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISupport(UISupport const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UISupport()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UISupport, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UISupport);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UISupport*, "", "UISupport");
