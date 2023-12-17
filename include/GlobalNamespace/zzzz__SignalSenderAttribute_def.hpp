#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(SignalSenderAttribute)
// Forward declare root types
namespace GlobalNamespace {
class SignalSenderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalSenderAttribute);
// Type: ::SignalSenderAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14399))
// CS Name: ::SignalSenderAttribute*
class CORDL_TYPE SignalSenderAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::PropertyAttribute)]{};

static inline ::GlobalNamespace::SignalSenderAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x20f5ae8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalSenderAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalSenderAttribute(SignalSenderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalSenderAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalSenderAttribute(SignalSenderAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalSenderAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalSenderAttribute, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalSenderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalSenderAttribute*, "", "SignalSenderAttribute");
